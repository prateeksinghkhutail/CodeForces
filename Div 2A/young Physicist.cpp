#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include <vector>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int arr[n][3];
	int a=0;
	int b=0;
	int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
			a=a+arr[i][0];
			b=b+arr[i][1];
			c=c+arr[i][2];
	}
	if(a==0 && b==0 && c==0)
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
