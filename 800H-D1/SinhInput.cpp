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
    int T = Create(10,10);
    fout << T << endl;
    while (T--)
    {
        int N = Create(10,30);
        fout << N << endl;
        bool a[105] = {0};
        for(int i = 0; i < N;){
        	int k = Create(1,N);
        	if(a[k] == 0){
				fout << k << " ";
				i++;
			}
		}
		fout << endl;
    }
}
//sinh test vua
void createTest2(ofstream &fout)
{
    int T = Create(10,10);
    fout << T << endl;
    while (T--)
    {
        int N = Create(40,70);
        fout << N << endl;
        bool a[105] = {0};
        for(int i = 0; i < N;){
        	int k = Create(1,N);
        	if(a[k] == 0){
				fout << k << " ";
				i++;
			}
		}
		fout << endl;
    }
}
//sinh test lon
void createTest3(ofstream &fout)
{
    int T = Create(10,10);
    fout << T << endl;
    while (T--)
    {
        int N = Create(70,100);
        fout << N << endl;
        bool a[105] = {0};
        for(int i = 0; i < N;){
        	int k = Create(1,N);
        	if(a[k] == 0){
				fout << k << " ";
				i++;
			}
		}
		fout << endl;
    }
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
