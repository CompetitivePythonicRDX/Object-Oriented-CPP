#include <iostream>
//Abstraction
using namespace std;

class AbstractEmployee{ //This is an abstract calss i.e. Hidden from the user

    virtual void ask4promotion()= 0;//Pure virtual function
};


class Employee:AbstractEmployee {//Adding the abstract class
private:
    string Name;
    string Company;
    int Age;
    //These are the attributes of a class
public:
    void setName(string name){
        Name = name;
    }
    string getnmae(){return Name;}
    void setAge(int age){if(age>=18)Age = age;}
    int getAge(){return Age;}
    void setCompany(string company){Company = company;}
    string getCompany(){return Company;}

    void introduction(){
    cout<<"Hello, my name is "<<Name<<" I am "<<Age<<" years old "<<"and i work for "<<Company<<endl;
    }
    void ask4promotion(){
        if (Age > 30) std::cout<<Name<<" got promoted"<<endl;
        else std::cout<<Name<<" did not get promoted."<<endl;
    }


//Creating a constructor
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

};// ; is compulsory at the end of a class

int main(){
    //Creating an object of the class
    Employee employee1 = Employee("Saldina","Amazon",23);
    employee1.setAge(24);
    std::cout<<employee1.getnmae()<<" is "<<employee1.getAge()<<" years old."<<endl;
    employee1.ask4promotion();
    return 0;
}