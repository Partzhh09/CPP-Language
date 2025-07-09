#include<iostream>
using namespace std;
class Customer
{
private:
    string name;
    double salary;
public:
    Customer(string Name, double Salary){
        name = Name;
        salary = Salary;
    }
    void printDetails() {
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};


int main() {
    Customer c1("Parth", 50000.0);
    c1.printDetails();
    return 0;
}