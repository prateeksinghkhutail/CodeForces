#include<iostream>
#include<cstring>
#include<algorithm>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	cin.get();
	string s[n];
	for(int i=0;i<n;i++)
	{
		getline(cin,s[i]);
		
	}	
	int len[n];
	for(int j=0;j<n;j++)
	{
		len[j]=s[j].length();
		if(len[j]>10)
		{
			string s2=s[j];
			cout<<s2[0]<<len[j]-2<<s2[len[j]-1]<<endl;
		}
		else{
			cout<<s[j]<<endl;
		}
		
	}
 
	return 0;
}