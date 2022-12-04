#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int odd=n%2;
if(odd!=0){
    cout<<"weird";
}
else if(n>=2 && n<=5){
    cout<<"not weired";
}
else if(n>=6 && n<=20){
    cout<<"weird";
}
if(n>20){
    cout<<"not weired";
}
}