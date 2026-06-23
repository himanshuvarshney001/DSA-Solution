/*

    - Data
    - Program/Software
    - Variables
    - Life of Data
    - What if we want to preserve data beyond the life of the program?
    - Then we have to store it in the secondary memory
    - Data is stored in secondary memory in the form of a logical entity called 'file'
    - In order to achieve this, we have to transfer our programs data (which is possibly in your variables) to the file or bring data from a file to our variables.
    - Input/Read: file to variable
    - Output/Write: variable to file

    Coding responsible for performing read, write or any other file related operations, is known as 'File Handling'

    File Handling
    --------------

    cout is a predefined object of class ostream
    cin is a predefined object of class istream

    cout represents an output stream whose destinition is monitor

    cout<<x;

    cin represents an input stream whose source is keyboard

    cin>>x;

    Stream classes in C++
    --------------------

           ios_base
            |
           ios
            |
        ---------------
        |             |
    istream         ostream
      |  |            |  |
      |  -------------   |
      |        |         |
      |     iostream     |
    ifstream   |       ofstream
             fstream

    - ifstream, fstream and ofstream are used in file handling.
    - to use them you have to include fstream header

 File handling code
 1) create an object of input stream or output stream
 2) open a file
 3) Read/Write
 4) close file

 File types
 1) Text Files
 2) Binary Files

 File Opening Modes
 ------------------
 Read:      ios::in
 Write:     ios::out
 Append:    ios::app
 Binary:    ios::binary

*/
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
void write_to_file(char filename[])
{
    ofstream fout;
    fout.open(filename, ios::out);
    fout << "Himanshu";
    fout.close();
}
void append_to_file(char filename[])
{
    ofstream fout;
    fout.open(filename, ios::app);
    fout << "\nMathura";
    fout.close();
}
void read_from_file(char filename[])
{
    ifstream fin;
    char ch;
    fin.open(filename, ios::in);
    if (!fin)
        cout << "File not found";
    else
    {
        ch = fin.get();
        while (!fin.eof())
        {
            cout << ch;
            ch = fin.get();
        }
        fin.close();
    }
}
void f1(char filename[])
{
    char ch;
    ifstream fin;
    fin.open(filename, ios::in);
    fin.seekg(10); // seekp (ofstream)
    fin >> ch;
    cout << ch << endl;

    cout << fin.tellg(); // tellp (ofstream)
    fin.close();
}
class Student
{
private:
    int rollno;
    char name[40];
    static char filename[];

public:
    void setRollno(int r) { rollno = r; }
    void setName(char n[]) { strcpy(name, n); }
    void showStudent()
    {
        cout << endl
             << rollno << "   " << name;
    }
    void saveStudent();
    void viewStudents();
};
char Student::filename[] = "student.dat";
void Student::saveStudent()
{
    ofstream fout;
    fout.open(filename, ios::app);
    fout.write((char *)this, sizeof(*this));
    fout.close();
}
void Student::viewStudents()
{
    ifstream fin;
    fin.open(filename, ios::in);
    if (!fin)
        cout << "File not found";
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            showStudent();
            fin.read((char *)this, sizeof(*this));
        }
        fin.close();
    }
}
void driver()
{
    Student s1;
    s1.setName("Arun Prajapati");
    s1.setRollno(100);
    s1.saveStudent();
    s1.setName("Roshani Dixit");
    s1.setRollno(102);
    s1.saveStudent();
    s1.setName("Anand Sisodia");
    s1.setRollno(105);
    s1.saveStudent();
    s1.viewStudents();
}
int main()
{
    // char filename[]="file1.txt";
    // write_to_file(filename);
    // append_to_file(filename);
    // read_from_file(filename);
    // f1(filename);
    driver();
    // cout<<"\nFile updated!!";
    cout << endl;
    return 0;
}