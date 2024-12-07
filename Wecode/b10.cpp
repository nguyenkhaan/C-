#include <bits/stdc++.h>
using namespace std; 
const int maxn = 1e2; 
bool c[maxn]; 
int idx[maxn]; 
void Try(int i, vector<string> &per, vector<char> &ch, int &n) 
{
    for (int j = 1; j <= 8; ++j) if (c[j]) 
    {
        idx[i] = j; 
        c[j] = false; 
        if (i == 8) {
            // string s = ""; 
            // for (int t = 1; t <= 8; ++t) s += string(1,ch[idx[t] - 1]); 
            // per.push_back(s); 
            string s = ""; 
            for (int t = 1; t <= 8; ++t) s += string(1,ch[idx[t] - 1]); 
            per.push_back(s); 
        }
        else Try(i + 1, per, ch, n); 
        c[j] = true; 
    }
}
bool check(string &s1, string &s2, string &s3) {
    int y = stoi(s1); 
    int m = stoi(s2);  
    int d = stoi(s3); 
    if (m < 1 || m > 12 || d < 1) return false;
    int dayMax = 31;
    switch (m) {
        case 4: case 6: case 9: case 11:
            dayMax = 30;
            break;
        case 2:
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
                dayMax = 29;
            else dayMax = 28;
            if (y % 3328 == 0) dayMax = 30;
            break;
    }
    return d <= dayMax && y > 0;
}

void solve() 
{
    string input; 
    getline(cin,input); 
    vector<char> a; 
    for (int i = 0; i < input.size(); ++i) if (input[i] != ' ') a.push_back(input[i]); 
    memset(c,true,sizeof(c)); 
    vector<string> per; 
    int n = 8; 
    Try(1,per,a,n); 
    set<string> res; 
    for (int i = 0; i < per.size(); ++i) 
    {
        string s1 = per[i].substr(0,4); 
        string s2 = per[i].substr(4,2); 
        string s3 = per[i].substr(6,2); 
        if (check(s1,s2,s3)) res.insert(s1 + " " + s2 + " " + s3); 
    }
    cout<<res.size()<<endl; 
    for (auto z : res) cout<<z<<endl; 
    

}
int main() 
{
    solve(); 
}