#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;

        vector<long long> a(n);
        vector<long long> b(n);

        for(auto &assgn:a)
            cin>>assgn;
        
        for(auto &assgn:b)
            cin>>assgn;
        
        long long fixed_x=-1;
        
        bool valid=true;
        long long minv=INT_MAX;
        long long maxv=INT_MIN;
        for(int i=0;i<n;i++){
            if(b.at(i)==-1){
                if(fixed_x!=-1&&(fixed_x<a.at(i)||(fixed_x-a.at(i)>k))){
                    valid=false;
                    break;
                }             
            }else{
                long long candid=a.at(i)+b.at(i);
                if(fixed_x==-1)
                    fixed_x=candid;
                else if(fixed_x!=candid){
                    valid=false;
                    break;
                }
            }
            minv=min(minv,a.at(i));
            maxv=max(maxv,a.at(i));
            //cout<<l<<" "<<i<<endl;
        }

        if(!valid){
            cout<<0<<endl;
            continue;
        }
        if(fixed_x!=-1){
                cout<<((valid)?1:0)<<endl;
        }else{
            if(k+minv<maxv)
                cout<<0<<endl;
            else
                cout<<k+minv-maxv+1<<endl;
        }

    }

    return 0;
}