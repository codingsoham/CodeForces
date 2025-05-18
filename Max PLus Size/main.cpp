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
        
        int maxo=INT_MIN;
        int maxe=INT_MIN;

        for(int i=0;i<n;i++){
            if(i%2==0)
                maxe=max(maxe,vec.at(i));
            else
                maxo=max(maxo,vec.at(i));
        }
    
        int ans=max(maxo+n/2,maxe+(n+1)/2);

        cout<<ans<<endl;
    }
    return 0;
}