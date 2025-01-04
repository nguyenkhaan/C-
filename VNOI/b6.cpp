#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1, 254);
	cin.getline(s2, 254);
	bool kt = myStrcat(s1, s2);

//###INSERT CODE HERE -
} 
int myStrlen(char s[]) {
    int cnt = 0; 
    int d = 0; 
    while (s[cnt++] != '\0') ++d; 
    return d; 
} 
bool myStrcat(char s1[], char s2[]) {
    if (myStrlen(s1) + myStrlen(s2) > 254) {
        cout<<"Khong noi duoc. Khong du bo nho."; 
        return 0;
    }  
    int d = myStrlen(s1); 
    for (int i = 0; i < myStrlen(s2); ++i) s1[d++] = s2[i]; 
    s1[d] = '\0'; 
    cout<<s1; 
    return 1; 
}