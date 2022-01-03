#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include <vector>
 
using namespace std;
 
int main(){
	string s;
	cin>>s;
	int l=s.length();
	
	vector<int>arr;
	
	for(int i=0;i<l;i++)
	{
		if(i==0||i%2==0)
		{
			int x=s[i]-'0';
			arr.push_back(x);
		}
	}
	
	int len=arr.size();
	
	sort(arr.begin(),arr.end());
	
	for(int i=0;i<len;i++)
	{
		if(i!=(len-1))
		{
			cout<<arr[i]<<"+";
		}
		else
		{
			cout<<arr[i];
		}
		
	}
	return 0;
}