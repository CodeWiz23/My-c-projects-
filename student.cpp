#include "student.h"
#include <iostream>
using namespace std;
void student:: display () const
{

    cout << "Calling Constant function"<<endl<<endl;
}

void student::display2()
{
    cout << "Calling Non constant function" <<endl ;
}
