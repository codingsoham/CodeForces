#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> vec(n);

    for(auto &assgn:vec)
        cin>>assgn;
    
    int a,b;
    cin>>a>>b;

    int sum{};

    for(int i=a;i<=b;i++)
        sum+=vec.at(i);

    cout<<sum;

    return 0;
}