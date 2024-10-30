#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int x;

    cin >> x;
    int y = x; 
    x = abs(x); 
    if (x == 0) {
        cout<<"0"; 
        return 0; 
    }
    while (x) 
    {
        int k = x % 10; 
        cout<<k<<endl; 
        x /= 10; 
    }
    if (y < 0) cout<<"-"; 
    


    return 0;
}