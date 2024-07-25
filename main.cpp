#include <iostream>
#include <string>
using namespace std;


class Student {

// basic properties

std::string name;
int age ;
std::string major;

// constructor
public:
Student(std::string n , int a , std::string m) : name(n) , age(a), major(m) { }

// method to sisplay params of a object 
virtual void display()   {
  cout << "Name : " << name << endl;
  cout << "Age : " << age << endl;
  cout << "Major : "<< major << endl; 
}

};
 
class WorkingStudent : Student {

string companyName;
int WorkingHour;

// constructor
public:
WorkingStudent(string n , int a , string m , string c , int wo) : Student(n,a,m) , companyName(c), WorkingHour(wo) {}

// display method overrided
public:
void display() override {
    Student::display();   // call base class display first 
    cout << "Company Name : " << companyName << endl;
    cout << "Working Hour : " << WorkingHour << endl;

}


};

int main() {

    Student s("kabir" , 21 , "CS");
    s.display();

    WorkingStudent w("Hittu" , 22 , "Arts" , "Swad" , 48);
    w.display();



    return 0;
}