#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter age of child: ";
    cin >> age;
    if (age>=4){
        cout<<"Admitted! Proceed to registration"<<endl;
}
else {
    cout<<"Declined! Minimum age not reached"<<endl;
}
// USING TERNARY OPERATOR
       string message=(age>=4)?" Admit to school.":"Decline! Minimum age not reached";
       cout <<message<<endl;

}