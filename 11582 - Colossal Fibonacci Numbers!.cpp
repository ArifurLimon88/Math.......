#include<bits/stdc++.h>
using namespace std;
#define LOL ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define llu long long unsigned int
#define pf printf
#define sf scanf
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int ,int>
const int sz=1010;
vector<llu> fib[sz+2];
void init(llu n)
{
    if(n==1)
    {
        fib[1].pb(0);
        return ;
    }
    llu x=0,temp;
    llu y=(1%n);
    fib[n].pb(x);
    fib[n].pb(y);
    ll sum=(x+y)%n;
    while((fib[n][0] != fib[n].back()) || (fib[n][1] != sum))
    {
        fib[n].pb(sum);
        temp=sum;
        sum=(sum+y)%n;
        y=temp;
    }
    fib[n].pop_back();

    return;

}
llu Bigmod(llu a,llu pr,llu mod)
{
    if(pr==0) return 1;
    else if(pr==1) return (a%mod);
    llu x=Bigmod(a,pr/2,mod);
    x=(x*x)%mod;
    if(1 & pr) x=(x*(a%mod))%mod;
    return x;
}
int main()
{
    LOL
    llu a,b,c,i,j,k,q,p,x,y,sum,ct,ct1,m,l,r,len,x1,y1,mn,n,mx,ans,h,sum1;
    char ch;
    double d;
    string str1,str2,str;
    bool bl,bl1;
    int cs=1,t;
    for(i=1;i<=1000;i++) init(i);
    sf("%d",&t);
    while(t--)
    {
       sf("%llu %llu %llu",&a,&b,&n);
        llu siz=fib[n].size();
        llu tl=Bigmod(a,b,siz);
        pf("%llu\n",fib[n][tl]);
    }

}

