#include<iostream>
#include<fstream>
using namespace std;

class Student {
public:
    string name;
    int age;
    double gpa;
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() 
{
    Student st;
    st.name = "John";
    st.age = 21;
    st.gpa = 3.7;
    ofstream fout("student.dat", ios::binary);
    if (!fout) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    fout.write((char*)&st, sizeof(st));
    fout.close();
    Student st1;
    ifstream fin("student.dat", ios::binary);
    if (!fin) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
    fin.read((char*)&st1, sizeof(st1));
    fin.close();
    cout << "Data read from file:" << endl;
    st1.display();
}

