#include<stdio.h>
int main()
{
double a,b,c,f,g;
float d,e;
printf("enter a number : ");
scanf("%lf"&a);
print("the first function is : f(x)=e^x+x^3-2");
b=Exponent((int)a);
c=power(a,3);
d=add((float)b,(float)c);
e=sub((float)d,2);
printf("=%f",e);

print("the second function is : f(x)=3x+2x^2");
b=mul(a,3));
c=power(a,2);
d=mul(c,2);
e=add((float)d,(float)b);
printf("=%f",e);

print("the third function is : f(x)=(4x^3)/5-2x");
b=power(a,3);
c=mul(b,4);
f=div(c,5);
g=mul(a,2);
d=sub((float)c,(float)g);
printf("=%f",d);
}

float add(float x , float y)
{
return x + y;
}

float sub(float x , float y)
{
return x - y;
}

double mul(double x , int y)
{
return y*x;
}
 
double div(double x, int y)
{
return x/y;
}

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
