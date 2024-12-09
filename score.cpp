#include<iostream>
#include<string>
using namespace std;
int main () {
    //Declare the variables
    string name;
    int score;
    cout<<"Enter student Name"<<endl; //Capture student name
    getline(cin, name);
    cout<<" Enter student score between 0 and 100\n";   //Capture score
    cin>>score;
    //Create an evaluation criteria
    if(score>70){              
        cout<<"A\n";
    }else if(score>=60&& score<=69){
        cout<<"B\n";
    }else if(score>=50&& score<=59){
        cout<<"C\n";
    }else if(score>=40&& score<=49){
        cout<<"D\n";
    }else if(score<40&& score>=0){
        cout<<"F\n";
    }else{
        cout<<"Invalid score\n";} // Exit program with an error code
    
    // Output: Full name and score
    cout << "Student Name: " << name << endl;
    cout << "Grade: " << score << endl;
    return 0;
}