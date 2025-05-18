#include <bits/stdc++.h>

using namespace std;

int solve(int indx1,int indx2,int n,int m,int skip,vector<int> &a,vector<int> &b,vector<vector<vector<int>>> &dp){
    if(indx2==m){
        if(skip==-1)
            return 0;
        return b.at(skip);
    }if(indx1==n){
        if(skip==-1&&indx2+1==m)
            return b.at(indx2);
        return INT_MAX;
    }

    if(dp.at(indx1).at(indx2).at(skip+1)!=-1)
        return dp.at(indx1).at(indx2).at(skip+1);
    
    if(a.at(indx1)>=b.at(indx2))
        return dp.at(indx1).at(indx2).at(skip+1)=min(solve(indx1+1,indx2+1,n,m,skip,a,b,dp),(skip==-1)?solve(indx1,indx2+1,n,m,indx2,a,b,dp):INT_MAX);
    
    return dp.at(indx1).at(indx2).at(skip+1)=min(solve(indx1+1,indx2,n,m,skip,a,b,dp),(skip==-1)?solve(indx1,indx2+1,n,m,indx2,a,b,dp):INT_MAX);
}
int main(){
    int t;
    cin>>t;

    for(int tt=1;tt<=t;++tt){
        int n,m;
        cin>>n>>m;

        vector<int> a(n);
        vector<int> b(m);

        for(auto &assgn:a)
            cin>>assgn;

        for(auto &assgn:b)
            cin>>assgn;
        
        vector<vector<vector<int>>> dp(n,vector<vector<int>> (m,vector<int> (m+1,-1)));
        int res=solve(0,0,n,m,-1,a,b,dp);

        cout<<((res==INT_MAX)?-1:res)<<endl;
    }



    return 0;
}