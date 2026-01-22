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
	//dog object
	Dog doggy;

	//set dog attributes
	doggy.setName("Lady");
	doggy.setBreed("Lab");
	doggy.setAge(16);

	//display dog attributes
	cout << "Dog's Name: " << doggy.getName() << endl;
	cout << "Dog's Breed: " << doggy.getBreed() << endl;
	cout << "Dog's Age: " << doggy.getAge() << " years old." << endl << endl;

	//modify at least one setter
	doggy.setAge(17);

	//redisplay dog attributes after modification ?
	cout << "After a year..." << endl;
	cout << "Updated Dog's Age: " << doggy.getAge() << " years old." << endl;

	//bark function
	doggy.bark();

	return 0;
}