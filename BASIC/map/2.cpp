#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(auto it:mpp){
        if(it.second>max)
            max=it.second;
        if(it.second<min)
            min=it.second;
    }
    cout<<max<<","<<min;
    return 0;
}