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
long long a[101];
void sang(){
	long long i;
}
void createTest(ofstream &fout)
{
    long long N = Create(1, 10000);
	long long l = sqrt(N) ,M = Create(sqrt(l), l);
        
    fout << N << " "<< M;
        
    
	    
}
//sinh test vua
void createTest2(ofstream &fout)
{
    long long N = Create(10000000, 10000000000);
	long long l = sqrt(N) ,M = Create(sqrt(l), l);
        
    fout << N << " "<< M;
}
//sinh test lon
void createTest3(ofstream &fout)
{
    long long N = Create(10000000000000, 1000000000000000);
	long long l = sqrt(N) ,M = Create(sqrt(l), l);
        
    fout << N << " "<< M;
}

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
        if (i < 5)
            createTest(fout);
        else if (i < 10)
            createTest2(fout);
        else
            createTest3(fout);
        fout.close();
        cout << "Created test:" << i + 1 << endl;
    }
    return 0;
}
