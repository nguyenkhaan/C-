#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> v;
    vector<pair<int, int>> *p = &v;

    // Adding some elements to the vector for demonstration
    v.push_back(make_pair(1, 2));
    v.push_back(make_pair(3, 4));
    v.push_back(make_pair(5, 6));
    vector<map<int,int>> a;
    m.insert(make_pair(1,2));
    // Check if there are at least 3 elements in the vector
    if (v.size() > 2) {
        cout << (p->begin() + 2)->first << endl;
    } else {
        cout << "Vector does not have enough elements." << endl;
    }

    return 0;
}
