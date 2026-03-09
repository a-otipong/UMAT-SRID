#include <iostream>

using namespace std;
//Declaration Variables
int num1,num2,Sum;
int main()
{
    //input stage
    cout << "    Simple Calculator" << endl;


    cout<< "   enter first number"<< endl;
    cin>>num1;

    cout<< "   enter second number"<< endl;
    cin>>num2;

    //processing stage
    Sum=num1+num2;

    //output stage
    cout<<"The sum is "<<Sum;

    return 0;

}
