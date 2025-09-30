#include <iostream>
using namespace std;

int main() {
    float a,b,c;
    cout << "Enter the values of a and b: ";
    cin>>a>>b;

    try{
        if(b==0){
            throw b;
        }
        else{
            c=a/b;
            cout<<"Answer: "<<c<<endl;
        }
    }
    catch(float num){
        cout<<"ERROR: Division by "<<num<<" is not allowed."<<endl;
    }
    return 0;
}

/*
Output:
Enter the values of a and b: 13 0
ERROR: Division by 0 is not allowed.
  */
