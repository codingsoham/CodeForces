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

        if(vec.at(0)>*min_element(vec.begin()+1,vec.end()))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }


    return 0;
}