#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
   
    string name;
    int age {};
    float CGPA;
    
  public:
    
    string Name() {return name;}
    int Age() {return age;}
    float Cgpa() {return CGPA;}

    Student(string studentName, float studentGpa, int studentage) 
    {
        name = studentName;
        CGPA = studentGpa;
        age = studentage;
    }

    void Print()
    {
        cout<< "Name= " << name << endl;
        cout<< "Age= " << age << endl;
        cout<< "CGPA= " << CGPA << endl;
    }

    void setGpa(float newCGpa) {
    if (newCGpa >= 0.0 && newCGpa <= 4.0) {
        CGPA = newCGpa;
    } else {
        cout << "Invalid GPA. Must be between 0.0 and 4.0." << endl;
    }
}
};

int main()
{
    Student s1 ("Waxir", 2.2, 23);
   
    s1.setGpa(-3.9); 

   s1.Print();

   // s1.CGPA = -99.0;
//cout << s1.CGPA << endl;
  return 0;
}