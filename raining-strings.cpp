#include <bits/stdc++.h>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> businesses;

int main()
{
  cout << "Welcome to the business sorting program!" << endl;

  while (true)
  {
    string choice{};
    cout << "Would you like to add a business to the list? (Y/n): ";
    cin >> choice;
    cin.ignore(1000000, '\n');

    if (choice == "y" || choice == "Y" || choice == "Yes" || choice == "yes")
    {
      string busIn{};
      cout << "Please enter the business you would like to add: ";
      getline(std::cin, busIn);

      businesses.push_back(busIn);
      cout << "Your businesses are:" << endl;
      sort(businesses.begin(), businesses.end());
      for (string i : businesses)
      {
        cout << i << endl;
      }
      cout << endl;
    }
    else
    {
      cout << "Thank you for using my program!" << endl;
      break;
    }
  }
}
