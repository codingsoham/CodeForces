#include <bits/stdc++.h>
#include <vector>
#include <iostream>
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
        
        while(vec.size()!=1){
            int fi=-1,si=-1;
            int fmin=INT_MAX;
            int smin=INT_MAX;
            for(size_t i=0;i<vec.size();i++){
                if(vec.at(i)<fmin){
                    si=fi;
                    smin=fmin;
                    fmin=vec.at(i);
                    fi=i;
                }else if(vec.at(i)<smin){
                    si=i;
                    smin=vec.at(i);
                }
            }
            
            if(fi>si){
                vec.erase(vec.begin()+fi);
                vec.erase(vec.begin()+si);
            }else{
                vec.erase(vec.begin()+si);
                vec.erase(vec.begin()+fi);
            }
            vec.push_back((fmin+smin)/2);
        }
        cout<<vec.at(0)<<endl;
    }


    return 0;
}