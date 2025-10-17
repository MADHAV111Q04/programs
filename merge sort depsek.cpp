#include <stdio.h>
void mergesort(int a[], int low, int high);
void merge(int a[], int low, int mid, int high);
void mergesort(int a[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        mergesort(a, low, mid);     
        mergesort(a, mid + 1, high);  
        merge(a, low, mid, high);     
    }
}
void merge(int a[], int low, int mid, int high) {
    int i, j, k;
    int b[50]; 

    i = low;    
    j = mid + 1; 
    k = low;  
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high) {
        b[k] = a[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++) {
        a[i] = b[i];
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
    mergesort(a, 0, n - 1);
    printf("Sorted array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

