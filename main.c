#include <stdio.h>

#define AND(a, b) (a && b)
#define OR(a, b) (a || b)
#define XOR(a, b) (a ^ b)
#define NOT(a) (!a)

int main()
{
	printf("%d\n", XOR(2, 1));
	return 0;
}
