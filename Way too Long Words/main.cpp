#include <iostream>

using namespace std;


int main() {
    int t;
    cin>>t;


    while(t--){
        string s;
        cin>>s;

        int length=s.length();

        if(length>10)
            cout<<s.at(0)<<length-2<<s.at(length-1)<<endl;
        else
            cout<<s<<endl;


    }

    return 0;
}