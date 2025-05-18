#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        int k1,k2;
        cin>>k1>>k2;

        int q1,q2;
        cin>>q1>>q2;

        int count{};
        set<pair<int,int>> add{{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};

        for(const auto &trav:add){
            pair<int,int> king{k1+trav.first,k2+trav.second};
            for(const auto &trav2:add){
                pair<int,int> queen{q1+trav2.first,q2+trav2.second};
                if(queen.first==king.first&&queen.second==king.second)
                     count++;
            }
        }

        cout<<count<<endl;

    }

    return 0;
}