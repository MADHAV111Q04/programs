#include <stdio.h>

void read(int[], int);
void display(int[], int);
void mergeSort(int[], int, int);
void merge(int[], int, int, int);

void read(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
}

void mergeSort(int a[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Avoids overflow

        mergeSort(a, left, mid);   // Sort left half
        mergeSort(a, mid + 1, right); // Sort right half

        merge(a, left, mid, right); // Merge the sorted halves
    }
}

void merge(int a[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;  // Size of left subarray
    int n2 = right - mid;     // Size of right subarray

    int L[n1], R[n2]; // Temporary arrays

    // Copy data to temp arrays
    for (i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    // Merge the temp arrays back into a[]
    i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d elements:\n", n);
    read(a, n);

    printf("Before sorting:\n");
    display(a, n);

    mergeSort(a, 0, n - 1);

    printf("After sorting:\n");
    display(a, n);

    return 0;
}

