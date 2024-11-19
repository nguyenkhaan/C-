#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n,k; 
    cin >> n >> k; 
        if (n == 1) cout<<"1 \n"<<"1"<<endl; 
        else cout<<"-1 \n"; 
        return; 
    }

    int left = k - 1; 
    if (left % 2 == 0) 
    {
        cout<<"5"<<endl; 
        cout<<"1"<<" "<<"2"<<" "<<k<<" "<<k+1<<" "<<n<<endl; 
    } else {
        cout<<"3"<<endl; 
        cout<<"1"<<" "<<k<<" "<<k+1<<endl; 
    }
}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}