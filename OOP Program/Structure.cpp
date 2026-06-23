#include <bits/stdc++.h>
using namespace std;
/*
Structure

1) Structure can be a collection of dissimilar elements
2) Structure is a group of variables
3) Defining structure is creating own data type (Custom Data Type or Non Primitive Data Type or Secondary Data Type or User defined data type)


Primitive types (predefined data types)
--------------
int,char,float,double,void

Non Primitive Data Types
------------------------
There are three ways to create own data type (non primitive data type)
1) structure    | struct
2) union        | union
3) enumerator   | enum

Student, Employee, Account, Book, Customer, etc

*/

// How to define a structure?
// Defining a structure means creating a new data type.

struct Book
{
    int bookid;
    string title;
    float price;
};
void f1()
{
    struct Book b1, b2;
}

// How to initialize structure variable during declaration?
void f2()
{
    struct Book b1 = {1, "Python", 300};
}
// How to initialize structure member variables after declaration?

// structureVariable.memberVariable
void f3()
{
    struct Book b1;
    b1.bookid = 2;
    b1.title = "Java";
    b1.price = 450.0;
}

// Taking input from user

void f4()
{
    struct Book b1;
    printf("Enter bookid, title and price of a cbook");
    scanf("%d", &b1.bookid);
    printf("Ente tittle=");
    scanf("%s", &b1.title);
    scanf("%f", &b1.price);

    printf("%d %s %f", b1.bookid, b1.title, b1.price);
}

// How to create an array of non primitive type?
void f5()
{
    struct Book b[5];
}

// Function returning structure
struct Book f6()
{
    struct Book b1;
    printf("Enter bookid, title and price of a cbook");
    scanf("%d", &b1.bookid);
    printf("Ente tittle=");
    scanf("%s", &b1.title);
    scanf("%f", &b1.price);

    return b1;
}

// Function call by passing structure
void show(struct Book b)
{
    printf("%d %s %f\n", b.bookid, b.title, b.price);
}

void f7()
{
    struct Book b1 = {1, "Python", 340};
    show(b1); // call by passing structure
}

// Structure Pointer

void f8()
{
    struct Book b1;
    struct Book *p;
    p = &b1;
    /*
    *p === b1

    b1.bookid === (*p).bookid === p->bookid
    */
}
int main()
{
    struct Book book;
    return 0;
}