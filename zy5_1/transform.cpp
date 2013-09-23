#include<iostream>
using namespace std;
float transform1(float c){
	float f;
	f=(9*c+160)/5;
	return f;
}
float transform2(float f){
	float c;
	c=5*(f-32)/9;
	return c;
}
int main(){
	float s;
	cin>>s;
	cout<<transform1(s)<<endl;
	cout<<transform2(s)<<endl;
	return 0;
}
