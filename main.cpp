//Authors: Christian Mullins
#include<iostream>
#include<string>

using namespace std;

int main()
{
  string firstName = "";
  string lastName = "";
  string nickName = "";

  cout << "What is your first name?" << endl;
  cin >> firstName;
  cout << "What is your last name?" << endl;
  cin >> lastName;

  cout << "Welcome, " << firstName.at(0) << "." << lastName.at(0) << "., here is your fortune..." << endl;




  //tell fortune

  return 0;
}
