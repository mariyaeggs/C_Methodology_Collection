//
// Created by Mariya Eggensperger on 8/15/16.
//

#ifndef CAR_GAME_CAR_GAME_H
#define CAR_GAME_CAR_GAME_H
using namespace std;

// Base Class
class Vehicle
{
public:
    Vehicle(long TokenPrice, const char * Model); // Constructor
    void Print() const; // Prints Vehicle details
    char remainingTokens[100]; // Players' tokens left
private:
    long tokenPrice; // Token price to play game
    char model[30]; // Model of vehicle
    char userName[10]; // Players' name
};
// Motorcycle class
class Motorcycle : public Vehicle // Motorcycle class is derived from base class
{
public:
    Motorcycle(long TokenPrice, const char * Model,char Level);// Constructor
    void Print() const;// Print Motorcycle details
private:
    char level; // Level of the car game user is given
};
// Truck class
class Truck: public Vehicle   // Truck class is derived from base class
{
public:
    Truck(long TokenPrice, const char * Model,float MaxLoad); // Constructor
    void Print() const; // Print Truck details
protected:
    float maxLoad; // Max capcity of truck towing
};
// Gets users' name
void GetUserName(char * userName)
{
    cout << endl << endl;
    cout << "--------*** Welcome to the annual Vehicle Race Games! ***---------"<< endl << endl;
    cout << "What is your first name? ";
    cin.getline(userName,20);

}
// Gets users' remaining tokens
void GetUserTokensRemaining(char *remainingTokens) {
    cout << "How many Game Tokens do you have left? ";
    cin.getline(remainingTokens, 100);
}

#endif //CAR_GAME_CAR_GAME_H
