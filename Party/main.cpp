#include <bits/stdc++.h>

using namespace std;

int finddis(int i,vector<int> &emp,vector<int> &dp){
    if(emp.at(i-1)==-1)
        return 1;
    
    if(dp.at(i-1)!=-1)
        return dp.at(i-1);

    return dp.at(i-1)=finddis(emp.at(i-1),emp,dp)+1;
}
int main(){
    int n;
    cin>>n;

    vector<int> emp(n);

    for(auto & assgn:emp)
        cin>>assgn;

    int maxv=0;

    vector<int> dp(n,-1);
    for(int i=0;i<n;i++){
        maxv=max(finddis(i+1,emp,dp),maxv);
    }

    cout<<maxv<<endl;

    

    return 0;
}