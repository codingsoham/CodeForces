#include <bits/stdc++.h>

using namespace std;

int findBallPosition(const string& moves) {
    int position = 1;  
    
    for (char move : moves) {
        if (move == 'A') {
            
            if (position == 1) position = 2;
            else if (position == 2) position = 1;
        } 
        else if (move == 'B') {
            
            if (position == 2) position = 3;
            else if (position == 3) position = 2;
        } 
        else if (move == 'C') {
           
            if (position == 1) position = 3;
            else if (position == 3) position = 1;
        }
    }
    
    return position;
}
int main(){
    string s;
	cin>>s;

	cout<<findBallPosition(s)<<endl;

	return 0;
}