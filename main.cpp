
#include <iostream>
#include <string>

struct Human
{
    std::string Name;
    int Age;
    Human* Next;
};

int main()
{
    Human Person1;
    Person1.Name = "John";
    Person1.Age = 30;

    Human Person2;
    Person2.Name = "Emma";
    Person2.Age = 18;

    Person1.Next = nullptr;
    Person2.Next = nullptr;

    Person1.Next = &Person2;

    Human* CurrentPerson = &Person1;

    while (CurrentPerson != nullptr)
    {
          std::cout << "Name: " << CurrentPerson->Name << " Age: " << CurrentPerson->Age << std::endl; 
          CurrentPerson = CurrentPerson->Next;
    }
    

}
