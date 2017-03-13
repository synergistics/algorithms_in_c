#include <stdio.h>

void insertion_sort_1(int arr[], int len)
{
    int tmp, i, j;
    for (i = 1; i < len; i++) {
        j = i-1;

        while (j >= 0 && arr[j] > arr[j+1]) {
            tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp;
            j--;
        }
    }
}

void insertion_sort_2(int arr[], int len) {
    int key;
    for (int i = 1; i < len; i++) {
        key = arr[i];
        int j = i;
        while (j > 0 && arr[j-1] > key) {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
    }
}

int main() {
    int xs[] = {6,4,2,5,2,3,5,1,1,4};

    insertion_sort_1(xs, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", xs[i]);
    }
}
