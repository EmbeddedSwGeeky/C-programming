/* Pseudo code 

#@ Consider array as sort and unsorted array
#@ By rule Consider always index zero element as sorted.
#@ compare and shift from index 1 to n-1

#@ j>0 && is element from left hand side is gerter than > key
#@ if yes, shift element to right side      arr[j] = arr[j -1];   # 1element swapped here

#@ decremnet j--; compare same untill loop breaks
#@ assign key  arr[j] = key     #second element swapped here



Things to keep in mind::

Should not perform swap, if you do that it will become bubble sort.

yo have to do shift and insert element.

outer loop starts from 1 to n
j > 0 && arr[j-1] > key
left element arr[j -1] > key

**/


/* Code */

#include <stdio.h>

#define ARR_SIZE(x)     sizeof(x)/sizeof(x[0])

void print_arr(int *arr, int n) {
    if (arr == NULL || n < 0)
    return;

    for (int i = 0; i < n; i++) {
        printf ("%d,", arr[i]);
    }
    printf("\n");
}



void insertion_sort(int *arr, int n) {
        if (arr == NULL || n < 0)
            return;

            int j = 0, key = 0;
        for (int i = 1; i < n; i++) {
            key = arr[i];
            j = i;
            while (j > 0 && arr[j - 1] > key) {
                arr[j] = arr[j-1];
                j--;
            }
            arr[j] = key;
        }
}



int main() {

    int arr [] = {10, 60, 40, -2, 3, 8, 2, 0};

    int n  = ARR_SIZE(arr);
    print_arr(arr, n);
    insertion_sort(arr, n);
    print_arr(arr, n);

    return 0;
}