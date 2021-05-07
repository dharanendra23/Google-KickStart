#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,num = 0;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
        long long a[n][n];
        for(int i = 0; i < n; i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        
        long long ans = 0;
        for(int i = 0; i < n; i++){
            long long x = 0, y = i, sum = 0;
            for(int j=i;j<n;j++){
                sum += a[x++][y++];
            }
            if(sum > ans) ans = sum;
        }
        
        for(int i = 1; i < n; i++){
            long long x = i, y = 0, sum = 0;
            for(int j = i; j < n; j++){
                sum += a[x++][y++];
            }
            if(sum > ans) ans = sum;
        }
        
        cout<<"Case #"<<++num<<": "<<ans<<endl;
    }
    
    return 0; 
}
