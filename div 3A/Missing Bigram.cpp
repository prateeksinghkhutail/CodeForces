#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include <vector>
 
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t!=0)
	{
	int n;
	cin>>n;
	vector<string> bigrams(n-2);
	for(auto &b : bigrams)
	{
		cin>>b;
	}
	string s=bigrams[0];
	bool found=false;
	for(int i=1;i<n-2;i++)
	{
		if(s.back()!=bigrams[i].front())
		{
			s+=bigrams[i];
			found=true;
		}
		else{
			s+=bigrams[i].back();
		}
	}
 
	if(!found)
	{
		s+='a';
	}
	cout<<s<<endl;
	t--;
	}
	return 0;
}
