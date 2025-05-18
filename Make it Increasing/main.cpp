#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> vec(n);

        for(auto &assgn:vec)
            cin>>assgn;
        
        int cnt=0;
        if(vec.back()==0&&n!=1)
            cnt=-1;
        else{
            for(int i=n-2;i>=0;i--){
                while(vec.at(i)>=vec.at(i+1)){
                    vec.at(i)/=2;
                    cnt++;
                }
                if(vec.at(i)==0&&i!=0){
                    cnt=-1;
                    break;
                }
            }
        }

        cout<<cnt<<endl;
    }


    return 0;
}