#include <bits/stdc++.h>
using namespace std; 
void getScore(int &score) 
{
    cout<<"Enter course score (0<=score<=100): "; 
    cin >> score; 
    cout<<"\nCourse score is "<<score; 
}
void printGrade(int &score) 
{
    cout<<"\nYour grade for the course is: "; 
    if (score >= 0 && score <= 59) cout<<"F"; 
    else if (score >= 60 && score <= 69) cout<<"D"; 
    else if (score >= 70 && score <= 79) cout<<"C"; 
    else if (score >= 80 && score <= 89) cout<<"B"; 
    else cout<<"A"; 
}
int main() 
{
    int score; 
    getScore(score); 
    printGrade(score); 
}