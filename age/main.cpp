#include <iostream>

using namespace std;

int main()
{
    int age =18;
    string cont="c";
    while(cont=="c"){
             int userAge;
    cout<<"enter your age"<<endl;
    cin>>userAge;

   if(userAge<18 ) {
   cout << "You are underage!" << endl;
   }
   else{
    cout<<"you are too old"<<endl;
   }
   cout<<"press c to continue or any key to quit"<<endl;
   cin>>cont;

    }







    return 0;
}
