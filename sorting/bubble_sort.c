#define BUBBLE_SORT_PSEUDO_CODE     0

#if  BUBBLE_SORT_PSEUDO_CODE

compare adjacents, if lhs > rhs swap
move largest elemnt to end



Initial:
-2 45 0 11  -9

swp if left hand is bigger than right hand

Initial:
-2 45 0 11 -9


-2 45 0 11 -9   i = 0
-2 45 0 11 -9   1
-2 0 45 11 -9   2
-2 0 11 45 -9   3
-2 0 11 -9 45   4   (range 0 to n-1)

step: 1


-2 0 11 -9 45   i = 0
-2 0 11 -9 45   1
-2 0 11 -9 45   2
-2 0 -9 11 45   3   (range 0 to n-2)

step: 2


-2 0 -9 11 45   i = 0
-2 0 -9 11 45   1
-2 -9 0 11 45   2   (range 0 to n-3)

step: 3


-2 -9 0 11 45   i = 0
-2 -9 0 11 45   1   (range 0 to n-4)

step: 4


Final Sorted:
-9 -2 0 11 45



#endif

#include <stdio.h>

#define ARR_SIZE(x)     (sizeof(x)/sizeof(x[0]))

void print_arr(int *arr, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

}

void swap(int *x, int *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void bubble_sort(int *arr, int n) {
    int is_swap = 0;
    for(int i = 0; i < n -1; i++) {
        is_swap = 0;

        for(int j = 0; j < n - 1 -i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                is_swap = 1;
            }
        }
        if (is_swap == 0)
            break;
    }
}

int main() {
    int arr [] = {-2, 45, 0, 11, -9, -11,};
    int n  = ARR_SIZE(arr);

    print_arr(arr, n);
    bubble_sort(arr, n);
    print_arr(arr, n);

    return 0;
}