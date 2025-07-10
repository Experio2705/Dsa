#include<iostream>
using namespace std;

int main(){
    int n=11;
    int a[n]={1,1,1,1,0,1,1,0,1,1,1};
    int cnt=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            cnt++;
        }
        else {
            if(cnt>max)
                max=cnt;
            cnt=0;
        }
    }
    cout<<max;
    return 0;
}