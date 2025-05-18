#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        long long min=0;
        long long max=0;

        if(n%2!=0||n<4)
            cout<<-1<<endl;
        else{
            max=n/4;
            min=n/6;

            if(n%6!=0)
                min++;

            cout<<min<<" "<<max<<endl;
        }        
    }

    return 0;
}