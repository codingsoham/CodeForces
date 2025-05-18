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
        
        int cnt1=1;
        int cnt2=0;

        int el1=vec.at(0);
        int el2=0;
        for(int i=1;i<n;i++){
            if(vec.at(i)==el1)
                cnt1++;
            else{
                if(cnt2==0)
                    el2=vec.at(i);
                if(vec.at(i)==el2)
                    cnt2++;
            }
        }

        if(cnt1==n||((cnt1+1==cnt2||cnt2+1==cnt1||cnt1==cnt2)&&cnt1+cnt2==n))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}