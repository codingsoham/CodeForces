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
        
        vector<vector<int>> ans;
        
        int sub=0;
        for(int i=0;i<n-1;i++){
            if(vec.at(i)==0){
                ans.push_back({i-sub+1,i+2-sub});
                vec.at(i+1)=1;
                sub++;
                i++;
            }
        }

        
        if(vec.at(n-1)==0&&vec.at(n-2)!=0){
            ans.push_back({n-1-sub,n-sub});
            sub++;
        }
        ans.push_back({1,n-sub});
        sub++;

        cout<<sub<<endl;
        for(const auto &dis:ans)
            cout<<dis.front()<<" "<<dis.back()<<endl;
        
    }

    return 0;
}