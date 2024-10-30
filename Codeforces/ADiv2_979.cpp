#include <bits/stdc++.h>
//Khi làm bài thì phải tuyệt đối tập trung nhận xét, phân tích đề bài 
//Hãy suy nghĩ đi, kể cả học sinh giỏi quốc gia cũng phải suy nghĩ theo hướng đơn giản mà 
//Hãy cố gắng làm rõ những cái gì mình thấy cần 
using namespace std; 
void solve() 
{
    //Khả An 
    /************************
     *                      *
     * TRAINING ICPC 2025   *
     *                      *
     ************************/
    int n; 
    cin >> n; 
    vector<int> a(n); 
    const int myMax = INT_MIN; 
    const int myMin = INT_MAX; 
    int ma = myMax , mi = myMin; 
    for (int i = 0; i < n; ++i) 
    {
        cin>>a[i]; 
        ma = max(ma,a[i]); 
        mi = min(mi,a[i]); 
    }
    cout<<(ma - mi)*(n - 1)<<endl; 
}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}