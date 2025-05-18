#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        vector<int> vec(n);

        for(auto &assgn:vec)
            cin>>assgn;
        
        long long cnt{};
    
        for(int i=0;i<n;i++){
            if(vec.at(i)+b>a){
                cnt+=b-1;
                b=1;
            }
            b=min(vec.at(i)+b,a);
        }
        
        cnt+=b;    

        cout<<cnt<<endl;
    }

    return 0;
}