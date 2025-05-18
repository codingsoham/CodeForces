#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        if(n==1)
            cout<<"NO\n";
        else{
            string rev=s;
            reverse(rev.begin(),rev.end());

            if(s<rev){
                cout<<"YES"<<endl;

            }
            else{
                if(s.front()>s.back()&&k)
                    cout<<"YES"<<endl;
                else{
                    bool cond=false;
                    for(int i=1;i<n;i++){
                        if(s.at(i)!=s.front()){
                            cond=true;
                            break;
                        }
                    }

                    if(cond&&k)
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }

            }
        }
    }


    return 0;
}