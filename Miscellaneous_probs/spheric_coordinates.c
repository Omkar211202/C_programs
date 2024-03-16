#include <stdio.h>
#include <math.h>
void spheric(float,float,float);

void main()
{
float a,b,c;
printf("\nenter the 3 coordinates\n");
scanf("%f %f %f",&a,&b,&c);
spheric(a,b,c);
}

void spheric(float d,float e,float f)
{
float r,fi,teta;
r=sqrt(pow(d,2)+pow(e,2)+pow(f,2));
fi=atan(sqrt(f/(pow(d,2)+pow(e,2))));
teta=atan(e/d);
printf("\nThe coordintes are (%f,%f,%f)",r,fi,teta);
}
