/*
CH08-320142
a2_p3.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

// To play the game
void play_game(string words[], int n);
int main() {
  string words[] = {"computer",
                 "television",
		 "keryboard",
		 "magazine",
		 "noxious",
		 "embarrass",
		 "attempt",
                 "generator",
                 "popular",
                 "exercise",
                 "generate",
                 "separate",
                 "afraid",
                 "mountain",
                 "cplusplus"};


  play_game(words, 15);
  
  return 0;
}

void play_game(string words[], int n) {
  srand(static_cast<unsigned int>(time(0)));
  
  int magic_no = rand() % 15;
  string magic_word = words[magic_no];

  string guess_word = magic_word;

  //Change the vowels with underscore
  for (int i = 0; i < (int) guess_word.size(); i++) {
    if (guess_word[i] == 'a' || guess_word[i] == 'e' || guess_word[i] == 'i' || guess_word[i] == 'o' || guess_word[i] == 'u') {
      guess_word[i] = '_';
    }
  }

  //Ask the user to guess the word
  int noOfTries = 1;
  while (true){
    cout << "Guess the word?? "<< guess_word << endl; 
    
  //Take the user's guess
    string user_word;
    getline(cin, user_word);

   /*We compare and if true
     1.We congratulate the user with no of tries
     2.We ask the user if s/he wants to play again and if yes, We call the same function
   */
    if (user_word == magic_word) {
      cout << "Congratulations!!!\nNo of tries:: " << noOfTries << endl;
      char ch;
      cout << "Play again?? (y/n)" << endl;
      cin >> ch; cin.get();
      if (tolower(ch) == 'y')
        play_game(words, n);

      return;
    }
    // If 'quit', then quit.
    else if (user_word == "quit") {
      cout << "So sad!! Loser" << endl;
      return;
    }

   //count no of tries
    noOfTries ++;
    
  }

}

