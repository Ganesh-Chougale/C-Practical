// user input: String
#include <iostream>
#include <string>
using namespace std;

int main(){
  cout <<"Enter your favorite color : ";
  string stringVariable;

  getline(cin, stringVariable); // the string library method

  cout <<"ohh nice! " <<stringVariable <<" is actually a good choice";

  return 0;
}