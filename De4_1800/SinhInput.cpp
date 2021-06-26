#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
typedef pair<long long, long long> pt;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
long long Create(long long l, long long r)
{ //sinh 1 so tu 1 den n
    return rng() % (r - l + 1) + l;
}
//sinh test nho
void createTest(ofstream &fout)
{
	long long test = Create(1,10);
	fout << test << endl;
	while(test--){
		long long n = Create(10, 100);
    	fout << n << endl;
    	for ( int i = 0; i<n; i++){
    		long long t = Create(1,1000);
    		long long x = Create(-1000,1000);
    		fout << t << " " << x << endl;
		}
	}
    
}
//sinh test vua
void createTest2(ofstream &fout)
{
	long long test = Create(10,20);
	fout << test << endl;
	while(test--){
		long long n = Create(10, 100);
    	fout << n << endl;
    	for ( int i = 0; i<n; i++){
    		long long t = Create(100,100000);
    		long long x = Create(-100000,100000);
    		fout << t << " " << x << endl;
		}
	}
    
}
//sinh test lon

//cho nay khong can sua
int main()
{
    srand(time(NULL));
    int N = 15;
    for (int i = 0; i < N; i++)
    {
        string s;
        ostringstream convert;
        convert << i + 1;
        s = convert.str();
        string input = "test/" + s + ".in";
        ofstream fout(input.c_str());
        if (i<10)
            createTest(fout);
        else
            createTest2(fout);
        fout.close();
        cout << "Created test:" << i + 1 << endl;
    }
    return 0;
}
