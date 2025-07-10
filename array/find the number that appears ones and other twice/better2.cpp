#include<iostream>
#include<map>
using namespace std;

int main(){
    int n=7;
    int a[n]={1,1,2,2,3,3,4};
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        if(it.second==1){
            cout<<it.first;
        }
    }
    return 0;
}