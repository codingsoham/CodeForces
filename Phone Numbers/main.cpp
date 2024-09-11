#include <bits/stdc++.h>

using namespace std;

int count8(string s){
    int cnt{};

    for(const auto &trav:s)
        if(trav=='8')
            cnt++;

    return cnt;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int num8=count8(s);

    if(num8==0||n<11)
        cout<<"0";
    else{
        int count=n/11;
        cout<<min(count,num8);
    }

    return 0;
}