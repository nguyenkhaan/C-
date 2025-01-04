/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

//###INSERT CODE HERE -
int myStrlen(char a[], int k) {
	int cnt = k; 
	int d = 0; 
	while (a[cnt++] != '\0') ++d; 
	return d;
}
int myStrcmp(char s1[], char s2[])
{
	if (myStrlen(s1,0) == 0) return 0; 
    return 1; 
}
void myStrcpy(char s[], int vt, char s1[], int k) 
{
	int cnt = 0; 
	for (int i = vt; i <= k; ++i) s[cnt] = s1[i]; 
	s[cnt] = '\0'; 
}
void StringReverse(char st[]) 
{
	int n = myStrlen(st,0); 
	st[n] = ' ';	n++;	st[n] = '\0'; 
	char a[MAX][MAX]; 
	int a1 = 0; 
	char b[MAX]; 
	int b1 = 0; 
	for (int i = 0; i < n; ++i) {
		if (st[i] != ' ') b[b1++] = st[i]; 
		else {
			b[b1++] = ' ';      b[b1] = '\0'; 
			for (int j = 0; j < myStrlen(b,0); ++j) a[a1][j] = b[j]; 
			b1 = 0;
            memset(b,'\0',sizeof(b));  
			a1++; 
		}
	}
    int cnt = 0; 
	for (int j = a1 - 1; j >= 0; --j) {
        for (int i = 0; i < myStrlen(a[j],0); ++i) st[cnt++] = a[j][i]; 
    }
}