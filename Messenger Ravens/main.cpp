#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
int main(){
    long long m,n;
    cin>>m>>n;

    
    long long xr=0;

    while(n--){
        long long num;
        cin>>num;
        xr=(long long)(xr)^num;
    
    }

    if(m%2==0){
        cout<<0<<endl;
    }else
        cout<<xr%MOD<<endl;



    return 0;
}