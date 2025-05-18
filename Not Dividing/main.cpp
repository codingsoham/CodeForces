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
        

        if(vec.at(0)==1)
            vec.at(0)++;

        for(int i=1;i<n;i++){
            if(vec.at(i)==1)
                vec.at(i)++;
            
            if(vec.at(i)%vec.at(i-1)==0){
                while(vec.at(i)%vec.at(i-1)==0)
                    vec.at(i)++;
            }
        }

        for(const auto &dis:vec)
            cout<<dis<<" ";
        
        cout<<endl;
        

    }



    return 0;
}