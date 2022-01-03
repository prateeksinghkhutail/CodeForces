#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int a[n][3];
	int ans;
	int result=0;
	for(int i=0;i<n;i++)
	{
		ans=0;
		for(int j=0;j<3;j++)
		{
 
			cin>>a[i][j];
			if(a[i][j]==1){
				ans=ans+1;
			}
		}
		if(ans>=2){
			result=result+1;
		}
	}
 
	cout<<result;
 
	return 0;
}