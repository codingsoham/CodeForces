#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,ne;
    cin>>n>>ne;

    vector<pair<int,int>> vec(n);

    for(auto &assgn:vec){
        cin>>assgn.first>>assgn.second;
    }

    int maxv=0;

    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int diff=abs(vec.at(i).first-vec.at(j).first);

            if(diff<=ne){
                maxv=max(maxv,vec.at(i).second+vec.at(j).second+diff);
            }

        }
    }

    cout<<maxv<<endl;
    return 0;
}