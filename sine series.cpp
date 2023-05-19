#include <stdio.h>
#include <math.h>
double sine(double x, int n) 
{
    double sum = 0;
    int i;
    for (i = 0; i < n; i++) 
	{
        double sign = (i % 2 == 0) ? 1.0 : -1.0;
        double term = sign * pow(x, 2*i+1) / tgamma(2*i+2);
        sum += term;
    }
    return sum;
}
int main() 
{
    double x = 0.5;
    int n = 10; 
    double sinx = sine(x, n);
    printf("sin(%.2f) = %.4f\n", x, sinx);
    return 0;
}
