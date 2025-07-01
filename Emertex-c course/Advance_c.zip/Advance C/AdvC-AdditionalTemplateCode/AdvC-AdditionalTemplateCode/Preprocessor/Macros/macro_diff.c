int main()
{
    int a = -5, b = 10, c = 15;
    float f1 = 25.7, f2 = 1.3, res2;
    int res;

    res = ((a > 0) ? (a) : (-a));
    printf("Absolute value of a is %d\n", res);

    res = (((b) < (c)) ? (b) : (c));
    printf("Minimum value is %d\n", res);

    res2 = (((f1) < (f2)) ? (f1) : (f2));
    printf("Minimum value is %f\n", res2);

    res = ((a + b) * (a + b));
    printf("Square of (a + b) = %d\n", res);

    return 0;
}
