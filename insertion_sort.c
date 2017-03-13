#include <stdio.h>

void insertion_sort(int arr[], int len) {
    int tmp;
    for (int i = 1; i < len; i++) {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
        }
    }
}

int main() {
    int xs[] = {6,4,2,5,2,3,5,1,1,4};
    insertion_sort(xs, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", xs[i]);
    }
}
