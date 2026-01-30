//personTypeImp.cpp

#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

//print full name
void personType::print() const
{
	cout << firstName << " " << middleName << " " << lastName;
}

//set full name 
void personType::setName(string first, string middle, string last)
{
	firstName = first;
	middleName = middle;
	lastName = last;
}

//set first name
void personType::setFirstName(string first)
{
	firstName = first;
}

//set middle name
void personType::setMiddleName(string middle)
{
	middleName = middle;
}

//set last name
void personType::setLastName(string last)
{
	lastName = last;
}

//check first name
bool personType::isFirstName(string first) const
{
	return (firstName == first);
}

//check last name
bool personType::isLastName(string last) const
{
	return (lastName == last);
}

//get first name
string personType::getFirstName() const
{
	return firstName;
}

//get middle name
string personType::getMiddleName() const
{
	return middleName;
}

//get last name
string personType::getLastName() const
{
	return lastName;
}

//constructor
personType::personType(string first, string middle, string last)

{
	firstName = first;
	middleName = middle;
	lastName = last;
}

