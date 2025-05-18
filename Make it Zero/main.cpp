#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> input(n);

        for(auto &assgn:input)
            cin>>assgn;
        
        vector<pair<int,int>> vec;
        vec.emplace_back(1,n);

        int xr=0;

        for(int i=0;i<n;i++)
            xr^=input.at(i);

        if(xr!=0){
            if(n%2==0)
                vec.emplace_back(1,n);
            else{
                vec.emplace_back(1,n-1);
                vec.emplace_back(n-1,n);
                vec.emplace_back(n-1,n);
            }
        }

        cout<<vec.size()<<endl;
        for(const auto &dis:vec)
            cout<<dis.first<<" "<<dis.second<<endl;


    }


    return 0;
}