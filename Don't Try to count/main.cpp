#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        string s1;
        string s2;
        cin>>s1>>s2;

        int cnt=0;
        
        bool flag=false;
        while(s1.length()<=s2.length()+m){
                if(s1.find(s2)!=string::npos){
                    flag=true;
                    break;
                }
                s1+=s1;
                cnt++;
        }
        if(flag)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;
        
    }


    return 0;
}