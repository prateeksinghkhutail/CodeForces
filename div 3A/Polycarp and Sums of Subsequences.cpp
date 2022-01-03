#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t!=0)
	{
	int arr[7];
	int ans[3];
	for(int i=0;i<7;i++)
	{
		cin>>arr[i];
	}
	ans[0]=arr[0];
	ans[1]=arr[1];
	ans[2]=arr[6]-arr[0]-arr[1];
	
	for(int j=0;j<3;j++)
	{
		cout<<ans[j]<<" ";
	}
	cout<<endl;
 
 
	t--;
	}
	return 0;
}