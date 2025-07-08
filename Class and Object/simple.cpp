#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int roll;
        string address;
        string id;
        string stream;

        void printDetails() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << roll << endl;
            cout << "Address: " << address << endl;
            cout << "ID: " << id << endl;
            cout << "Stream: " << stream << endl;
        }

    public:
        void setter(string Name, int Roll_number, string Address, string ID, string Stream) {
            name = Name;
            roll = Roll_number;
            address = Address;
            id = ID;
            stream = Stream;
        }
        
        void getter() {
            printDetails();
        }
};

int main() {
    Student student;
    student.setter("John Doe", 123, "123 Main St", "ID001", "Computer Science");
    student.getter();
    
    return 0;
}