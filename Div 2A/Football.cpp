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
	
	
	bool ans=false;
	
	for(int i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		{
			count++;
			
		}
		else{
			count=0;
		}
		if(count==6)
		{
			ans=true;
			break;
		}
	
	}
	
	if(ans)
	{	
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	
	return 0;
}