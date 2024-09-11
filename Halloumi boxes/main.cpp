#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> vec(n);

        for(auto &input:vec)
            cin>>input;

        if(k!=1)
            cout<<"YES\n";
        else{
            bool check=true;
            for(int i=0;i<n-1;i++){
                if(vec.at(i)>vec.at(i+1)){
                    check=false;
                    break;
                }
            }

            if(check)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }


    return 0;
}