#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> vec(n);
        int ans=INT_MAX;
        for(auto &assgn:vec)
            cin>>assgn;
        
        for(int i=1;i<n;i++){
            if(vec.at(i)<vec.at(i-1)){
                ans=0;
                break;
            }
            ans=min(ans,(vec.at(i)-vec.at(i-1))/2+1);
        }

        cout<<ans<<endl;
    }





    return 0;
}