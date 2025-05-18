#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> mat(5,vector<int>(5));

    int res=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat.at(i).at(j);

            if(mat.at(i).at(j)==1){
                res+=abs(2-i)+abs(2-j);
            }
        }
    }

    cout<<res<<endl;

    return 0;
}