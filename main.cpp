#include<iostream>
using namespace std;
int main(){
    string name;
    int counter = 0;
    cout<<"what is the input string? ";
    cin>>name;
    for(int i = 1; i<= name.size(); i++){
        counter++;
    }
    cout<<name<<" has "<<counter<<" charecters";
}