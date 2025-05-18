#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    map<int,int> m1,m2;

    for(int i=1;i<=x;i++)
        m1[i%5]++;
    
    for(int i=1;i<=y;i++)
        m2[i%5]++;
    
    long long cnt=(1LL*m1[0]*m2[0]);
    
    for(int i=1;i<5;i++)
        cnt+=(1LL*m1[i]*m2[5-i]);
    
    cout<<cnt<<endl;

    return 0;
}