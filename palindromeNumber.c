#include <stdio.h>

int isPalindrome(int n)
{
	int r = 0, t = n;
	while (t != 0)
	{
		r = r * 10;
		r = r + t % 10;
		t = t / 10;
	}
	if (r == n)
		return 1;
	else
		return 0;
}
int isEven(int n)
{
	return n % 2 == 0 ? 1 : 0;
}
int isPrime(int n)
{
	int mid = n / 2, i, flag = 1;
	for (i = 2; i < mid; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int fact(int n)
{
	if (n > 1)
	{
		n = n * fact(n - 1);
	}
	return n;
}

int main()
{
	int n;
	printf("Enter Number : ");
	scanf("%d", &n);
	int rs1 = isPalindrome(n);
	rs1 == 0 ? printf("%d is not a Palindrome\n", n) : printf("%d is a Palindrome\n", n);
	int rs2 = isEven(n);
	rs2 == 0 ? printf("%d is Odd Number\n", n) : printf("%d is Even Number\n", n);
	int rs3 = isPrime(n);
	rs3 == 0 ? printf("%d is not a Prime Number \n", n) : printf("%d is a Prime Number \n", n);
	if (n < 10)
	{
		int rs4 = fact(n);
		printf("Factorial of %d is %d \n", n, rs4);
	}

	return 0;
}