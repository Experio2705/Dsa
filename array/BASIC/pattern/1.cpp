#include<bits/stdc++.h>
using namespace std;
void pat1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<= i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pat2(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" " ;
        }
        cout<<endl;
    }
}
void pat3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1 <<" ";
        }
        cout<<endl;
    }
}
void pat4(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pat5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pat6(int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
void pat7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void pat8(int n){
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pat9(int n){
    int st=1;
    for(int i=0;i<n;i++){
        if(i%2==0) st=1;
        else st=0;
        for(int j=0;j<=i;j++){
             cout<<st<<" ";
             st=1-st;
        }
        cout<<endl;
    }
}
void pat10(int n){
    for(int i=1;i<=n;i++){
        int num=i;
        for(int j=1;j<=num;j++){
            cout<<j;
        }
        for(int j=i+1;j<=2*n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
   
}
void pat11(int n){
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
void pat12(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pat13(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+n-i-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pat14(int n){
    char k='A';
    for(int i=0;i<n;i++){
        for(char j=0;j<=i;j++){
            cout<<k;
        }
        k++;
        cout<<endl;
    }
}
void pat15(int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
        }
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
}
void pat16(int n){
    for(int i=0;i<n;i++){
        for(char j='A'+n-i-1;j<='A'+n-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pat17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
                cout<<"*";
            }
        cout<<endl;
    }
          for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*n-2*i-2;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pat18(int n){
    for(int i=0;i<=2*n-1;i++){
        int str=i;
        if(i>n)str=2*n-i;
        for(int j=0;j<str;j++){
            cout<<"*";
        }
        int sp=i;
        if(i>n)sp=2*n-i;
        for(int j=0;j<2*n-2*sp;j++){
            cout<<" ";
        }
         for(int j=0;j<str;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pat19(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of times:";
    cin>>n;
    pat1(n);
    pat2(n);
    pat3(n);
    pat4(n);
    pat5(n);
    pat6(n);
    pat7(n);
    pat8(n);
    pat9(n);
    pat10(n);
    pat11(n);
    pat12(n);
    pat13(n);
    pat14(n);
    pat15(n);
    pat16(n);
    pat18(n);
    pat19(n);
    return 0;
}