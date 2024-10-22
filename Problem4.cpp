#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=true;
    while(n<=1){
        isprime=false;
       
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
          isprime=false;
          break;
        }
        if(isprime){
            cout<<"Prime";
        }
        else
        cout<<"Not prime";

    }
}