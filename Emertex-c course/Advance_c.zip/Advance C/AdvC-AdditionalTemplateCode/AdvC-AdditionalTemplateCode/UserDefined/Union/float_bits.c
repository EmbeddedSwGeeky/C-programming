#include <stdio.h>

typedef union 
{
    float f;
    struct {
	unsigned int mantissa:23;
	unsigned int exponent:8;
	unsigned int negative:1;
    } ieee_float;
}float_union;
 
int main()
{
    unsigned int mantissa, exponent, negative;
    float_union val;

    printf("Float? ");
    scanf("%f", &(val.f));

    printf("val = %X\n", *(int *)&val.f);

    negative = val.ieee_float.negative;
    exponent = val.ieee_float.exponent;
    mantissa = val.ieee_float.mantissa;

    printf("float    = %.32f\n", val.f);
    printf("sign     = 0x%X\n", negative);
    printf("mantissa = 0x%X\n", mantissa);
    printf("exponent = %u\n", exponent);
    //printf("exponent = 0x%X\n", exponent);

//    printf("value    = (-1)^sign * (radix)^(exponent - bias) * (1).mantissa\n");
//    printf("           where calculations are in binary (for radix 2)\n");

    return(0);
}
