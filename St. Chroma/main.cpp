#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int> vec;

        for(int i=0;i<n;i++){
            if(i==x)
                continue;
            vec.push_back(i);
        }

        if(x<n)
            vec.push_back(x);

        for(const auto &trav:vec)
            cout<<trav<<" ";
        cout<<endl;

    }


    return 0;
}