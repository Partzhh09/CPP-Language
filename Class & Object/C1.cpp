#include<iostream>
using namespace std;

class Employee {
    public:
        string name;
        int age;
        double salary;
        string id;
        string address;

        void setName(string n, int a, double s, string i, string addr) {
            name = n;
            age = a;
            salary = s;
            id = i;
            address = addr;
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age <<endl;
            cout << "Salary: " << salary <<endl;
            cout << "ID: " << id <<endl;
            cout << "Address: " << address <<endl;
        }
};
int main() {
    Employee emp;
    emp.setName("Parth", 20, 50000.0, "EMP1004", "Rajkot");
    emp.display();
    return 0;
}