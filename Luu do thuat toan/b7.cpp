#include <bits/stdc++.h>
using namespace std; 
struct Fraction 
{
    int ts; 
    int ms; 
    Fraction() {} 
    Fraction(int ts, int ms) {
        this->ts = ts; 
        this->ms = ms; 
    }
}; 
#define out "b7.txt" 
void inp(vector<Fraction> &a, int &n) {
    for (int i = 0; i < n; ++i) 
    {
        int _ts,_ms; 
        cin >> _ts >> _ms; 
        Fraction x(_ts,_ms); 
        a.push_back(x); 
    }
}
void inp_file(vector<Fraction> &a, int &n, ofstream &f) {
    for (auto x : a) f << x.ts <<"  "<<x.ms<<endl; 
}
int main() 
{
    vector<Fraction> a; 
    int n; 
    cin >> n; 
    inp(a,n); 
    ofstream f(out); 
    if (f.is_open()) inp_file(a,n,f); 
    else cout<<"Mo file that bai"; 
    f.close(); 
}
