#include <iostream>
#include <string>
using namespace std;
int main(){
    string childname, interest;
    int age;

//Prompt user for child name
    cout<< "Please enter the childs full name:";
    getline(cin,childname);   
    cout << "Please enter the child age:";
    cin>>age;

    if (age >=4 && age <=10)
    {
        cout<< "Please enter the childs interest: ";
        cin>> interest;
        if (interest =="Soccer")//First nested IF
    {
        cout<< childname <<" has been admitted and assigned to the soccer play group."<<endl;
    }    
    else if (interest =="art")//Second nested IF
    {
        cout<< childname <<" has been admitted and assigned to the art play group."<<endl;
    }
    else
    {
        cout<< childname <<" has been admitted and assigned to other groups."<<endl;
    }
    
}
else
{
    cout<< "Admission unsuccessful." <<childname <<"'s age is invalid" <<endl;
}
}
