

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

//###INSERT CODE HERE -
int is_lower(char c) {
    if (c >= 'a' && c <= 'z') return 1; 
    return 0; 
}
int is_upper(char c) {
    if (c>= 'A' && c <= 'Z') return 1; 
    return 0; 
}
int is_alpha(char c) {
    if (is_lower(c) || is_upper(c)) return 1; 
    return 0; 
}
int is_digit(char c) {
    if (c >= '0' && c <= '9') return 1; 
    return 0; 
}
char to_lower(char c) {
    if (c >= 'A' && c <= 'Z') c += 32; 
    return c; 
}
char to_upper(char c) {
    if (c >= 'a' && c <= 'z') c += 32; 
    return c; 
}
int myStrlen(char c[]) {
    int cnt = 0; 
    while (c[cnt] != '\0') ++cnt; 
    return cnt; 
}
int min(int a, int b) {
    return (a < b)?a:b; 
}
int myStrcmp(char a[], char b[]) {
    int n1 = myStrlen(a); 
    int n2 = myStrlen(b); 
    for (int i = 0; i < min(n1,n2); ++i) if (a[i] != b[i])
    {
        if (a[i] < b[i]) return -1; 
        else return 1; 
    }
    if (n1 == n2) return 0; 
    else if (n1 > n2) return 1; 
    else return -1; 
}
void myStrcpy(char a[], char b[]) 
{
    for (int i = 0; i < myStrlen(b); ++i) a[i] = b[i]; 
    a[myStrlen(b)] = '\0'; 
}
void myStrcat(char a[], char b[]) {
    int k = myStrlen(a); 
    for (int i = 0; i < myStrlen(b); ++i) a[k++] = b[i]; 
    a[k] = '\0'; 
}
int main() 
{
    char a[500]; 
    cin.getline(a,500); 
    for (int i = 0; i < myStrlen(a); ++i) if (is_digit(a[i])) {
        cout<<"CHUOI KHONG HOP LE."; 
        return 0; 
    }
    cout<<a; 
}