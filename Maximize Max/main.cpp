#include <bits/stdc++.h>

using namespace std;
bool possible(){

}
int bs(vector<int> &vec,int n){
    int low=0;
    int high=n;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(possible(vec,mid))
    }
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int> vec(n);

        for(auto &assgn:vec)
            cin>>assgn;
        
        sort(vec.begin(),vec.end());

    }


    return 0;
}