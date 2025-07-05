#include<iostream>
using namespace std;

int main(){
    //create an another array store elements upto d places swap elements of original 
    //array and then place the elemts of dummy array into the original array
    int n=7;
    int d=3;
    int a[n]={1,2,3,4,5,6,7};
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    for(int i=n-d;i<n;i++){
        a[i]=temp[i-(n-d)];
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}