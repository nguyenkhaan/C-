#include <bits/stdc++.h>
using namespace std; 
struct Animal //blueprint 
{
    string food; //th1q8
    int money; 
    Animal() {}; 
    //Constructor: gán nhanh giá trị cho các thuộc tính 
    Animal(string food, string name, int money) 
    {
        // food = _food; 
        // name = _name; 
        // money = _money; 
        this->food = food; 
        //-> : truy cập thuộc tính đó thông qua con trỏ trỏ tới instance đang làm việc
        //. : truy cập thuộc tính thông qua instance 
        this->name = name; 
        this->money = money; 
    }
    void sound() //phuong thuc 
    {
        cout<<"Xin chao"; 
    }
}; 
int main() 
{
    //nhaaj truoc 
    Animal dog("A","Anki",1000); //instance 
    cout<<dog.food<<" "<<dog.name<<" "<<dog.money; 
}


