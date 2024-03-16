//check if a number is prime or not.

#include <stdio.h>
void main()
{

int n, count = 2, fcount = 0;
printf("Enter: ");
scanf("%d", &n);

while (count <= n)
{
	if (n % count == 0) {fcount += 1;}

	count += 1;
}

if (fcount == 1)
	printf("Prime.\n");
else 
	printf("Not Prime.\n");

return;
}
