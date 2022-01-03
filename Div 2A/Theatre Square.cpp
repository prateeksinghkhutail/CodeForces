#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main(){
	long long int n,m,a;
	cin>>n>>m>>a;
	
	
	
	double c=double(m)/double(a);
	
	double b=double(n)/double(a);
	
	long long int i=ceil(b)*ceil(c);
	cout<<i;
	
 
	return 0;
}