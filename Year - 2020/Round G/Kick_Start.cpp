#include <bits/stdc++.h>
#define FIO ios::sync_with_stdio(0);cin.tie(0)
#define test ll t=1;cin>>t;while(t--)
#define REP(x) for(ll i=0;i<x;i++)
typedef long long ll;
using namespace std;

int main() {
    FIO;
    int num=1;
    test{
        string str;
        cin>>str;

        long i=0,k=0,s=0,count1=0;
        while(str[i]!='\0'){
            if(i+4<=str.length() && str[i]=='S' && str[i+1]=='T' && str[i+2]=='A' && str[i+3]=='R' && str[i+4]=='T'){
                s++;
                count1+=k;
                i++;
            }
            else if(i+3<=str.length() && str[i]=='K' && str[i+1]=='I' && str[i+2]=='C' && str[i+3]=='K'){
                i++;
                k++;
            }
            else
              i++;
        }
        cout<<"Case #"<<num++<<": "<<count1<<endl;
    }
   return 0;
}
