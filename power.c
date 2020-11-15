#include <stdio.h>
double Exponent(int x)
{
double a=2.71;
int i;
for(i=0;i<x;i++)
a=a*a;
return a;
}

double Power(double x , int y)
{
double a;
int i;
for(int i=0;i<y;i++)
a=x*x;
return a;
}
