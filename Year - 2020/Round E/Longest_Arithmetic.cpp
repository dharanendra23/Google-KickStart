#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int num=1;
    while(t--){
        long long n;
        cin>>n;

        long long a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        long long count1=0,cur=(a[0]-a[1]),curcount=0,count2=0;

        for(int i=0;i<n-1;i++){
            if((a[i]-a[i+1])==cur)
                curcount++;
            else if((a[i]-a[i+1])!=cur){
                if(curcount>=count1)
                    count1=curcount+1;
                cur = (a[i]-a[i+1]);
                curcount=1;
            }
        }

        if(curcount>=count1)
                count1=curcount+1;

        cout<<"Case #"<<num++<<": "<<count1<<endl;
    }

    return 0;
}
