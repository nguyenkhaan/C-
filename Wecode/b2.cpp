
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;


struct DATE
{
    int day, month, year;
};
typedef struct STUDENT
{
    char id[11];
    char name[35];
    DATE dob;
    float math, phy, chem, aver;

} SV;

void inputStudent(SV &a) 
{
    cin >> a.id; 
    cin.ignore(); 
    cin.getline(a.name,50); 
    cin >> a.dob.day >> a.dob.month >> a.dob.year; 
    cin >> a.math >> a.phy >> a.chem; 
    a.aver = (a.math + a.phy + a.chem) / 3.0; 
}
void outputStudent(SV a) 
{
    cout<<a.id<<"\t|"<<a.name<<"\t|"<<a.dob.day<<"/"<<a.dob.month<<"/"<<a.dob.year<<"\t|"<<a.math<<"\t|"<<a.phy<<"\t|"<<a.chem<<"\t|"; 
    cout<<a.aver; 
}
int main()
{
    STUDENT a;

    inputStudent(a);
    cout<<"ID\t|Full name\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
    outputStudent(a);

    return 0;
}

