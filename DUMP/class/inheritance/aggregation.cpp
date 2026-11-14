/*

(has-a)
Association: 1)Aggregation (weak) 2)Composition (strong)


*/
#include <iostream>
using namespace std;

class Teacher {
public:
    string name;
    Teacher(string n) : name(n)  {}
};

class Department {
private:
    Teacher* teacher; // Pointer to an external object : Department does not 
public:
    Department(Teacher* t) : teacher(t) {
        cout << "Department created. \n";

    }
    ~Department() {
        cout << "Department destroyed. \n"; 
    }
};

int main()
{
    Teacher* externalTeacher = new Teacher("Dummy");
    {
        Department dept(externalTeacher);
    }
    // dept goes out of scope and is destroyed here
    // The department is gone but the teacher still safely exists outside

    cout << "Teacher " << externalTeacher->name << " still exists.\n";
    delete externalTeacher;

    return 0;
}