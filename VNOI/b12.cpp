#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cstdio>

using namespace std;
bool islower(char c) {
    return (c >= 'a' && c <= 'z');
}
bool isupper(char c) {
    return (c >= 'A' && c <= 'Z');
}
bool isalpha(char c) {
    return (islower(c) || isupper(c));
}
bool isdigit(char c) {
    return (c >= '0' && c <= '9');
}
bool isspecial(char c) {
    return (!isdigit(c) && !isalpha(c));
}
int SoSanhBangNhauTheoChuCai(char s[], char t[]) {
    if (strlen(s) != strlen(t)) return 0; // If lengths don't match, return 0
    int n = strlen(s);
    for (int i = 0; i < n; ++i) {
        char c1 = s[i];
        char c2 = t[i];
        if (isalpha(c1) && isalpha(c2)) {
            if ((islower(c1) && isupper(c2)) || (isupper(c1) && islower(c2))) continue; 
        }
        else if (isdigit(c1) && isdigit(c2))  continue; 
        else if (isspecial(c1) && isspecial(c2)) continue;   
        return 0; 
    }
    return 1; 
}

int main() {
    char s[256], t[256];
    cin.getline(s, 256);
    cin.getline(t, 256);
    cout << SoSanhBangNhauTheoChuCai(s, t); // Output result: 1 if match, 0 if no match

    return 0;
}
