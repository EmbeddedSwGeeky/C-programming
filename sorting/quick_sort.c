#define QUICK_PSEUDO_CODE    0

#if QUICK_PSEUDO_CODE

Pivot: first element
Two pointers:

1. low starting from the left
2. high starting from the right

Choose pivot = A[low]

Move low forward until you find an element greater than pivot.

Move high backward until you find an element smaller than pivot.

If low < high, swap those two elements.
If low >= high, stop the loop.

Finally, swap pivot with A[high].
(Now pivot is in correct sorted position.)

Return high as the partition index.

Repeat on the left and right halves.

#endif

#include <stdio.h>

void swap(int *x, int *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void print_arr(int *arr, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

}

/*
 Partition variant (pivot = arr[lb], two-pointer)
 Returns index where pivot finally resides (end).
 This follows the algorithm you described:
  - start from lb and ub
  - move start forward until > pivot
  - move end backward until <= pivot (we use < pivot for strictness below)
  - swap when start < end
  - when pointers cross (start >= end), place pivot at 'end' and return end
*/
int partition_pivot_first(int *arr, int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;

    /* Loop until pointers meet or cross */
    while (start < end) {
        /* Move start forward to find element greater than pivot.
           Guard start < ub to avoid overrunning. */
        while (start < ub && arr[start] <= pivot)
            start++;

        /* Move end backward to find element smaller than or equal to pivot.
           Use end > lb to avoid underrunning (pivot at lb). */
        while (end > lb && arr[end] > pivot)
            end--;

        if (start < end) {
            swap(&arr[start], &arr[end]);
        }
    }

    /* Place pivot to its final place */
    swap(&arr[lb], &arr[end]);

    return end;
}

void quick_sort(int *arr, int lb, int ub)
{
    if (lb < ub) {
        int pivot_index = partition_pivot_first(arr, lb, ub);

        /* Recurse left and right halves (exclude pivot_index) */
        quick_sort(arr, lb, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, ub);
    }
}
int main(void)
{
    int arr[] = { 24, 3, 45, 29, 37, 12, 30, 2, 17, 29 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before: ");
    print_arr(arr, n);

    quick_sort(arr, 0, n - 1);

    printf("After : ");
    print_arr(arr, n);

    return 0;
}