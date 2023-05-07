#include "Head.h"
int main()
{
    double a, b;
    int n;

    menu();
    printf("Integration range a: ");
    scanf_s("%lf", &a);
    printf("Integration range b: ");
    scanf_s("%lf", &b);
    printf("Number of subintervals: ");
    scanf_s("%d", &n);
           
    printf("Value of the integral according to the Riemann Method = :%.4lf\n", Riemann(a, b, n));
    printf("Value of the integral according to the Trapezoidal Method = :%.4lf\n", Trapezoidal(a, b, n));
    printf("Value of the integral according to the Simpson's Method = :%.4lf\n", Simpson(a, b, n)); 
     
}