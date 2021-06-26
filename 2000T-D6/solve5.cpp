#include <bits/stdc++.h>
const int N = 1e7+10;
int t, n, a[500050], d[500050], f[N];
int main()
{
	f[1]=2;
	for(int i=2; i<N; i++) 
		f[i]=i;
	for(int i=2; i*i<N; i++) 
		if (f[i]==i)
			for(int j=i*i; j<N; j+=i) 
				if(f[j]==j) f[j]=i;
	scanf("%d", &n);
	for(int i=0; i<n; i++) for(scanf("%d", a+i), d[i]=a[i];
		                           d[i]%f[a[i]]==0; d[i]/=f[a[i]]);
	for(int i=0; i<n; i++) printf("%d ", d[i]>1?d[i]:-1);
	puts("");
	for(int i=0; i<n; i++) printf("%d ", d[i]>1?f[a[i]]:-1);
}
