#include <iostream>
#include <string>
using namespace std;

int main(){
  cout <<"Enter Your First Name : ";
  string firstName;
  getline(cin, firstName);

  cout <<"Enter Your Last Name : ";
  string lastName;
  getline(cin, lastName);

  cout <<"fullname : " <<firstName <<" " <<lastName;

  return 0;
}