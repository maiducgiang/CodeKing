#include<bits/stdc++.h>
#include <vector>
using namespace std;
void solve(){
	long long n, m, vitri = 1;
	
	cin >> n >> m;
	vector <long long> a;
	vector <long long> b;
	for(long long i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			a.push_back(i);
			if(i != n/i){
				b.push_back(n/i);
			}
			
		}
	}
	//for(int i = 0; i < b.size(); i++ ) cout<<b[i] <<" ";
	if(a.size() + b.size() >= m){
			if(m <= a.size()) cout<<a[m - 1];
			else cout<<b[b.size() - (m - a.size())];
	}
	else cout<< -1;
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}


