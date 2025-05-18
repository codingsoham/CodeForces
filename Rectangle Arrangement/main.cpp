#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int maxw{};
        int maxh{};

        while(n--){
            int w,h;
            cin>>w>>h;

            maxw=max(w,maxw);
            maxh=max(h,maxh);
        }

        cout<<2*(maxw+maxh)<<endl;
    }


    return 0;
}