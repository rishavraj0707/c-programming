// decrement oprrator

#include <stdio.h>

void decrement()
{
	int a = 5 , b = 5;

	int prefix = --a;
	printf("Prefix = %d\n", prefix);

	int postfix = b--;
	printf("Postfix = %d", postfix);
}
int main()
{
	decrement();

	return 0;
}
