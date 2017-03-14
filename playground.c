#include <stdio.h>
#include "insertion_sort.c"
#include "selection_sort.c"

void print_arr(int arr[], int len)
{
    printf("[");
    for (int i = 0; i < len-1; i++) {
        printf("%d,", arr[i]); 
    }
    printf("%d]\n", arr[len-1]);
}

void sort_tests()
{
    int arr[] = {6,4,7,3,2,45,7,2,34,61,3,5,13,4,5,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Before sorting: ");
    print_arr(arr, len);
    
    selection_sort(arr, len);
    printf("After sorting: ");
    print_arr(arr, len);

}

int main()
{
    sort_tests();
    return 0;
}

