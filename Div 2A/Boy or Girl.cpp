#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include <vector>
 
using namespace std;
 
int main(){
	string s;
	cin>>s;
	
	int count=0;
	int len=s.length();
	
	sort(s.begin(),s.end());
	
	for(int i=1;i<s.length();i++)
	{
		if(s[i]!=s[i-1])
		{
			count++;
		}
 
	}
	if(count%2==0)
	{
		cout<<"IGNORE HIM!";
	}
	else{
		cout<<"CHAT WITH HER!";
	}
	return 0;
}