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
        
        int cnt=0;

        if(vec.at(0)!=0)
            cnt++;

        for(int i=1;i<n;i++){
            if((vec.at(i-1)==0)&&(vec.at(i)!=0))
                cnt++;
            
            if(cnt==2)
                break;
        }


        cout<<cnt<<endl;

    }


    return 0;
}