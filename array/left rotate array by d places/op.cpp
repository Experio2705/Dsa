#include<iostream>
using namespace std;

// Helper function to reverse a portion of array
void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int d = 3;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);

    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
