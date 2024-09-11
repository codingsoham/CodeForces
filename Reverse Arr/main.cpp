#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);

    for(auto &assgn:vec)
        cin>>assgn;
    
    reverse(vec.begin(),vec.end());

    for(const auto &dis:vec)
        cout<<dis<<" ";




    return 0;
}