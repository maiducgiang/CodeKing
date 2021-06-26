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
    long long n = Create(1, 10);
    fout << n << endl;
    long long a[n];
    for ( int i = 0; i<n; i++){
    	a[i] = Create(1,1000);
    	fout << a[i] << " ";
	}
}
//sinh test vua
void createTest2(ofstream &fout)
{
    long long n = Create(10, 100);
    fout << n << endl;
    long long a[n];
    for ( int i = 0; i<n; i++){
    	a[i] = Create(100,100000);
    	fout << a[i] << " ";
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
