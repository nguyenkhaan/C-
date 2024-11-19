
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>

using namespace std;

bool increaseRoundness(int n)
{
    string s = to_string(n); 
    int m = s.size(); 
    int pos = -1; 
    for (int i = m - 1; i >= 0; --i) if (s[i] != '0') {
        pos = i; 
        break; 
    }
    if (pos == -1 || pos == 1) return false; 
    for (int i = pos; i >= 0; --i) if (s[i] == '0') return true; 
    return false; 
}

int main()
{
    int n;
    cin>>n;

    cout <<increaseRoundness(n)<< endl;
    return 0;
}
