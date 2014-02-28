
extern void example01();
extern void example02();
extern void example03();
extern void example04();
extern void example05();
extern void ex01();

int main (int argc, char *argv[])
{
//	example01();
//	example02();   // dynamic and static scheduling, with control of chunk size
//	example03();   // matrix operation with static scheduling
//  example04();   // distribute serial code into 2 sections
//  example05();   // orphan construct with reduction at the end to summation the sum variable with operator +
  ex01();
	return 0;
}

