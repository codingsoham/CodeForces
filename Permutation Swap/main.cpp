#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> vec(n);
        
        for(auto &assgn:vec)
            cin>>assgn;
        
        int ans{};

        for(int i=1;i<=n;i++){
            if(vec.at(i-1)-i!=0)
                ans=__gcd(ans,abs(vec.at(i-1)-i));
        }
        
        cout<<ans<<endl;
    }


    return 0;
}