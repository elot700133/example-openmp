#include <stdio.h>
#include <omp.h>
void
ex01()
{
  int nthreads, tid;
  int sum=0;
#pragma omp parallel private(nthreads,tid)
    {
      tid = omp_get_thread_num();
      printf("Ex01 from thread = %d\n", tid);

      if (tid == 0)
        {
          nthreads = omp_get_num_threads();
          printf("Ex01 nthreads = %d\n",nthreads);
        }
      int i=0;

#pragma omp for reduction(+:sum) schedule(static,5)
      for (i=0; i<10; i++)  // i variable is implicitly private when "for" directive is used
        {
          sum += i;
          printf("tid = %d i = %d sum = %d\n",omp_get_thread_num(),i,sum );
        }

#pragma omp barrier
      printf("end 1 tid = %d i = %d sum = %d\n",omp_get_thread_num(),i,sum ); // the i var after the for loop is undetermined

//#pragma omp for reduction(+:sum) schedule(static,5)
//      for (i=0; i<10; i++)
//        {
//          sum += i;
//          printf("tid = %d i = %d sum = %d\n",omp_get_thread_num(),i,sum );
//        }
//      printf("end 2tid = %d sum = %d\n",omp_get_thread_num(),sum);


      tid = omp_get_thread_num();
      printf("End Ex01 from thread = %d\n", tid);
    }
//    printf("sum = %d\n",sum);
}
