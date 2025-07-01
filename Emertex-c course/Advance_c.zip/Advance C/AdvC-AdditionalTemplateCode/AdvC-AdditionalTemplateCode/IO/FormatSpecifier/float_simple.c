#include <stdio.h>

int main()
{
    //double f = 453.1285618;
    //double f = 0.0000004;
    double f = 0.00000000789;

    printf("%f\n%e\n%g\n", f, f, f);


#if 0
    f = 0.00000000789; //Store a very small value
    printf("f is %f\n", f);
    printf("%.9f\n", f);
    printf("%5.2f\n", f);

    printf("%Lf\n",1.23456789L);
#endif

    return 0;
}
