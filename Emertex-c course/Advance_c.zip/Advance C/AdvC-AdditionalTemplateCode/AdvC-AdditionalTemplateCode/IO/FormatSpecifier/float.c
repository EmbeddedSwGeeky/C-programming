#include <stdio.h>

int main()
{
    double f = 453.1285618;
    //double f = 0.0000004;
    double g = 1.2567;
    //double f = 0.00000000789;

    printf("%f\n", f);
    printf("%6.2f\n", g);
    printf("%10.2f\n", g);

    printf("%.2f\n", f);
    printf("%f\n%e\n%g\n", f, f, f);


    f = 0.00000000789; //Store a very small value
    printf("f is %f\n", f);
    printf("%.9f\n", f);
    printf("%5.2f\n", f);

    printf("%Lf\n",1.23456789L);

    return 0;
}
