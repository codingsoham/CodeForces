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
        
        int minp=0;
        int maxp=0;

        int maxel=vec.at(0);
        int minel=vec.at(0);

        int maxv=0;

        for(int i=1;i<n;i++){
            if(maxel<vec.at(i)){
                maxel=vec.at(i);
                maxp=i;
            }

            if(minel>vec.at(i)){
                minel=vec.at(i);
                minp=i;
            }

            maxv=max(vec.at(i-1)-vec.at(i),maxv);
        }
        if(minp==0||maxp==n-1||n<3)
            cout<<vec.at(maxp)-vec.at(minp)<<endl;
        else
            cout<<max(maxv,(max(vec.at(n-1)-vec.at(minp),vec.at(maxp)-vec.at(0))))<<endl;
    }

    return 0;
}