#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main(){
	int m,n;
	cin>>m>>n;
	int ans=0;
	if(m==1)
	{
		if(n==1)
		{
			cout<<0;/*if(m%2==0)
	{
		ans=(m/4)*n
	}*/
		}
		else{
			cout<<floor(n/2);
		}
	}
	else if(n==1){
		cout<<floor(m/2);
 
	}else{
		if(m%2==0)
		{
			cout<<(m/2)*n;
		}else{
			cout<<(((m-1)/2)*n)+floor(n/2);
		}
	}
 
	
	
	return 0;
}