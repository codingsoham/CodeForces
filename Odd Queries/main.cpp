#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        vector<int> vec(n);

        for(auto &assgn:vec)
            cin>>assgn;
        
        unordered_map<int,int> msum;
        msum[-1]=0;
        int sum{};
        for(int i=0;i<n;i++){
            sum+=vec.at(i);
            msum[i]=sum;
        }

        int l,r,k;

        while(q--){
            cin>>l>>r>>k;

            int tsum=sum-(msum[r-1]-msum[l-2])+(r-l+1)*k;         


            if(tsum&1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }

    }
    return 0;
}