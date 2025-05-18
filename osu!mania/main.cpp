#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> res;
        char c;

        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin>>c;
                if(c=='#')
                    res.push_back(j+1);
            }
        }

        for(int i=n-1;i>=0;i--)
            cout<<res.at(i)<<" ";
        cout<<endl;
    }
    return 0;
}