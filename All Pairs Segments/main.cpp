#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        vector<int> points(n);

        for(auto &assgn:points)
            cin>>assgn;
            
        vector<int> queries;

        for(int i=0;i<q;i++){
            int el;
            cin>>el;
            queries.push_back(el);
        }

        vector<int> ans(q,0);

        for(int i=0;i<n;i++){
            int freq=n-1-i+(n-1-(i-1))*i;
            for(int j=0;j<q;j++){
                if(queries.at(j)==freq)
                    ans.at(j)++;
            }
            
            if(i!=n-1){
                int nextfreq=((n-1-(i-1))*i+1);
                for(int j=0;j<q;j++){
                    if(queries.at(j)==nextfreq)
                        ans.at(j)+=points.at(i+1)-points.at(i)-1;
                }
            }
        }

        for(const auto &display:ans)
            cout<<display<<" ";

        cout<<endl;


    }

    return 0;
}


