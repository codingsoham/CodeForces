#include <bits/stdc++.h>

using namespace std;

int maxsubarrlen(vector<int> &arr){
    int n=arr.size();

    int maxsum=INT_MIN;

    int left=0;
    int right=0;
    int nl=0;

    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr.at(i);
        if(sum>maxsum){
            maxsum=sum;
            right=i;
            left=nl;
        }
        if(sum<0){
            sum=0;
            nl=i+1;
        }
    }

    return right-left+1;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);

        for(auto &assgn:arr)
            cin>>assgn;

        cout<<maxsubarrlen(arr)<<endl;        
    }

    return 0;
}