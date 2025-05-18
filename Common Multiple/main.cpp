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
        
        unordered_set<int> s(vec.begin(),vec.end());

        cout<<s.size()<<endl;

    }


    return 0;
}