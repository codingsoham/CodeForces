#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cempty{};
        int maxcontig{};

        for(int i=0;i<n;i++){
            if(s.at(i)=='.'){
                int count=0;
                while(i<n&&s.at(i)=='.'){
                    count++;
                    i++;
                }
                cempty+=count;
                maxcontig=max(count,maxcontig);
            }
        }

    
        if(maxcontig>=3)
            cout<<"2"<<endl;
        else
            cout<<cempty<<endl;
    }



    return 0;
}