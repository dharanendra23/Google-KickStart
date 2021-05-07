#include <bits/stdc++.h>
using namespace std;
#define FIO ios::sync_with_stdio(0);cin.tie(0)
#define test ll t=1;cin>>t;while(t--)
#define REP(x) for(ll i=0;i<x;i++)
typedef long long ll;

int main() {
   FIO;
   ll num=1;
   test{
       ll n,x;
       cin>>n>>x;

       vector<pair<ll,ll>> vect;
       REP(n){
        ll a; cin>>a;
        if(a%x==0) vect.push_back({a/x,i+1});
        else vect.push_back({a/x+1,i+1});
        }
       sort(vect.begin(),vect.end());

       cout<<"Case #"<<num++<<": ";
       REP(n) cout<<vect[i].second<<" ";
       cout<<"\n";
   }
   return 0;
}
