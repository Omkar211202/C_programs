



#include <stdio.h>
void main()
{
int a, b = 0, power; int counter = 0;
printf("Enter the number:\n");
scanf("%d", &a);
printf("Enter the power:\n");
scanf("%d", &power);
b += a;



while (counter < (power-1))
	{
		a *= b;
		counter++;
	}
printf("The resultant number is %d\n", a);
return;
}
