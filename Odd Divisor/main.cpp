#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        if(n%2!=0)
            cout<<"YES"<<endl;
        else{   
            while(n>1&&n%2==0)
                n/=2;
            
            if(n>1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}