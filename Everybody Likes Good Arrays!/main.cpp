#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<unsigned long long> vec;
        
        unsigned long long num=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>num;
            if(vec.empty()||vec.back()%2!=num%2)
                vec.push_back(num);
            else{
                vec.back()=num*vec.back();
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }



    return 0;
}