#include <stdio.h> 
#include <iostream>
#include <string> 
#include <stdbool.h>
#include <stdlib.h>
using namespace std; 
bool check(string n) 
{
    int mod = 0;
    for (int i=0; i<n.size(); i++) 
    {
        mod = (mod*10+(n[i]-'0'))%11; 
    }
    return mod == 0; 
}
int main() 
{
    string n; 
    cin>>n; 
    if (check(n)) cout<<"YES"; 
    else cout<<"NO"; 
}