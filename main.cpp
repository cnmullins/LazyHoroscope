//Authors: Christian Mullins
#include<iostream>
#include<string>
#include<cctype>

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
  cout << "your lucky number is " <<  firstName.length() << endl;

  char firstInitial = tolower(firstName.at(0));
  string vowels = "aeiou";
  for (int i = 0; i < vowels.length(); i++)
  {
          if (firstInitial == vowels.at(i))
          {
                  cout << "you are destined to be famous!" << endl;
                  break;
          }
          else if (i == vowels.length() - 1 && firstInitial != vowels.at(i))
          {
                  cout << "you should keep a low profile." << endl;
          }
  }

  char lastLetter = tolower(lastName.at(lastName.length() - 1));

  for (int i = 0; i < vowels.length(); i++)
  {
          if (lastLetter == vowels.at(i))
          {
                  cout << "you have already met your true love." << endl;
          }
          else if (i == vowels.length() - 1)
          {
                  break;
          }
  }
  cout << "have a good day!" << endl;

  return 0;
}
