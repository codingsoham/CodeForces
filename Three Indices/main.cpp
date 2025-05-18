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

        int minl=0;
        int maxl=0;
        int mid=-1;

        for(int i=1;i<n;i++){
            if(vec.at(i)>vec.at(maxl))
                maxl=i;
            else if(vec.at(i)<vec.at(maxl)){
                if(minl!=maxl){
                    mid=i;
                    break;
                }
            }
            if(vec.at(i)<vec.at(minl))
                minl=i;
            
            maxl=max(minl,maxl);
        }

        if(mid==-1)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<minl+1<<" "<<maxl+1<<" "<<mid+1<<endl;
        }

    }



    return 0;
}