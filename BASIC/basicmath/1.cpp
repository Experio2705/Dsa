#include<bits/stdc++.h>
using namespace std;
void q1(int n){
    int count=0;
    while(n>0){
        int digit=n%10;
        count++;
        n=n/10;
    }
    cout<<count<<endl;
};
void q2(int n){
    int revnum=0;
    while(n>0){
        int ld=n%10;
        revnum=(revnum*10)+ld;
        n=n/10;
    }
    cout<<revnum<<endl;
}
void q3(int n){
    int revnum=0;
    int dup=n;
    while(n>0){
        int ld=n%10;
        revnum=(revnum*10)+ld;
        n=n/10;
    }
    if(revnum==dup)
        cout<<"true"<<endl;
    else 
        cout<<"false"<<endl;
}
void q4(int n){
    int dup=n;
    int num=0;
    while(n>0){
        int ld=n%10;
        num+=ld*ld*ld;
        n=n/10;
    }
    if(num=dup) cout<<"Yes !"<<endl;
    else cout<<"No !"<<endl;
}
void q5(int n){
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }
    vector<int>v;
    
    for(int i=1;i*i<=n;i++){
         if(n%i==0){
             v.push_back(i);
                if((n/i)!=i){
                    v.push_back(n/i);
                }
    }
    }
    sort(v.begin(),v.end());
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}   
void q6(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0 ){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
        }
    }
    if(cnt==2) cout<<"Yes ! a prime number"<<endl;
    else cout<<"Not a prime number"<<endl;
}

void q7(int n,int m){
    while(n>0 && m>0){
        if(n>m) n=n%m;
        else m=m%n;
    }
    if(n==0) cout<<m;
    else cout<<n;
}
int main(){
    int n=52;
    int m=2;
    q1(n);
    q2(n);
    q3(n);
    q4(n);
    q5(n);
    q6(n);
    q7(n,m);
}