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
        
        int cnt{};
        for(int i=1;i<n;i++){
            if(vec.at(i-1)>vec.at(i)){
                cnt++;
                if(vec.at(i)>vec.at(i+1))
                    
            }
        }
    }

    return 0;
}