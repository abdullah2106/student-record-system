#include <iostream>
using namespace std;

void swapbyvalue(float a, float b)
{
    float temp=a;
    a=b;
    b=temp;

}

void swapbyreference(float & a, float& b )
{
  float temp = a;
    a = b;
    b = temp;
}

void swapbypointer(float* a, float * b)
{
     float  temp =* a;
    *a =*b;
    *b = temp;
}

int main()
{
    float gpa1=3.8;
    float gpa2=3.5;
    cout<< "Before Swap " << gpa1 << " " << gpa2 << endl;
    cout<< "By value"<< endl;
    swapbyvalue(gpa1, gpa2);
    cout<< "After Swap " << gpa1 << " " << gpa2 << endl;
    swapbyvalue(gpa1, gpa2);

       // Test 2: by pointer
    cout << "\n--- By Pointer ---" << endl;
    cout << "Before: " << gpa1 << ", " << gpa2 << endl;
    swapbypointer(&gpa1, &gpa2);
    cout << "After:  " << gpa1 << ", " << gpa2 << endl;

    // Swap back
    swapbypointer(&gpa1, &gpa2);

    // Test 3: by reference
    cout << "\n--- By Reference ---" << endl;
    cout << "Before: " << gpa1 << ", " << gpa2 << endl;
    swapbyreference(gpa1, gpa2);
    cout << "After:  " << gpa1 << ", " << gpa2 << endl;

    // Show addresses
    cout << "\n--- Memory Addresses ---" << endl;
    cout << "gpa1 address: " << &gpa1 << endl;
    cout << "gpa2 address: " << &gpa2 << endl;

    float* ptr = &gpa1;
    cout << "ptr holds:    " << ptr << endl;
    cout << "*ptr value:   " << *ptr << endl;

    return 0;
}
