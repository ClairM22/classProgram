//Class Activity 1: Github

#include <iostream>
#include <string>

using namespace std;

//dog class
class Dog
{
//private data members
private:
	string name, breed;
	int age;

//member functions
public:
	//setter functions
	void setName(string dogName)
	{
		name = dogName;
	}
	void setBreed(string dogBreed)
	{
		breed = dogBreed;
	}
	void setAge(int dogAge)
	{
		age = dogAge;
	}

	//getter functions
	string getName()
	{
		return name;
	}
	string getBreed()
	{
		return breed;
	}
	int getAge()
	{
		return age;
	}

	//bark function
	void bark()
	{
		cout << "Woof! Woof!" << endl;
	}
};

int main()
{
	Dog dog1;




	return 0;
}