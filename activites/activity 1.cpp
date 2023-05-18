#include <iostream>
using namespace std;

class Manager {
public:
    Manager(string n, int a, int s) {
        name = n;
        age = a;
        salary = s;
    }
    string name;
    int age;
    int salary;
};

int main() {
    // create an array of Manager objects
    Manager managers[] = {
        Manager("ayushmaan", 19, 100000),
        Manager("ankush", 20, 9000),
        Manager("raghav", 18, 80000)
    };

    // print details of all managers
    for (int i = 0; i < 3; i++) {
        cout << "Manager " << i+1 << ":\n";
        cout << "Name: " << managers[i].name << "\n";
        cout << "Age: " << managers[i].age << "\n";
        cout << "Salary: " << managers[i].salary << "\n\n";
    }

    return 0;
}
