#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
   
    string name;
    int age {};
    float cgpa;
    
  public:
    
    string Name() {return name;}
    int Age() {return age;}
    float Cgpa() {return cgpa;}

    Student(string studentName, float studentcgpa, int studentage) 
    {
        name = studentName;
        cgpa = studentcgpa;
        age = studentage;
    }

    void Print()
    {
        cout<< "Name= " << name << endl;
        cout<< "Age= " << age << endl;
        cout<< "CGPA= " << cgpa << endl;
    }

    void setCgpa(float newCgpa) {
    if (newCgpa >= 0.0 && newCgpa <= 4.0) {
        cgpa = newCgpa;
    } else {
        cout << "Invalid GPA. Must be between 0.0 and 4.0." << endl;
    }
}
};

int main()
{
    Student s1 ("Waxir", 2.2, 23);
   
    s1.setCgpa(-3.9); 

   s1.Print();

   // s1.CGPA = -99.0;
//cout << s1.CGPA << endl;
  return 0;
}