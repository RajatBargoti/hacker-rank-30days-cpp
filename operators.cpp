#include<iostream>
using namespace std;
int main(){
    int meal,tip,tax;
    cin>>meal;
    cin>>tip>>tax;
    
    double taxadd = tax*meal/100;
    double tipadd = tip*meal/100;
    double foodcost = meal+taxadd+tipadd;
    cout<<foodcost;

}