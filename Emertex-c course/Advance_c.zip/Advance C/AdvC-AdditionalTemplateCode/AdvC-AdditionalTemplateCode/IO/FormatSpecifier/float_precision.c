#include <stdio.h>

int main()
{
    double f = 453.1285618;

    printf("%f\n", f);
    printf("%.2f\n", f);//Precision set to 2 decimal places
    printf("%10.2f\n", f);//Width = 10, precision = 2

#if 0
    f = 0.00000000789; //Store a very small value
    printf("f is %f\n", f);
    printf("%.9f\n", f);

    printf("%6.2f\n", f);
    printf("%10.2f\n", g);

    printf("%f\n%e\n%g\n", f, f, f);


    f = 0.00000000789; //Store a very small value
    printf("f is %f\n", f);
    printf("%.9f\n", f);
    printf("%5.2f\n", f);

    printf("%Lf\n",1.23456789L);
#endif

    return 0;
}
