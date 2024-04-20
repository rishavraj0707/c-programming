// find the power of  a number using function

#include<stdio.h>
long power(int a, int b);
int main()
{
  int n1, n2;
  printf("Enter base and power: ");
  scanf("%d %d",&n1, &n2);
  long result = power(n1, n2);
  printf("The result = %ld", result);
  return 0;
}
long power(int a, int b)
{
  long result = 1;
  for(int i=1; i<=b; i++)
  {
    result *= a;
  }
  return result;
}