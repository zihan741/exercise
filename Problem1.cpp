#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,remainder,reverse=0;
    cout<<"Enter Number for Reverse: ";
    cin>>n;
   while(n>0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    cout<<reverse;
}