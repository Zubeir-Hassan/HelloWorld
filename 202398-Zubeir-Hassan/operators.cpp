#include <iostream>
using namespace std;
int main(){
    //Declare the values
    int value1, value2;
    bool boolVar1=true, boolVar2=false; //Initialize and declare the boolean variables
    cout<< "Enter value 1 :";
    cin>> value1;
    cout<< "Enter value 2 :";
    cin>>value2;
    // Aritjmetic operator
    //Addition operator
    cout<<"Sum of "<<value1<<"+"<<value2<< "="<< value1+value2 << endl;
    // Subtraction operator
    cout<<"difference of "<<value1<<"-"<<value2<< "="<< value1-value2 << endl;
    //Multiplication operator
    cout<<"Multiplication of "<<value1<<"*"<<value2<< "="<< value1*value2 << endl;
    //Division operator
    cout<<"Division of "<<value1<<"/"<<value2<< "="<< value1/value2 << endl;
    //Modulus operator
    cout<<"Modulus of "<<value1<<"%"<<value2<< "="<< value1%value2 << endl;
    // Increment operator '++' as a postfix
    cout<<"Prefix Incremet value1 by 1 : " << ++value1 << endl;
      // Decrement operator '--' as a prefix
    cout<<"Prefix decremet value1 by 1 : " << --value1 << endl;
      // Decrement operator '--' as a postfix
      cout<<"Prefix decremet value1 by 1 : " << --value1 << endl;
      //Increment and assign operation eg increase value1 by 3
      value1 +=3;// this is the same as value1=value1+3
      cout<<" Incremet and assign value1 by 3 : " << value1 << endl;

      //Greater than operator '>'
      cout << value1 << "Greater than" <<value2<<"=" << (bool)(value1 > value2) << endl;
      // less than operator '<'
      cout << value1 << "Less than" <<value2<<"=" << ( bool)(value1 < value2) << endl;
      // Equaal to operator '=='
      cout << value1 << "Equal to" <<value2<<"=" << (bool)(value1 == value2) << endl; 
      //Not equal to operator
      cout << value1 << "not equal to" <<value2<<"=" << (bool)(value1 != value2) << endl;

    //Boolean operator '&&'
    cout << boolVar1 << "&&" <<boolVar2<<"=" << (boolVar1 && boolVar2) << endl; 
    //Boolean operator '||'
    cout << boolVar1 << "||" <<boolVar2<<"=" << (boolVar1 || boolVar2) << endl; 
    //Boolean operator '!'
    cout<< "!"<< boolVar1<< "=" << (!boolVar1) << endl;

    // Declare a pointer
    int* ptr =nullptr;
    //Assign a value to the poster
    ptr = &value1;
    //output addressof value1
    cout<< "Address of value1 ="<<&value1<<endl;
    //Derefrence the pointer to get the value at the memory location
    cout << "Value at memory location pointed by ptr +" <<ptr<<endl; 
    return 0;
}