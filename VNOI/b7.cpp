#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300
int find(char s[], char s2[]) {
    for (int i = 0; i < strlen(s) - 1; ++i) if (s[i] == s2[0] && s[i+1] == s2[1]) return i; 
    return -1; 
}
void remove(char s[], int k) {
    int n = strlen(s); 
    for (int i = k; i < n - 1; ++i) s[i] = s[i+1]; 
    s[n-1] = '\0'; 
}
void insert(char s[], int k, char c) {
    int n = strlen(s); 
    for (int i = k + 1; i < n + 1; ++i) s[i] = s[i-1]; 
    s[k] = c; 
    s[n+1] = '\0'; 
}
//###INSERT CODE HERE -
void Chuanhoa(char s1[]) 
{
    int pos; 
    while ((pos = find(s1," .")) != -1) {
        //Thuc hien xoa 
        remove(s1,pos); 
    }
    while ((pos = find(s1,". ")) != -1) {
        //Thuc hien xoa ki tu tai vi tri thu k 
        remove(s1,pos + 1); 
    }
    int cnt = 0; 
    char token[299]; 
    for (int i = 0; i < strlen(s1); ++i) 
    {
        if (s1[i] != '.') token[cnt++] = s1[i]; 
        else {
            token[cnt++] = '.'; 
            token[cnt++] = ' '; 
        }
    }
    token[cnt] = '\0'; 
    strcpy(s1,token); 
}
int main()
{
	char s[MAX];
	cin.getline(s, 299);

	char s1[MAX];
	strcpy(s1, s);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}

