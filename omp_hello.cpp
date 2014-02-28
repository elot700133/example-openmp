#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int
example01()
{
  int nthreads, tid;

  /* Fork a team of threads giving them their own copies of variables */
#pragma omp parallel private(nthreads, tid)  // private - the var have instances in each thread
    {

      /* Obtain thread number */
      tid = omp_get_thread_num();
      printf("Hello World from thread = %d\n", tid);

      /* Only master thread does this */
      if (tid == 0)
        {
          nthreads = omp_get_num_threads();
          printf("Number of threads = %d\n", nthreads);
        }

    } /* All threads join master thread and disband */


    nthreads = omp_get_num_threads();
    printf("example01 End Number of threads = %d\n", nthreads);

    return 0;
}
