#include <iostream>

using namespace std;

class Employee{//In cpp classes are private by deafault 
public:
    string Name;
    string Company;
    int Age;
    //These are the attributes of a class

void introduction(){
    cout<<"Hello, my name is "<<Name<<" I am "<<Age<<" years old "<<"and i work for "<<Company<<endl;
}
//Creating a constructort
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};// ; is compulsory at the end of a class

int main(){
    //Creating an object of the class
    Employee employee1 = Employee("Yakuv","Amazon",34);//employee1 is an object of class Employee
    employee1.introduction();

    //Ceating another instance
    Employee employee2 = Employee("Rohan","facebook",23);
    employee2.introduction();
    return 0;
}