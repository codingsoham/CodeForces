#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> vec(n);

        for(auto &assgn:vec)
            cin>>assgn;
        
        sort(vec.begin(),vec.end());


        int cnt=1;
        int maxc=cnt;

        for(int i=1;i<n;i++){
            if(vec.at(i)-vec.at(i-1)<=k){
                cnt++;
                maxc=max(cnt,maxc);
            }else
                cnt=1;
        }

        cout<<n-maxc<<endl;
    }


    return 0;
}