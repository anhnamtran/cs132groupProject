/*
    Header File
    Homework 13 Group Project 
    1st Submission 5/3/2017
    Team members: 
        Theo Siswadi
        Jia Na (Vera)
        Anh Tran (Andrew)
*/

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include<iostream>

using namespace std;

//class declaration
class Character
{
 //fields
private:
    string Name;
    string Gender;
    string Race;
    string Occupation;
    string TaSkAb;
    int level;
    int Height;
    int Weight;
    string Hair;
    string EyeColor;
    string* Conquered;
public:
    /*-----CONSTRUCTORS-----*/
    Character();    //default constructor
    // custom character constructor
    Character (string, string, string, int, int, int, int, int, int, int);   
    
    Character(const Character&); //copy constructor

    //destructor
    ~Character() 
    {
        cout << "In destructor now." << endl;
    }
    /*-----SETTERS-----*/
    void setName(string);
    void setGender(string);
    void setRace(string);
    void setOccupation(string);
    void setTaSkAb(string);
    void setLevel(int);
    void setHeight(int);
    void setWeight(int);
    void setHair (string);
    void setEyeColor(string);
    void setKingdomConquered(string); //theo edit
    
    
    /*-----GETTERS-----*/
    string getName();
    string getGender();
    string getRace();
    string getOccupation();
    string getTaSkAb();
    int getLevel();
    int getHeight();
    int getWeight();
    string getHair();
    string getEyeColor();
    string getKingdomConquered();

    /*-----Overload Operators-----*/
    void operator=(const Character&);
    Character operator+(const Character&);
    Character operator-(const Character&);
    //prefix
    Character operator++();
    //postfix
    Character operator++(int);
    
    /*-----PRINTER-----*/
    virtual void displayInfo();
    
};

#endif /* CHARACTER_H */



