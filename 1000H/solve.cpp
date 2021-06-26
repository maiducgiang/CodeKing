#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

int main(){
	long long t, n;
	for(cin>>t;t--;cout<<endl){
        cin>>n;
        int a=sqrt(n/2);
        int b=sqrt(n/4);
        cout<<(a*a*2==n||b*b*4==n?"Yes":"No");
    }
    return 0;
}
