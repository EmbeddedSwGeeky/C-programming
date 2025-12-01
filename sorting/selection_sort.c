#define  SELECTION_SORT_PSEUDO_CODE     0



#if SELECTION_SORT_PSEUDO_CODE

Idea: Select the minimum and swap
Initial:
9 8 6 -3 2 0

-3 8 6 9 2 0      i = 0, range 0..5, swap (9, -3)
-3 0 6 9 2 8      i = 1, range 1..5, swap (8, 0)
-3 0 2 9 6 8      i = 2, range 2..5, swap (6, 2)
-3 0 2 6 9 8      i = 3, range 3..5, swap (9, 6)
-3 0 2 6 8 9      i = 4, range 4..5, swap (9, 8)

i runs from 0 to n-2

#endif

#include <stdio.h>

#define ARR_SIZE(x)     sizeof(x)/sizeof(x[0])

void print_arr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void swap(int *x, int *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void selection_sort(int *arr, int n) {
    int min_idx = 0;

    for (int i = 0; i <= n -2; i++) {
        min_idx = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(&arr[min_idx], &arr[i]);
}
}

int main () {
    int arr [] ={9, 8, 6, -3, 2, 0};
    int n = ARR_SIZE(arr);
    print_arr(arr, n);
    selection_sort(arr, n);
    print_arr(arr, n);

    return 0;
}