#include <iostream>
#include "all_buildings.h"

using namespace std;

int main()

{

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
// truck rental
// Make a truck (for simplicity - hard coded)
        cout << "---------------TRUCK-------------"<< endl;
        cout << "Trucks have a high towing capacity."<< endl;
        cout << "You will be slower in a truck." << endl;
        cout << "But you can carry more game loot."<< endl;
        Truck truck(250,"F-150 SVT Lightning",5000);


        truck.Print();
        cout << endl << "The SVT Lightening costs 250 game tokens ";
        cout << "and can tow up to 5000 lb" << endl;

    }
    else
    {
// Car rental
        cout << "-----------------MOTORCYCLE-----------------"<< endl;
        cout << "Motorcycles start players at a higher Level."<< endl;
        cout << "You will be mighty fast on a motorcycle . . . " << endl;
        cout << "But will not be able to carry much game loot." << endl;
        Motorcycle motorcycle(500,"Kawasaki Ninja H2", '5');


        motorcycle.Print();
        cout << endl << endl << "The Kawasaki Nija costs 500 tokens ";
        cout << "and takes players to level 5 immediately!" << endl;
    }

}
Vehicle::Vehicle(long TokenPrice, const char * Model)

{
    tokenPrice = TokenPrice; // could have used intialization list
    strcpy(model,Model);
    userName[0] = '\0'; // zero length string
}
void Vehicle::Print() const
 {
     cout << "Model: " << model << endl;
     cout << "Token Price: " << tokenPrice << endl;
     if (userName[0]) // a test to see if first char is
// a terminator
         cout << userName;

 }

Motorcycle::Motorcycle(long TokenPrice, const char * Model, char Level)
 :Vehicle(TokenPrice,Model)    // calls base constructor
{
level = Level;
}
void Motorcycle::Print() const         // Overrides Vehicle::Print()

{

    cout << "Initiating Motorcycle for as race vehicle!" << endl << endl;
    cout << "Your vehicle and race details" << endl;
    Vehicle::Print();
    cout << "Game Level: " << level << endl;

}

Truck::Truck(long TokenPrice, const char * Model, float MaxLoad)

 :Vehicle(TokenPrice,Model)

{
maxLoad = MaxLoad;

}

void Truck::Print() const
{
    cout << "Initiating a Truck for speed race!" << endl << endl;
    cout << "Your race details"<< endl;
    Vehicle::Print();
    cout << "Max load: " << maxLoad << endl;
}
