#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,x,y,a,b;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>a>>b;
		cout<<min(min(x,y)*b+(max(x,y)-min(x,y))*a,(x+y)*a)<<endl;
	}
	return 0;
}
