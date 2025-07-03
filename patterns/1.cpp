#include<iostream>
using namespace std;
void print1(){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<" * ";
        }
        cout<<endl;
    }
}
void pat2(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pat3(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void pat4(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
void pat5(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-i+1;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pat6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pat7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
            }
        for(int k=0;k<i*2+1;k++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
            }
        cout<<endl;
    }
}
void pat8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<n*2-i*2-1;k++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pat9(int n){
    for(int i=1;i<=n*2-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pat10(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void pat11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int k=0;k<n*2-2-i*2;k++){
            cout<<" ";
        }
        for(int j=i;j>=0;j--){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void pat12(int n){
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
}
void pat13(int n){
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=0;j<=i;j++){
            cout<<(char)(cnt+64);
            cnt++;
        }
        cout<<endl;
        
    }
}
void pat14(int n){
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=0;j<n-i;j++){
            cout<<(char)(cnt+64);
            cnt++;
        }
        cout<<endl;
    }
}
void pat15(int n){
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)(cnt+64);
        }
        cout<<endl;
        cnt++;
    }
}
void pat16(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpt=(i*2+1)/2;
        for(int k=0;k<i*2+1;k++){
            cout<<ch;
            if(k<breakpt) ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pat17(int n){
    for(int i=0;i<n;i++){
        char ch='A'+n-1;
        ch=ch-i;
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
void pat18(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<i*2;k++){
            cout<<" ";
        }
                for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pat19(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
                 cout<<"*";
             }
        for(int k=0;k<2*n-(i+1)*2;k++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
                 cout<<"*";
             }
        cout<<endl;        
    }
}
void pat20(int n){
    int cnt=0;
    int space=2*n-2+1;
    for(int i=0;i<2*n-1;i++){
        if(i<n) cnt++;
        else cnt--;
        for(int j=0;j<cnt;j++){
            cout<<"*";
        }
        
        for(int k=0;k<space;k++){
            cout<<" ";
        }
        for(int j=0;j<cnt;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i < n - 1) space -= 2;
        else space += 2;
    }
    
}
void pat21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 ||j==0 || j==n-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
void pat22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int cnt=n;
            if(i==0 || i==2*n-1 ||j==0 || j==2*n-1) 
                cout<<cnt;
            else
                cout<<cnt-(i);
        }
        cout<<endl;
    }
}

int main(){
    int n=4;
    // print1();
    // pat2();
    // pat3();
    // pat4();
    // pat5(n);
    // pat6(n);
    // pat7(n);
    // pat8(n);
    // pat9(n);
    // pat10(n);
    // pat11(n);
    // pat12(n);
    // pat13(n);
    // pat14(n);
    // pat15(n);
    // pat16(n);
    //pat17(n);
    // pat18(n);
    // pat19(n);
    //pat20(n);
    //pat21(n);
    // pat22(n);
    return 0;
}