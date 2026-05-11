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
};

int main()
{
    Student s1 ("Waxir", 22, 2.8);
    s1.Print();

  

   // s1.CGPA = -99.0;
//cout << s1.CGPA << endl;
  return 0;
}