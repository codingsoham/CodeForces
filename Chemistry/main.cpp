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

        if(n==1||(n-k)==1)
            cout<<"YES"<<endl;
        else{
            char max=*max_element(s.begin(),s.end());
            int c[max+1-'a']={0};

            for(int i=0;i<n;i++)
                c[s.at(i)-'a']++;
            

            int counto=0,counte=0;

            for(int i=0;i<max+1-'a';i++){
                if(c[i]!=0){
                    if(c[i]%2==0)
                        counte+=c[i];
                    else
                        counto+=c[i]%2;
                }
            }

            if(counte==n)
                cout<<"YES"<<endl;
            else if(counto-k==0||(counto-k==1 && (n-k)%2!=0)||(k>counto&&((n-counto)%2==0)))
                    cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}