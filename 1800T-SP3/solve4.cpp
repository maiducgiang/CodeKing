#include<bits/stdc++.h>
#define ll long long
const int N=1e5+5;
ll g,n,t[N],a[N];
int main(){
    for(scanf("%lld",&g);g--;){
        scanf("%lld",&n);
        for(ll i=1;i<=n;i++)scanf("%lld%lld",t+i,a+i);
        ll p=t[1],x=0,y=0,ans=0;
        for(ll i=1,s,e;i<=n;i++){
            if(p<=t[i])p=t[i]+labs(x-a[i]),y=a[i];s=x;
            x+=(t[i+1]-t[i]<labs(x-y)&&i!=n)?((y>x?1:-1)*(t[i+1]-t[i])):(y-x);e=x;
            if((s<=a[i]&&a[i]<=e)||(s>=a[i]&&a[i]>=e))ans++;
        }
        printf("%lld\n",ans);
    }
}
