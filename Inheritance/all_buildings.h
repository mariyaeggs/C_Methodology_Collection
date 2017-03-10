//
// Created by Mariya Wilson on 8/15/16.
//

#ifndef BUILDINGS_ALL_BUILDINGS_H
#define BUILDINGS_ALL_BUILDINGS_H
using namespace std;


// Base Class
class Vehicle
{
public:

    Vehicle(long TokenPrice, const char * Model); // Constructor
    void Print() const;
    char remainingTokens[100];
private:
    long tokenPrice;
    char model[30];
    char userName[10];

};
class Motorcycle : public Vehicle // Car class is derived from Vehicle class
{
public:
    Motorcycle(long TokenPrice, const char * Model,char Level);// Constructor
    void Print() const;// Print Car details
private:
    char level;
};
class Truck: public Vehicle   // Truck class derived from Vehicle class
{
public:
    Truck(long TokenPrice, const char * Model,float MaxLoad); // Constructor
    void Print() const; // Print Truck details
protected:
    float maxLoad;
};
void GetUserName(char * userName)

{
    cout << endl << endl;
    cout << "--------*** Welcome to the annual Vehicle Race Games! ***---------"<< endl << endl;
    cout << "What is your first name? ";
    cin.getline(userName,10);

}
void GetUserTokensRemaining(char *remainingTokens) {
    cout << "How many Game Tokens do you have left? ";
        cin.getline(remainingTokens, 100);
}





#endif //BUILDINGS_ALL_BUILDINGS_H
