#include <iostream>
using namespace std;
 int main (){
    int age;
    cout<<"Please Enter the age: ";
    cin>>age;
    if (age>=4){
        cout<<"Admitted! Proceed to registration"<<endl;
}
else {
    cout<<"Declined! Minimum age not reached"<<endl;
}
return 0;
}
