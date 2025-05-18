#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int x=0;

        int i=1;

        while(x>=-n&&x<=n){
            if(i%2==0)
                x+=2*i-1;
            else
                x-=2*i-1;
            
            i++;
        }

        if(i%2==0)
            cout<<"Sakurako"<<endl;
        else
            cout<<"Kosuke"<<endl;
    }


    return 0;
}