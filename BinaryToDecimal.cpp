#include<iostream>
using namespace std;
int binaryTodecimal(int binary){
	int remainder;
	int decimal=0;
	int pow=1;
	while(binary>0){
		remainder=binary%10;
		binary=binary/10;
		decimal+=remainder*pow;
		pow*=2;
	}
	return decimal;
}
int main(){
	int a;
	cin>>a;
	cout<<"Binary Representation:"<<binaryTodecimal(a)<<endl;
	return 0;
}
