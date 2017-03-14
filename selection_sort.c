/* Selection Sort
 *
 * - desc: At each index i of the array, find the minimum value in the subarray
 * arr[i:len(arr)] and swap it with the value at position i.
 * 
 * - sample iteration:
 *   arr    : [1,2,1,3]
 *   i      : 1
 *   subarr : [2,1,3]
 *   mindex : 2 (value: 1) 
 *   swap   : [1,1,2,3]
 *
 * - loop invariants:
 *   -- on the nth iteration of the outer loop, the subarray arr[0:n] is sorted
 *   
 *
 * */

void selection_sort(int arr[], int len)
{
    for (int i = 0; i < len; i++) {
        int mindex = i;
        int tmp;
        for (int j = i+1; j < len; j++) {
            if (arr[j] < arr[mindex]) {
                mindex = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[mindex];
        arr[mindex] = tmp; 
    }
}
