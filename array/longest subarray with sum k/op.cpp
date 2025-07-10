#include<iostream>
using namespace std;

int main(){
    int n=10;
    int a[n]={1,2,3,1,1,1,1,4,2,3};
    int k=3;
    int i=0;
    int j=0;
    int sum=0;
    int len=0;
    while(j < n){
        sum += a[j];

        while(sum > k){
            sum -= a[i];
            i++;
        }

        if(sum == k){
            len = max(len, j - i + 1);
        }

        j++;
    }
    cout<<endl;
    cout<<len;
    return 0;
}