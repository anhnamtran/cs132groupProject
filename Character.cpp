/*
    Implementation File
    Homework 13 Group Project 
    1st Submission 4/23/2017
    Team members: 
        Theo Siswadi
        Jia Na (Vera)
        Anh Tran (Andrew)
*/

//header files
#include "Character.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//constant arrays for randomize character options
string NAME[] = {"Andrew", "Theo", "Hailey", "Vera"};
string GENDER[] = {"female", "male"};
string RACE[] = {"human", "not human"};
string OCCUPATION[] = {"fighter", "wizard", "cleric"};
string TASKAB[] = {"Cooking", "Cleaning", "Dying"};
string HAIR[] = {"short black", "long white", "short gold"};
string EYECOLOR[] = {"black", "blue", "brown", "green"};

Character :: Character ()
{
    // Get the system time.
    unsigned seed = time(0);
    srand(seed);
    //customized random number
    int randomSelector;
    //for all character's characteristics, a random number within a customized range
    //is chosen. An element from the respective array will be randomly chosen and set
    //to the Character (assigned to Character's respective field)
    randomSelector = rand() % (sizeof(NAME) / sizeof(NAME[0]));
    setName(NAME[randomSelector]);
    cout << randomSelector << endl;
    
    randomSelector = rand() % (sizeof(GENDER) / sizeof(GENDER[0]));
    setGender(GENDER[randomSelector]);
    cout << randomSelector << endl;
    
    randomSelector = rand() % (sizeof(RACE) / sizeof(RACE[0]));
    setRace(RACE[randomSelector]);
    cout << randomSelector << endl;
    
    randomSelector = rand() % (sizeof(OCCUPATION) / sizeof(OCCUPATION[0]));
    setOccupation(OCCUPATION[randomSelector]);
    cout << randomSelector << endl;
    
    randomSelector = rand() % (sizeof(TASKAB) / sizeof(TASKAB[0]));
    setTaSkAb(TASKAB[randomSelector]);
    cout << randomSelector << endl;
    
    setHeight(rand() % (200 + 100));
    setWeight(rand() % (200 + 50));
    
    
    randomSelector = rand() % (sizeof(HAIR)/sizeof(HAIR[0]));
    setHair(HAIR[randomSelector]);
    
    randomSelector = rand() % (sizeof(EYECOLOR)/sizeof(EYECOLOR[0]));
    
    setEyeColor(EYECOLOR[randomSelector]);
    
}

/*-----SETTERS-----*/
void Character :: setName(string name)
{
    Name = name;
}

void Character :: setGender(string gender)
{
    Gender = gender;
}

void Character :: setRace(string race)
{
    Race = race;
}

void Character :: setOccupation(string occ)
{
    Occupation = occ;
}

void Character :: setTaSkAb(string taskab)
{
    TaSkAb = taskab;
}

void Character :: setHeight(int height)
{
    Height = height;
}

void Character :: setWeight(int weight)
{
    Weight = weight;
}

void Character :: setHair (string hair)
{
    Hair = hair;
}

void Character :: setEyeColor(string eye)
{
    EyeColor = eye;
}

/*-----GETTERS-----*/
string Character::getName() {
    return Name;
}
string Character::getGender() {
    return Gender;
}
string Character::getRace() {
    return Race;
}
string Character::getOccupation()
{
    return Occupation;
}
string Character::getTaSkAb() {
    return TaSkAb;
}
int Character::getHeight() {
    return Height;
}
int Character::getWeight() {
    return Weight;
}
string Character::getHair() {
    return Hair;
}
string Character::getEyeColor() {
    return EyeColor;
}

//member function that displays all the Character's characteristics
void Character::displayInfo()
{
    if (getName() == "" && getGender() == "")
    {
        cout << "Character Doesn't Exist." << endl << endl;
    }
    else
    {
        cout << "Name: " << getName() << endl
        << "Gender: " << getGender() << endl
        << "Race: " << getRace() << endl
        << "Occupation: " << getOccupation() << endl
        << "Talents, Abiliities, or Skills: " << getTaSkAb() << endl
        << "Hair: " << getHair() << endl
        << "Eyes Color: " << getEyeColor() << endl
        << "Weight: " << getWeight() << " kg" << endl
        << "Height: " << getHeight() << " cm" << endl << endl;
    }
}
