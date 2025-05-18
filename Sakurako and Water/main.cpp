#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<vector<int>> mat(n,vector<int> (n));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cin>>mat.at(i).at(j);
        }

        int res{};
        for(int i=0;i<n;i++){
            if(i==0){
                for(int j=0;j<n;j++){
                    int sum=0;
                    int t=0;

                    while(j+t<n){
                        if(mat.at(i+t).at(j+t)<0)
                            sum=min(sum,mat.at(i+t).at(j+t));
                        t++;
                    }
                    res+=sum;
                }
            }else{
                int j=0;
                int sum=0;
                int t=0;

                while(i+t<n){
                    if(mat.at(i+t).at(j+t)<0)
                        sum=min(sum,mat.at(i+t).at(j+t));

                    t++;
                }

                res+=sum;
            }
        }

        cout<<-res<<endl;
    }

    return 0;
}