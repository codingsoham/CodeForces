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
        
        for(int i=0;i<n-1;i++){
            if(vec.at(i)==vec.at(i+1)){
                if(vec.at(i)!=vec.at(n-i-1)&&(i==0||vec.at(i)!=vec.at(n-i))&&(i==n-1-2||vec.at(i)!=vec.at(n-i-2))&&(i==0||vec.at(n-i-1)!=vec.at(i-1))&&(i+1==n-1-i||vec.at(n-1-i)!=vec.at(i+1)))
                    swap(vec.at(i),vec.at(n-1-i));
                else if(vec.at(i+1)!=vec.at(n-i-2)&&vec.at(i+1)!=vec.at(n-i-1)&&(i==n-2||i+1==(n-1-3)||vec.at(i+1)!=vec.at(n-i-3))&&(vec.at(n-i-2)!=vec.at(i))&&(i==n-2||i+2==n-2-i||vec.at(n-2-i)!=vec.at(i+2)))
                    swap(vec.at(i+1),vec.at(n-2-i));
            }
        }

        int cnt{};

        for(int i=0;i<n-1;i++){
            if(vec.at(i)==vec.at(i+1))
                cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}