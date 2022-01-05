// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …


#include <stdio.h>

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}

int main ()
{
	int n ;
    scanf("%d", &n);
    printf("%d", fib(n));
	
	
    return 0;
}