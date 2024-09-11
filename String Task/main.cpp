#include <iostream>

using namespace std;

bool isvowel(char c){
    c=tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y';
}
int main() {
    string s;
    cin>>s;

    
    for(size_t i=0;i<s.length();i++){
        if(isvowel(s.at(i))){
            s.erase(i,1);
            i--;
        }
        else{
            s.at(i)=tolower(s.at(i));
            s=s.substr(0,i)+"."+s.substr(i,s.length()-i);
            i++;
        }
    }

    cout<<s;

    return 0;
}
