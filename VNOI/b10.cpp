/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;




//###INSERT CODE HERE -
int main() 
{
    string s; 
    getline(cin,s); 
    if (s == "") {
        cout<<"Chuoi rong."; 
        return 0; 
    }
    s += string(1,' '); 
    string temp = ""; 
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') temp += string(1,s[i]);  
        else {
            for (int j = temp.size() - 1; j >= 0; --j) cout << temp[j]; 
            cout<<' '; 
            temp = ""; 
        }
    }
}