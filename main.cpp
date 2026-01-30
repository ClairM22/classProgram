//Test Program personType with first name and last name 

#include <iostream>  
#include <string>
#include "personType.h" 

using namespace std;

int main()
{
    //create object
    personType student("Clair", "Lela Marie", "Merry");

    cout << "Students full name: ";
    student.print();

    //test setters
    student.setFirstName("Sophia");
    student.setMiddleName("Anne");
    student.setLastName("Johnson");

    cout << "\nAfter changing name: ";
    student.print();

    //test getters
    cout << "\nFirst Name: " << student.getFirstName() << endl;
    cout << "Middle Name: " << student.getMiddleName() << endl;
    cout << "Last Name: " << student.getLastName() << endl;

    //test the check functions
    if (student.isFirstName("Sophia"))
    {
        cout << "\nFirst name is Sophia." << endl;
    }
    else
    {
        cout << "\nFirst name is not Sophia." << endl;
    }

    if (student.isLastName("Merry"))
    {
        cout << "Last name is Merry." << endl;
    }
    else
    {
        cout << "Last name is not Merry." << endl;
    }


    return 0;
}
