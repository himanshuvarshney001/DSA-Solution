// 1. Define a structure Employee with member variables id, name, salary

// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]

// 3. Write a function to display employee data. [ Refer structure from question 1 ]

// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1 ]

// 5. Write a function to sort employees according to their salaries [ refer structure from question 1 ]

// 6. Write a function to sort employees according to their names [refer structure from question 1 ]

#include <bits/stdc++.h>
using namespace std;
struct Employee
{
    int id;
    string name;
    double salary;
};

void input(Employee &emp)
{
    cout << "Enter employee id=";
    cin >> emp.id;
    cin.ignore(); // important
    cout << "Enter employee name=";
    getline(cin, emp.name);
    cout << "Enter the salary of employee";
    cin >> emp.salary;
}

void display(const Employee &emp)
{
    cout << "......................." << endl;
    cout << "Employee id=" << emp.id << endl;
    cout << "Employee name=" << emp.name << endl;
    cout << "Employee salary=" << emp.salary << endl;
    cout << "......................." << endl;
}

Employee highestSalary(Employee emp[], int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (emp[i].salary > emp[index].salary)
            index = i;
    }
    return emp[index];
}

bool cmp(Employee a, Employee b)
{
    return a.salary < b.salary;
}
void sortBysalary(Employee arr[], int size)
{
    sort(arr, arr + size, cmp);
}

bool cmp1(Employee a, Employee b)
{
    return a.name < b.name;
}
void sortbyname(Employee arr[], int size)
{
    sort(arr, arr + size, cmp1);
}

int main()
{
    int employee;
    cout << "Enter the number of employee=";
    cin >> employee;
    Employee emp[employee];
    for (int i = 0; i < employee; i++)
    {
        input(emp[i]);
    }
    for (int i = 0; i < employee; i++)
    {
        display(emp[i]);
    }
    cout << "Highest salary Person=" << endl;
    Employee high = highestSalary(emp, employee);
    display(high);

    cout << "Sort emplyee on the basis of salary=" << endl;
    sortBysalary(emp, employee);
    for (int i = 0; i < employee; i++)
    {
        display(emp[i]);
    }

    cout << "Sort on the basis of emplyee name=" << endl;
    sortbyname(emp, employee);
    for (int i = 0; i < employee; i++)
    {
        display(emp[i]);
    }
    return 0;
}