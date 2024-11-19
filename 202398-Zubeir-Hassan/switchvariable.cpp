#include <iostream>
using namespace std;
int main(){
    int opt;

    cout<<"Hi. This is your BBIT Sem 1 Timetable (May-Aug 2024)";
    cout<<"\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday"<<endl<<endl;
    cout<<"Please select day of choice (e.g. 1, 2, 3, etc...)"<<endl;
    cin>>opt;

        switch (opt){
        case 1:
            cout<<"Monday Classes\n...................."<<endl;
            cout<<"\t1. BBIT 1106: Math for Biz"<<endl;
            cout<<"\t2. BBIT 1102: Intro to Programming"<<endl;
            break;

        case 2:
            cout<<"Tuesday Classes\n..................."<<endl;
            cout<<"\t2. BBIT 1102: Intro to Programming"<<endl;
            cout<<"\t1. BBIT 1104: Ethics"<<endl;
            break;
        /*Please continue code from this point 
        for the rest of the weekdays*/

        default:
        cout<<"Invalid Input";
    }
    return 0;}