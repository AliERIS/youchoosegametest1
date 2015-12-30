#include <iostream>
using namespace std;
int main()
{
int choose,win=0;
float atk=20,durab=5,exp=0;

string name;
cout <<"Enter your name";
cin >> name;
cout << "Welcome " << name <<endl;
menu1:
cout <<"1-) Battle"<<endl
     <<"2-)Inventory"<<endl
     <<"3-)Hospital"<<endl;
cin>>choose;
switch(choose)
{
case 1:
banditmenu:
cout << "1-)Weak Bandit"<<endl  //has 15 att 1 round durability
     << "2-)Normal Bandit"<<endl // 30 att 3 round durability
     << "3-)Overpowered Bandit"<<endl; // 100 atk 10 round durability
cin>> choose;
    switch(choose)
    {
    case 1:
    // ineed algorithm i have ideas but i m lazy a bit total atk / total durab = match round number etc. 
    
