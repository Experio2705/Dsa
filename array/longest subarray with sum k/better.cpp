#include<iostream>
#include<map>
using namespace std;

int main(){
    int n=10;
    int a[n]={1,2,3,1,1,1,1,4,2,3};
    int k=3;
    map<int,int>mp;
    int sum=0;
    int len=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(mp.end()==mp.find(sum))
            mp[sum]=i;
        if(sum==k)
            len=max(len,i+1);
        int z=sum-k;
        if(mp.end()!=mp.find(z)){
            int maxx=i-mp[z];
            len=max(len,maxx);
        }
        
    }
    cout<<len;
    return 0;
}
