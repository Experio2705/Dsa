// #include<iostream>
// using namespace std;
// int partition(int arr[],int low,int high){
//     int pivot=arr[low];
//     int i=low+1;
//     int j=high;
//     int temp;
//     while(i<=j){
//         while(pivot>=arr[i] && i<=high){
//             i++;
//         }
//         while(pivot<arr[j] && j>=low){
//             j--;
//         }
//         if(i<j){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//     temp=arr[low];
//     arr[low]=arr[j];
//     arr[j]=temp;
//     return j;
// }
// void quicksort(int arr[],int low,int high){
//     if(low<high){
//         int index=partition(arr,low,high);
//         quicksort(arr,low,index-1);
//         quicksort(arr,index+1,high);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     quicksort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Pivot is the first element
    int i = low + 1;
    int j = high;
    int temp;

    while (i <= j) {
        // Move `i` forward while the current element is less than or equal to the pivot
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        // Move `j` backward while the current element is greater than the pivot
        while (j >= low && arr[j] > pivot) {
            j--;
        }
        // Swap elements if `i` is still less than `j`
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Place the pivot element in its correct position
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; // Return the partition index
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int index = partition(arr, low, high); // Find the partition index
        quicksort(arr, low, index - 1);       // Sort the left subarray
        quicksort(arr, index + 1, high);      // Sort the right subarray
    }
}

int main() {
    int n;
    cin >> n; // Input the size of the array
    int arr[n];
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Sort the array using QuickSort
    quicksort(arr, 0, n - 1);
    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
