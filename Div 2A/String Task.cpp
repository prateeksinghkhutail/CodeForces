#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include <vector>
 
using namespace std;
 
int main(){
	string s;
	cin>>s;
	
	transform(s.begin(),s.end(),s.begin(),::tolower);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' || s[i]=='y')
		{
			s.erase(i,1);
			i=i-1;
		}
		
	
	}
 
	
 
	for(int i=0;i<s.length();i++)
	{
		cout<<"."<<s[i];
	}
	
	
	return 0;
}