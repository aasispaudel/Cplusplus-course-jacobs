/*
CH08-320142
a2_p5.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>

using namespace std;

string isPalindrome(string word);

int main() {

  while (true){
    string input;
    getline(cin, input);
    if (input == "stop")
      break;

    cout << isPalindrome(input) << endl;
  }
  
  
  
  return 0;
}

string isPalindrome(string word) {
  string reverse_word = "";
  for (int i = word.size(); i > 0; i--) {
    reverse_word += word[i-1];
  }
  
  if (word == reverse_word)
    return "true";
  return "false";
}

