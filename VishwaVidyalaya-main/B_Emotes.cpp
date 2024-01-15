#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define cY cout << 'Y' << 'E' << 'S' << endl
#define cN cout << 'N' << 'O' << endl
#define nP cout << -1 << endl
#define vi vector<int>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define pb push_back
#define fr first
#define sc second
#define mod 1000000007

 void take_vec(ll n,vector<int>&v)
 { 
for( ll i=0;i<n;i++)
{
cin>>v[i];
}
}
// check prime 
const int N=1e7+10 ;
vector<bool>isprime(N,1) ;
int check_prime(int x)
{ 
isprime[0]=isprime[1]=false;
for(int i=2;i<N;++i)
 { 
if(isprime[i]==true)
{
for(int j=2*i;j<N;j+=i)
{
isprime[j]=false;}
}
return isprime[x];
}
}
// gcd of two number 
int gcd(int a,int b)
{
  if(b==0 ) return a;
   else return gcd(b,a%b);
}
//sorting of vector in decreaing order
bool cmp_v(int a,int b)
{
  return (a>b);   // jis order me chaie ho vaise hi return kro 
}

//sorting of vector of pair first increasing second decreasing
bool cmp_vs(pair<int,int>v1,pair<int,int>v2)
{
if(v1.first==v2.first)
return v1.second>v2.second;
else return v1.first<v2.first;

}

//sorting of vector of pair first decreasing second decreasing
bool cmp_vfs(pair<int,int>v1,pair<int,int>v2)
{
if(v1.first==v2.first)
return v1.second>v2.second;
else
return v1.first>v2.first;
}
//sorting of vector of pair first decreasing second increasing
bool cmp_vf(pair<int,int>v1,pair<int,int>v2)
{
if(v1.first==v2.first)
return v1.second<v2.second;
  else return v1.first>v2.first;
}


//solve 
void solve()
{
  ll n,m,k;
  cin>>n>>m>>k;
  ll a[n];
  set<ll>s;
  for (ll i = 0; i <n; i++)
  {
    ll x;
    cin>>x;
    a[i]=x;
  }
  sort(a,a+n);
  
 
ll mx=a[n-2];

ll mx2=a[n-1];
if(m<=k)
cout<<k*mx2<<endl;
else
{
    ll sum=(m/(k+1))*(k*mx2+mx);
    sum+=(m%(k+1))*mx2;
    cout<<sum<<endl;
}





}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

solve();

return 0;
}