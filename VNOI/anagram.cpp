#include <iostream>
#include <string> 
using namespace std; 
void bubble_sort(string &s) 
{
    const auto swap = [](char &ch1, char &ch2) {
        char t = ch1; 
        ch1 = ch2; 
        ch2 = t; 
    }; 
    for (int i = 0; i < s.size(); ++i) 
        for (int j = 0; j < s.size() - 1; ++j) if (s[j] > s[j+1]) swap(s[j+1],s[j]); 
}
void solve() 
{
    string s1; 
    cin >> s1;  
    string s2; 
    cin >> s2; 
    if (s1.size() != s2.size()) {
        cout<<"NO"; 
        return; 
    }
    bubble_sort(s1); 
    bubble_sort(s2); 
    bool ok = true; 
    for (int i = 0; i < s1.size(); ++i) if (s1[i] != s2[i]) {
        ok = false; 
        break; 
    }
    if (ok) cout<<"YES"; 
    else cout<<"NO"; 
}
int main() 
{
    solve(); 
}