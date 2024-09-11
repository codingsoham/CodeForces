#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int> vec(n);

        for(auto &input:vec)
            cin>>input;

        int maxval=max(vec.at(0)-0,2*(x-vec.at(n-1)));

        for(int i=0;i<n-1;i++)
            maxval=max(maxval,vec.at(i+1)-vec.at(i));

        cout<<maxval<<endl;
                
    }


    return 0;
}