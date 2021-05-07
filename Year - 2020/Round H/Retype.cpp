#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,num = 0;
    cin>>t;
    
    while(t--){
        long long n,k,s;
        cin>>n>>k>>s;
        
        if(n+k <= 2*(k-s)+n){
            cout<<"Case #"<<++num<<": "<<n+k<<endl;
        }else{
            cout<<"Case #"<<++num<<": "<<2*(k-s)+n<<endl;
        }
    }
    return 0;
}
