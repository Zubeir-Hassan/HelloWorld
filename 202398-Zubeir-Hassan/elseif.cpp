#include <iostream>
#include <string>
using namespace std;
int main(){
    string childname;
    int age;

//Prompt user for child name
    cout<< "Please enter the childs full name:";
    getline(cin,childname);   
    cout << "Please enter the child age:";
    cin>>age;

    if (age >=7){
        cout<<"Admit to Grade School"<<endl;
    }
    else if(age =5){
        cout<<"Admit to Kindergarten"<<endl;
    }
    else if (age =3){
        cout<<"Admit to Pre school"<<endl;
    }
    else if (age =1){ 
        cout<<"Admit to Play Group"<<endl;
     }
    else {
        cout<<"Reject. Invalid Age"<<endl;
      }
return 0;
}