#include<stdio.h>

void quicksort(int a[], int first, int last) {
    if (first < last) {
        int pivot = first;
        int i = first;
        int j = last;
        
        while (i < j) {
            while (a[i] <= a[pivot] && i < last) {
                i++;
            }
            while (a[j] > a[pivot]) {
                j--;
            }
            if (i < j) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
        int temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        
        quicksort(a, first, j - 1);
        quicksort(a, j + 1, last);
    }
}

int main() {
    int i, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("Sorted array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
