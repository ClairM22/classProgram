//personType.h

#include <string> 

using namespace std;

class personType
{
public:
	void print() const;
	//Function to output the first name and last name
	//in the form firstName lastName.

	void setName(string first, string middle, string last);
	//Function to set firstName and lastName according 
	//to the parameters.
	//Postcondition: firstName = first; lastName = last; middleName = middle;

	void setLastName(string last);
	//Function to set lastName according to the parameter.
	//Postcondition: lastName = last;

	void setFirstName(string first);
	//Function to set firstName according to the parameter.
	//Postcondition: firstName = first;

	void setMiddleName(string middle);
	//Function to set middleName according to the parameter.
	//Postcondition: middleName = middle;

	bool isLastName(string last) const;
	//Function to determine whether the last name
	//is the same as the parameter last.
	//Postcondition: Returns true if lastName 
	//is the same as last; 
	//otherwise, false.

	bool isFirstName(string first) const;
	//Function to determine whether the first name
	//is the same as the parameter first.
	//Postcondition: Returns true if firstName
	//is the same as first;
	//otherwise, false.

	string getFirstName() const;
	//Function to return the first name.
	//Postcondition: The value of firstName is returned.

	string getMiddleName() const;
	//Function to return the middle name.
	//Postcondition: The value of middleName is returned.

	string getLastName() const;
	//Function to return the last name.
	//Postcondition: The value of lastName is returned.

	personType(string first = "", string middle = "", string last = "");
	//Constructor
	//Sets firstName and lastName according to the parameters.
	//The default values of the parameters are null strings.
	//Postcondition: firstName = first; lastName = last  

private:
	string firstName; //variable to store the first name
	string middleName; //variable to store the middle name
	string lastName;  //variable to store the last name
};
