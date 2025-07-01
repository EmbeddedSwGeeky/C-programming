#include <stdio.h>

int sum(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
	sum += a[i];

    return sum;
}

double average(int a[], int n)
{
    double avg;

    avg = (double)sum(a, n) / n;
    return avg;
}

int main()
{
    //int a[] = {1, 2, 2};
    int n = 3;
    int *a = malloc(n * sizeof(int));

    a[0] = 1, a[1] = 2, a[2] = 3;
    double res;

    res = average(a, n);
    printf("avg = %lf\n", res);

    free(a);

    return 0;
}











