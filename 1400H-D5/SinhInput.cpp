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

int x = 1;
//sinh test nho
void createTest(ofstream &fout)
{
    int T = Create(1000,1000);
    fout << T << endl;
    while (T--)
    {
        fout << x << endl;
        x++;
    }
}
//sinh test vua
void createTest2(ofstream &fout)
{
    int T = Create(1000,1000);
    fout << T << endl;
    while (T--)
    {
        fout << x << endl;
        x++;
    }
}
//sinh test lon
void createTest3(ofstream &fout)
{
    int T = Create(1000,1000);
    fout << T << endl;
    while (T--)
    {
        fout << x << endl;
        x++;
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
