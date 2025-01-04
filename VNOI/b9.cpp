/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
const int MAX = 800; 
int myStrcmp(char s1[], char s2[]) {
    if (s1[0] != '\0') return 1; 
    else return 0; 
}
int myStrlen(char s[], int k) {
    int d = 0; 
    while (s[d] != '\0') ++d; 
    return d; 
}
void myStrcpy(char s[], int vt, char s1[], int k) {

}
void mySubstr(char s[], int b, int count, char ss[]) {

}
bool myStrcat(char s1[], char s2[]) {

}
void StringReverse(char st[]) {
    int len = myStrlen(st,1); 
    st[len] = ' '; 
    st[len +1] = '\0'; 
    char a[MAX*2][MAX]; 
    int n = 0; 
    char temp[MAX] = ""; 
    for (int i = 0; i < myStrlen(st,1); ++i) 
    {
        if (st[i] != ' ') {
            int len = myStrlen(temp,1); 
            temp[len] = st[i]; 
            temp[len + 1] = '\0'; 
        }
        else 
        {
            for (int j = 0; j < myStrlen(temp,1); ++j) a[n][j] = temp[j]; //Copy 
            memset(temp,'\0',sizeof(temp)); 
            ++n; 
        }
    }
    char ans[MAX] = ""; 
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < myStrlen(a[i],1); ++j) {
            int len = myStrlen(ans,1); 
            ans[len] = a[i][j]; 
            ans[len + 1] = '\0'; 
        }
        if (i > 0) 
        {
            int len = myStrlen(ans,1); 
            ans[len] = ' '; 
            ans[len + 1] = '\0'; 
        }
        
    }
    memset(st,'\0',sizeof(st)); 
    for (int i = 0; i < myStrlen(ans,1); ++i) st[i] = ans[i]; 
    
}
int main() 
{
    char s[MAX]; 
    cin.getline(s,MAX); 
    StringReverse(s); 
    cout << s; 
}