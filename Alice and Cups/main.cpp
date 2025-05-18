#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    bool a=true;
    bool b=false;
    bool c=false;

    for(int i=0;i<s.length();i++){
        if(s.at(i)=='A'){
            if(a){
                a=false;
                b=true;
            }else if(b){
                a=true;
                b=false;
            }
        }else if(s.at(i)=='B'){
            if(b){
                c=true;
                
            }
        }
    }

    return 0;
}