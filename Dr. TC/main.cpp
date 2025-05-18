#include <bits/stdc++.h>

using namespace std;

int main(){
    int tt;
    cin>>tt;

    while(tt--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt=0;
        
        int co=count(s.begin(),s.end(),'1');

        for(const auto &trav:s){
            if(trav=='0')
                cnt++;
            else
                cnt--;
            cnt+=co;
        }

        cout<<cnt<<endl;
    }
    return 0;
}