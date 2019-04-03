/*
CH08-320142
a5_p4.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/
#ifndef __TOURNAMENTMEMBER_H
#define __TOURNAMENTMEMBER_H

#include <iostream>
#include <string>



class TournamentMember {
 protected:
  std::string fName;
  std::string lName;
  std::string DOB;
  static std::string location;
  double height;
  int rating;

 public:
  /******************Inliners line *************************/
  //Constructors : Defined inline
  TournamentMember() {
    std::cout << "Default parametric constructor called\n";
  };

 TournamentMember(std::string fName, std::string lName, std::string DOB, double height, int rating) {
    std::cout << "Parametric constructor being called\n";
    this->fName = fName;
    this->lName = lName;
    this->DOB = DOB;
    this->height = height;
    this->rating = rating;
  };

 ~TournamentMember() {std::cout << "Destructor being called\n";};

  
//Copyconstructor : Defined inline
  TournamentMember(const TournamentMember& tm) {
    std::cout << "Copy constructor being called" << std::endl;
    fName = tm.fName;
    lName = tm.lName;
    DOB = tm.DOB;
    height = tm.height;
    rating = tm.rating;
  };

  //All the setters : Defined inline
  void setfName(std::string fName) {
    this->fName = fName;
  };

  void setlName(std::string lName) {
    this->lName = lName;
  };

  void setDOB(std::string DOB) {
    this->DOB = DOB;
  };

  void setHeight(double height) {
    this->height = height;
  };

  void setRating(int rating) {
    this->rating = rating;
  };

  //All the getters : Defined inline
  std::string getfName() {
    return fName;
  };

  std::string getlName() {
    return lName;
  };

  std::string getDOB() {
    return DOB;
  };

  double getHeight() {
    return height;
  };

  int getRating() {
    return rating;
  };

  /**************************Inliners line ********************/

  //Function method print
  void print();
  //Static method to change location
  static void setLocation(std::string);
  static std::string getLocation();
};

//std::string TournamentMember::location = "Werder";

//Class Player
class Player : public TournamentMember {
 private:
  int jerseyNo;
  std::string position;
  int noGoals;
  char foot;
 public:
  //Constructors : Defined inline
 Player() : TournamentMember() {std::cout<<"Default constructor of playyer\n";};
 Player(std::string fName, std::string lName, std::string DOB, double height, int rating, int jerseyNo, std::string position, char foot, int noGoals) : TournamentMember(fName, lName, DOB, height, rating) {
    std::cout << "Parametric constructor of player\n";
    this->jerseyNo = jerseyNo;
    this->position = position;
    this->foot = foot;
    this->noGoals = noGoals;
  };
  ~Player() {std::cout << "Destructor of Player\n";};

  //copy constructor : Defined inline
 Player(const Player& p) : TournamentMember(p) {
    std::cout << "Copy constructor being called player\n";
    jerseyNo = p.jerseyNo;
    position = p.position;
    foot = p.foot;
    noGoals = p.noGoals;
  };

  //All setters : Defined inline
  void setJerseyNo(int jerseyNo) {
    this->jerseyNo = jerseyNo;
  };

  void setPosition(std::string position) {
    this->position = position;
  };

  void setFoot(char foot) {
    this->foot = foot;
  };

  //All getters : Defined inline
  int getJerseyNo() {return jerseyNo;};
  std::string getPosition() {return position;};
  char getFoot() {return foot;};
  int getNoGoals() {return noGoals;};

  //Methods belonging to player class
  void print() const;
  void score();

  //Additional isin  method
  bool isin(Player*[50], int);
  
};

class Referee : public TournamentMember {
 private:
  int yellowCardCount;
  int redCardCount;

 public:

  Player *yellowCardList[50];
  Player *redCardList[50];
  
  //Constructors : Defined inline
 Referee() : TournamentMember () {};
  Referee(std::string, std::string, std::string, double, int);
  ~Referee() {};

  /* //Copy constructor : Defined inline */
  /* Referee(const Referee& r) : TournamentPlayer(r) {}; */

  //Methods : Defined in Tournament member.cpp
  bool addToYellowCardList(Player *p);
  bool addToRedCardList(Player *p);

  //Getters all defined inline after the class
  int getYellowCardCount() {return yellowCardCount;};
  int getRedCardCount() {return redCardCount;};
};


inline Referee::Referee(std::string fName, std::string lName, std::string DOB, double height, int rating)
  : TournamentMember(fName, lName, DOB, height, rating) {};
#endif
