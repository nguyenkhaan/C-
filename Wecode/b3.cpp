#include <bits/stdc++.h>

using namespace std;
string check = "";

struct ngay {
    int ng, thang, nam;
};

struct HOPSUA {
    char brand[35];
    double w;
    ngay e;
};

typedef HOPSUA milk;

void inputMilk(milk &x) {
    cin >> x.w;
    cin >> x.e.ng >> x.e.thang >> x.e.nam;
    cin.ignore();
    cin.getline(x.brand, 35);
}

void nhapDSHopSua(milk a[], int &n) {
    cin >> n;
    for (int i = 0; i < n; ++i) inputMilk(a[i]);
}

bool maxMilk(milk a[], int n) {
    double ma = 0;
    for (int i = 0; i < n; ++i) {
        if (ma < a[i].w) ma = a[i].w;
    }

    for (int i = 0; i < n; ++i) {
        if (a[i].w == ma) {
            string k = a[i].brand;
            size_t pos = k.find_last_of(' '); 
            string temp = (pos == string::npos) ? k : k.substr(pos + 1); 
            if (temp == check) return true;
        }
    }
    return false;
}

int main() {
    HOPSUA a[100];
    int n;
    nhapDSHopSua(a, n); // Nhap danh sach cac hop sua
    
    cin >> check;
    if (maxMilk(a, n)) cout << "YES";
    else cout << "NO"; 
    return 0;
}
