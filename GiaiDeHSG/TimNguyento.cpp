#include <iostream>
#include <cstring> 
#include <bits/stdc++.h>
/* 
Bổ sung thêm một số buổi tối ưu code nữa nhé :)) */
using namespace std;
#define MAX 1000000 
int prime[MAX+2];  
void sang_nguyen_to()  
{
    for (long long i = 2; i*i<=MAX; i++) prime[i] = 1;  
    for (long long i=2; i*i<=MAX; i++) 
    {
        if (prime[i] == 1) 
        {
            for (long long j = i*i; j<=MAX; j+=i) prime[j] = 0; 
            
        }
    }
}
int main() 
{
    sang_nguyen_to(); 
    string s; 
    cin>>s; 
    string s1; 
    for (int i = 0; i<s.size(); i++) 
    {
        if (s[i]>= '0' && s[i] <='9') s1 += string(1,s[i]); 
    }
    sort(s1.begin(),s1.end(),greater<char>()); 
    long long n = stoll(s1); 
    while (n) 
    {
        if (prime[n] == 1) 
        {
            cout<<n;
            break; 
        }
        n /= 10; 
    }
    
    if (n == 0) cout<<"No"; 
    return 0; 
}