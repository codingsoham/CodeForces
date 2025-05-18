#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt=1;
        int maxcnt=cnt;
        for(int i=1;i<n;i++){
            if(s.at(i)==s.at(i-1)){
                cnt++;
                maxcnt=max(cnt,maxcnt);
            }
            else
                cnt=1;
        }

        cout<<maxcnt+1<<endl;
    }


    return 0;
}