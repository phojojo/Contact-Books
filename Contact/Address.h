// Address.h
/**
* Declaration of class Address. It is used to store and retrieve
* information on Address such as home number, street, apt#, city,
* state, and zip.
*
* Author: Yosef Alayev
*/
#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
using namespace std;
class Address{
 private:
 string home;
 string street;
 string apt;
 string city;
 string state;
 string zip;
 public:
 // Default constructor
 // Initializes all variable to empty string
 Address();
 // Accessor method for the home instance variable
 string getHome();
 // Accessor method for the street instance variable
 string getStreet();
 // Accessor method that returns apartment number
 // if it is an apartment building, or "none" if
 // it is a private house.
 string getApt();
 // Accessor method for the city instance variable
 string getCity();
 // Accessor method for the state instance variable
 string getState();
 // Accessor method for the zip instance variable
 string getZip();
 // Method that prints Address to console
 void output();
 // Method that solicits the information
 // Apartment will be set to "none" if it is a private house
 // If it is an Apartment Building, method will solicit
 // info about apartment
 void input();
};
#endif
