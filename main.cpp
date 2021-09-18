#include<iostream>
using namespace std;
int main(){
    string name;
    int counter = 0, spacecounter = 0;
    cout<<"what is the input string? ";
    getline(cin, name);
    while(true){
        if(name.empty()){
            cout<<"you have to write something!"<<endl;
            getline(cin, name);
        }
        else{
            break;
        }
    }
    for(int i = 1; i <= name.size(); i++){
        counter++;
    }
    for(int i = 0; i < name.size(); i++){
        if(isspace(name.at(i))){
           spacecounter++;
        }
    }
    counter -= spacecounter;
    cout<<name<<" has "<<counter<<" charecters";
}