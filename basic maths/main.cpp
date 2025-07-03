#include<iostream>
using namespace std;

void count(int n){
    int num=n;
    int cnt=0;
    while(num>0){
        cnt+=num%10;
        num=num/10;
    }
    cout<<cnt<<endl;
}
void rev(int n){
    int revnum=0;
    int num=0;
    while(n>0){
        revnum=n%10;
        n=n/10;
        num=(num*10)+revnum;
    }
    cout<<num<<endl;
}
void pal(int n){
    int revnum=0;
    int num=0;
    int m=n;
    while(m>0){
        revnum=m%10;
        m=m/10;
        num=(num*10)+revnum;
    }
    if(num==n) cout<<"Pailindrome"<<endl;
    else    cout<<"Not palindrome"<<endl;
}
void arm(int n){
    int num=0;
    int sum=0;
    int m=n;
    while(n>0){
        num=n%10;
        n=n/10;
        sum+=num*num*num;
    }
    if(sum==m) cout<<"Yes an Armstrong number!"<<endl;
    else cout<<"Not an Armstrong number!"<<endl;
}
void div(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
void prime(int n){
    int cnt=0;
    for(int i=1;i*i<n;i++){
        if(n%i==0){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
        }
    }
    if(cnt==2) cout<<"Prime number!"<<endl;
    else cout<<"Not a prime number!"<<endl;
}
int main(){
    int n=36; 
    count(n);
    rev(n);
    pal(n);
    arm(n);
    div(n);
    prime(n);
    return 0;
}