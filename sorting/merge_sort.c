/* Merge Sort (stable) - Using lb and ub (inclusive indices)
 *
 * - lb  : lower bound index (inclusive)
 * - ub  : upper bound index (inclusive)
 *
 * The array region arr[lb..ub] will be sorted.
 * We allocate a single temporary buffer once in merge_sort().
 */

#include <stdio.h>
#include <stdlib.h>

/*--------------------------------------------------------------------
 * merge_ranges
 *
 * Merge two sorted subsections of arr into arr[lb..ub] using tmp:
 *   Left  half : arr[lb     .. mid]
 *   Right half : arr[mid+1 .. ub ]
 *
 * Preconditions:
 *   - arr[lb..mid] is sorted
 *   - arr[mid+1..ub] is sorted
 *   - tmp has size >= (ub - lb + 1)
 *
 * Postconditions:
 *   - arr[lb..ub] becomes sorted
 *   - Stability preserved (equal items keep relative order)
 *-------------------------------------------------------------------*/
static void merge_ranges(int *arr, int lb, int mid, int ub, int *tmp)
{
    int i = lb;        /* read pointer into left half   */
    int j = mid + 1;   /* read pointer into right half  */
    int write = 0;     /* index inside tmp for writing  */

    /* MAIN MERGE LOOP: keep picking the smaller element
     * from arr[i] and arr[j] and push it into tmp.
     *
     * Invariant before every iteration:
     *   - tmp[0..write-1] holds the smallest 'write' elements
     *     from the multiset arr[lb..ub], in sorted order.
     *   - i and j point to next candidate elements.
     */
    while (i <= mid && j <= ub) {
        if (arr[i] <= arr[j]) {
            /* Take from LEFT SIDE when arr[i] == arr[j] → stability */
            tmp[write++] = arr[i++];
        } else {
            tmp[write++] = arr[j++];
        }
    }

    /* At most one of these loops executes:
     * Copy remaining elements from left or right.
     */
    while (i <= mid) {
        tmp[write++] = arr[i++];
    }
    while (j <= ub) {
        tmp[write++] = arr[j++];
    }

    /* Copy merged elements back into arr[lb..ub] */
    for (int k = 0; k < write; k++) {
        arr[lb + k] = tmp[k];
    }
}

/*--------------------------------------------------------------------
 * mergesort_recursive
 *
 * Purpose:
 *   Recursively sort arr[lb..ub] using merge sort.
 *
 * Recursion structure:
 *      mergesort_recursive(arr, lb, mid,     tmp);
 *      mergesort_recursive(arr, mid+1, ub,   tmp);
 *      merge_ranges(arr, lb, mid, ub,        tmp);
 *
 * Base case:
 *   - If lb >= ub → region size is 0 or 1 → already sorted.
 *-------------------------------------------------------------------*/
static void mergesort_recursive(int *arr, int lb, int ub, int *tmp)
{
    /* Base case: single element or empty region */
    if (lb >= ub)
        return;

    /* Compute mid safely (avoid overflow) */
    int mid = lb + (ub - lb) / 2;

    /* Recursively sort left and right halves */
    mergesort_recursive(arr, lb, mid, tmp);
    mergesort_recursive(arr, mid + 1, ub, tmp);

    /* Merge sorted halves */
    merge_ranges(arr, lb, mid, ub, tmp);
}

/*--------------------------------------------------------------------
 * merge_sort
 *
 * Public function:
 *   Sort arr[0..n-1] using Merge Sort.
 *
 * This function:
 *   - Allocates temp buffer
 *   - Calls recursive worker
 *   - Frees buffer
 *
 * Return:
 *   0  -> success
 *  -1  -> failed (memory allocation error)
 *-------------------------------------------------------------------*/
int merge_sort(int *arr, int n)
{
    if (n <= 1)
        return 0;

    int *tmp = (int *)malloc(sizeof(int) * n);
    if (!tmp) {
        return -1; /* Out of memory */
    }

    mergesort_recursive(arr, 0, n - 1, tmp);

    free(tmp);
    return 0;
}

/*--------------------------------------------------------------------
 * Test driver
 *-------------------------------------------------------------------*/
int main(void)
{
    int arr[] = { 7, 2, 5, 3, 5, 8, 1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    merge_sort(arr, n);

    printf("Sorted:   ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
