/** Tìm hiểu về nghịch đảo modulo của femat */
#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long fermat(long long a,long long mod)
{
long long kq=1,lt=mod-2;
while(lt!=0)
{
if(lt%2!=0)
kq=(kq*a)%mod;
a=(a*a)%mod;
lt/=2;
}
return kq;
}
int main()
{
int n,d=0,mina=INT_MAX,a[100005];
long long s=1;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]==0)
{
cout<<0;
return 0;
}
s=(s*abs(a[i]))%MOD;
if(a[i]<0)
{
d++;
mina=min(mina,abs(a[i]));
}
}
if(d%2!=0)
s=(s*fermat(mina,MOD))%MOD;
cout<<s;
}