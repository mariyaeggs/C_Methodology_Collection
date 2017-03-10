#include <iostream>
#include "Car_Game.h"

using namespace std;

int main() {
    char type;
    char remainingTokens[100];

    char userName[10];
    GetUserName(userName);
    GetUserTokensRemaining(remainingTokens);

    cout << endl << "Okay, " << userName << " let's start the game!";
    cout << endl << "You have " << remainingTokens << " tokens to use." << endl << endl;
    cout << "What do you want to race with?" <<endl;
    cout << "A motorcylce (m)  or a truck (t)? " << endl;
    cin >> type;
    cin.ignore();
    cout << endl;
    if (type == 't' || type == 'T')
    {
        cout << "---------------TRUCK-------------"<< endl;
        cout << "Trucks have a high towing capacity."<< endl;
        cout << "You will be slower in a truck." << endl;
        cout << "But you can carry more game loot."<< endl;
        Truck truck(250,"F-150 SVT Lightning",5000);

        // Prints truck class details
        truck.Print();
        cout << endl << "The SVT Lightening costs 250 game tokens ";
        cout << "and can tow up to 5000 lb" << endl;

    } else {
        cout << "-----------------MOTORCYCLE-----------------"<< endl;
        cout << "Motorcycles start players at a higher Level."<< endl;
        cout << "You will be mighty fast on a motorcycle . . . " << endl;
        cout << "But will not be able to carry much game loot." << endl;
        Motorcycle motorcycle(500,"Kawasaki Ninja H2", '5');

        // Prints Motorcycle class details
        motorcycle.Print();
        cout << endl << endl << "The Kawasaki Nija costs 500 tokens ";
        cout << "and takes players to level 5 immediately!" << endl;
    }

}
Vehicle::Vehicle(long TokenPrice, const char * Model)
{
    tokenPrice = TokenPrice; // Price to play game level
    strcpy(model,Model); // Model of class (Motorcycle/Truck) vehicle
    userName[0] = '\0';
}
// Prints Vehicle class details
void Vehicle::Print() const
{
    cout << "Model: " << model << endl;
    cout << "Token Price: " << tokenPrice << endl;
    if (userName[0])
        cout << userName;

}
//Motorcycle class function
Motorcycle::Motorcycle(long TokenPrice, const char * Model, char Level)
        :Vehicle(TokenPrice,Model) // Initiates base class constructor
{
    level = Level;
}
// Overrides base class and prints Motorcycle class details
void Motorcycle::Print() const
{

    cout << "Initiating Motorcycle for as race vehicle!" << endl << endl;
    cout << "Your vehicle and race details" << endl;
    Vehicle::Print();
    cout << "Game Level: " << level << endl;

}
// Truck class function
Truck::Truck(long TokenPrice, const char * Model, float MaxLoad)
        :Vehicle(TokenPrice,Model) // Initiates base class constructor
{
    maxLoad = MaxLoad; // Max towing load of truck(s)
}
// Overrides base class and prints Truck class details
void Truck::Print() const
{
    cout << "Initiating a Truck for speed race!" << endl << endl;
    cout << "Your race details"<< endl;
    Vehicle::Print();
    cout << "Max load: " << maxLoad << endl;
}