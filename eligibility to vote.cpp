#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter the age: ";
    cin>>age;

    try{
        if(age<18){
            throw age;
        }
        else{
            cout<<"Eligible for voting."<<endl;
        }
    }
    catch(int num){
        cout<<"ERROR: Not eligible for voting."<<endl;
    }
    return 0;
}

/*
Output:
Enter the age: 17
ERROR: Not eligible for voting.
  */
