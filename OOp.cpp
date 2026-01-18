// ============================================================================
// FOUR PILLARS OF OBJECT-ORIENTED PROGRAMMING (OOP)
// ============================================================================
// 1. Encapsulation    - Bundling data and methods, data hiding
// 2. Abstraction      - Hiding implementation complexity, showing only essentials
// 3. Inheritance      - Reusing code by deriving classes from base classes
// 4. Polymorphism     - Objects behaving in multiple forms

// ============================================================================
// WHAT IS A CLASS?
// ============================================================================
// A class is a user-defined data type in C++ that serves as a blueprint for
// creating objects. It encapsulates data (member variables/attributes) and 
// methods (member functions) that define the behavior of objects created from 
// the class.

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int id;//property or attribute
    string email;

    //method or member function
    void ShowInfo() {
        cout << "Name: " << name << ", ID: " << id 
             << ", Email: " << email << endl;
    }
};

// Example: Create objects of Student class
void exampleClass() {
    Student s1;//object or instance of class

    s1.name = "John";
    s1.id = 101;
    s1.email = "john@example.com";
    s1.ShowInfo();

    Student s2;
    s2.name = "Jane";
    s2.id = 102;
    s2.email = "jane@example.com";
    s2.ShowInfo();
}

// ============================================================================
// WHAT IS AN OBJECT?
// ============================================================================
// An object is an instance of a class. It is a concrete entity that encapsulates
// data and behavior defined by the class.

// ============================================================================
// WHAT IS AN INSTANCE?
// ============================================================================
// An instance is a specific realization of an object. It is created based on 
// the structure defined by its class.

// ============================================================================
// WHAT IS A CONSTRUCTOR?
// ============================================================================
// A constructor is a special member function of a class that is automatically
// called when an object of that class is created. It is used to initialize 
// the object's member variables and allocate resources.

// Types of Constructors:
// 1. Default Constructor:      Takes no parameters
// 2. Parameterized Constructor: Takes parameters to set values during creation

class StudentWithConstructor {
public:
    string name;
    int id;

    // Parameterized Constructor
    StudentWithConstructor(string name, int id) {
        this->name = name;
        this->id = id;
    }

    void ShowInfo() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

// Example: Using Constructor
void exampleConstructor() {
    StudentWithConstructor s1("Karim", 104);
    s1.ShowInfo();

    StudentWithConstructor s2("Alia", 105);
    s2.ShowInfo();
}

// ============================================================================
// ACCESS modifier or SPECIFIERS (Private, Public, Protected)
// ============================================================================
// Special keywords used to define the accessibility of data (properties) and 
// methods within a class.

// PUBLIC:     Data and methods accessible inside and outside the class
// PRIVATE:    Data and methods accessible only inside the class (default)
// PROTECTED:  Data and methods accessible in class and derived classes

class Teacher {
private:
    // Private data members - not accessible from outside
    double salary;

public:
    // Public data members - accessible from anywhere
    string name;
    string dept;
    string subject;

    // Public method
    void changeDepartment(string newDept) {
        dept = newDept;
    }

    // Setter for private salary
    void setSalary(double s) {
        salary = s;
    }

    // Getter for private salary
    double getSalary() {
        return salary;
    }
};

// Example: Using Access Specifiers
//benefit get and set method diye private data ke access korte pari
//tahole private rakhar karon ki?
//karon jodi direct access dei tahole data manipulate korte parbe je kono jayga theke
//but get set method diye access dile control thakbe data access er upor
//jemon set method e condition dite pari jodi negative salary dei tahole set korbe na
void exampleAccessSpecifiers() {
    Teacher t1;
    t1.name = "Shradha";
    t1.subject = "C++";
    t1.dept = "Computer Science";

    t1.setSalary(25000.0);      // Setting private salary via public method
    cout << t1.getSalary() << endl;  // Getting private salary via public method

    t1.changeDepartment("Electrical");
}


// ============================================================================
// ENCAPSULATION
// ============================================================================
//encapsulation: is wrapping data and methods into a single unit using class
//it help data hiding and protect data from unauthorized access
// One of the four pillars of OOP. It means "wrapping up" data (properties) and 
// member functions (methods) into a single unit (the class). It helps achieve 
// data hiding and protects data from unauthorized access.

// The Teacher class above is an example of encapsulation:
// - Bundling name, dept, subject, salary, and methods into one class
// - Salary is private (hidden), accessed through public methods (controlled access)

// ============================================================================
// CONSTRUCTOR TYPES AND OVERLOADING
// ============================================================================
// initialization with values when object is created
// Different ways to create constructors for different initialization needs
// Constructor Overloading: A class can have multiple constructors with different
// parameters. This is an example of Polymorphism.

// name smae as class name
// no return type
// can be parameterized or non-parameterized
// use for object initialization
// can be overloaded
// some vale can set default value in constructor parameter
// memory allocation hapens when object is created

class TeacherMultiConstructor {
public:
    string name;
    string dept;
    string subject;
    double salary;

    // Non-Parameterized Constructor
    TeacherMultiConstructor() {
        dept = "Computer Science";
        cout << "Non-Parameterized Constructor called" << endl;
    }

    // Parameterized Constructor
    TeacherMultiConstructor(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
        cout << "Parameterized Constructor called" << endl;
    }

    // this pointer use kore same name er parameter and member variable ke distinguish kora hoyeche
    //like this->name = name;
    //here this-> is class er member variable ke indicate korche
    //ar name hocche parameter
    //copy constructor
    TeacherMultiConstructor(TeacherMultiConstructor &obj) {//copy by reference
        name = obj.name;
        dept = obj.dept;
        subject = obj.subject;
        salary = obj.salary;
        cout << "Copy Constructor called" << endl;
    }
    //using differnt parameter cosntructor overloading

    void getInfo() {
        cout << "Name: " << name << ", Subject: " << subject << endl;
    }
};

// Example: Constructor Overloading
void exampleConstructorOverloading() {
    TeacherMultiConstructor t1;              // Calls non-parameterized
    TeacherMultiConstructor t2("Shradha", "CS", "C++", 25000.0);  // Calls parameterized
    t2.getInfo();

    //default copy constructor is provided by compiler if no constructor is defined
    TeacherMultiConstructor t3 = t2;        // Calls copy constructor
}

// ============================================================================
// THIS POINTER
// ============================================================================
// A special pointer in C++ that points to the current object. When a method is 
// called on an object, the 'this' pointer automatically points to that specific 
// object, allowing methods to refer to the object's properties.

class TeacherThis {
public:
    string name;
    string subject;

    TeacherThis(string name, string subject) {
        this->name = name;           // 'this->name' refers to member variable
        this->subject = subject;     // Parameter refers to function parameter
    }
};

// ============================================================================
// COPY CONSTRUCTOR
// ============================================================================
// A special constructor that takes an object of the same class as argument.
// It is used to initialize a new object with the values of an existing object.

class TeacherCopy {
public:
    string name;
    string dept;

    // Parameterized Constructor
    TeacherCopy(string n, string d) {
        name = n;
        dept = d;
    }

    // Copy Constructor
    TeacherCopy(TeacherCopy &obj) {
        name = obj.name;
        dept = obj.dept;
        cout << "Copy Constructor Called!" << endl;
    }
};

// Example: Copy Constructor
void exampleCopyConstructor() {
    TeacherCopy t1("Shradha", "CS");     // Calls parameterized constructor
    TeacherCopy t2 = t1;                 // Calls copy constructor
    // TeacherCopy t2(t1);                // Alternative syntax - also calls copy constructor
}

// ============================================================================
// SHALLOW VS. DEEP COPY
// ============================================================================

// SHALLOW COPY: Copies the memory address of dynamically allocated data.
// Both objects point to same location. Changes in one affect the other.
// (This is default behavior - PROBLEMATIC with dynamic memory)

class StudentShallow {
public:
    char *name;
    int roll;

    StudentShallow(char n[], int r) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        roll = r;
    }
    // Default shallow copy constructor (PROBLEMATIC):
    // StudentShallow(const StudentShallow& other) {
    //     name = other.name;  // Copies pointer, not data!
    //     roll = other.roll;
    // }
};

// DEEP COPY: Creates new memory allocation for dynamically allocated data.
// Both objects have independent copies. Changes don't affect each other.
// (Requires user-defined copy constructor)

class StudentDeep {
public:
    char *name;
    int roll;

    StudentDeep(char n[], int r) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        roll = r;
    }

    // User-defined Copy Constructor for Deep Copy
    StudentDeep(const StudentDeep& other) {
        name = new char[strlen(other.name) + 1];  // New memory allocation
        strcpy(name, other.name);                 // Copy content
        roll = other.roll;
    }

    // Destructor to free allocated memory
    ~StudentDeep() {
        delete[] name;
    }
};

// ============================================================================
// DESTRUCTOR
// ============================================================================
// A special method automatically invoked when an object is destroyed or goes 
// out of scope. Primarily used to deallocate memory and prevent memory leaks.

// Properties of Destructors:
// - Same name as class, preceded by tilde (~)
// - No return type, no parameters
// - Only one destructor per class

class TeacherDestructor {
public:
    string name;

    TeacherDestructor(string n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }

    ~TeacherDestructor() {
        cout << "Destructor called for " << name << endl;
    }
};

// Example: Destructor
void exampleDestructor() {
    TeacherDestructor t1("Alice");  // Constructor called
    {
        TeacherDestructor t2("Bob");  // Constructor called
    }                                 // t2 goes out of scope, destructor called
}                                     // t1 goes out of scope, destructor called


// ============================================================================
// INHERITANCE
// ============================================================================
// An OOP concept where a derived (child) class inherits properties and methods 
// from a base (parent) class. Promotes code reusability.
//using simple english
//derived class can use base class er property and method
//for code reusability
//base class er property and method ke abar likhte hoy na derived class e
// public, private, protected inheritance
// public inheritance is most common
// in public inheritance public members of base class become public members of derived class
// private members of base class remain inaccessible to derived class
// protected members of base class become protected members of derived class


//first run parrent class then child class for constructor
//but destructor run first child class then parent class


class Human {  // Base class
public:
    string name;
    int age;

    void introduce() {
        cout << "Hi, I'm " << name << ", " << age << " years old." << endl;
    }
};

class StudentInherit : public Human {  // Derived class
public:
    int roll_no;
    string school_name;
    StudentInherit(string n, int a, int r, string s) : Human(n, a) {
        roll_no = r;
        school_name = s;
    } //call base class constructor
    void study() {
        cout << name << " is studying." << endl;
    }
};

// Example: Inheritance
void exampleInheritance() {
    StudentInherit s1;
    s1.name = "Alice";             // Inherited from Human
    s1.age = 20;                   // Inherited from Human
    s1.roll_no = 123;
    s1.school_name = "XYZ School";
    s1.introduce();                // Inherited from Human
    s1.study();
}

//inheritance mode
// public, private, protected
// public inheritance is most common    
// in public inheritance public members of base class become public members of derived class
// private members of base class remain inaccessible to derived class
// protected members of base class become protected members of derived class

//type of inheritance
//singlelevel inheritance
//multilevel inheritance
//what is multiple inheritance?
//when a derived class inherits from more than one base class
class ta : public Human, public Teacher {
    //ta class can access public members of Human and Teacher class
};
//hierarchical inheritance
//when multiple derived classes inherit from a single base class
class tb : public Human {
    //tb class can access public members of Human class
};
class tc : public Human {
    //tc class can access public members of Human class
};

// ============================================================================
// POLYMORPHISM
// ============================================================================
// One of the four pillars of OOP. Means "many forms." Allows objects of 
// different classes to be treated as objects of a common base class.

//like constructor overloading and function overloading


//types of polymorphism
//compile time polymorphism (static binding)
//--> in single calss just parameter er basis e function overloading
// static hoye 
// run time polymorphism (dynamic binding)

// ============================================================================
// FUNCTION OVERLOADING (Compile-time Polymorphism)
// ============================================================================
// Multiple functions with same name in same scope, but different parameters
// (different in number, type, or order). Compiler decides which to call.

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
};

// Example: Function Overloading
void exampleFunctionOverloading() {
    Calculator calc;
    cout << calc.add(5, 10) << endl;         // Calls first add (two int)
    cout << calc.add(5, 10, 15) << endl;     // Calls second add (three int)
    cout << calc.add(5.5, 10.5) << endl;     // Calls third add (two double)
}

// ============================================================================
// FUNCTION OVERRIDING (Runtime Polymorphism)
// ============================================================================
// Derived class provides specific implementation for function already defined 
// in base class. The function in derived class "overrides" the base class version.

class Animal {  // Base class
public:
    virtual void speak() {  // Virtual function
        cout << "Animal speaks!" << endl;
    }
};

class Dog : public Animal {  // Derived class
public:
    void speak() override {  // Override keyword (good practice)
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow! Meow!" << endl;
    }
};

// Example: Function Overriding
void exampleFunctionOverriding() {
    Animal a;
    a.speak();              // Output: Animal speaks!

    Dog d;
    d.speak();              // Output: Woof! Woof!

    // Using pointers for dynamic binding
    Animal* animalPtr1 = new Dog();
    Animal* animalPtr2 = new Cat();

    animalPtr1->speak();    // Output: Woof! Woof! (Dynamic binding)
    animalPtr2->speak();    // Output: Meow! Meow! (Dynamic binding)

    delete animalPtr1;
    delete animalPtr2;
}

// ============================================================================
// VIRTUAL FUNCTION
// ============================================================================
// Member function in base class declared with 'virtual' keyword. When called 
// through pointer/reference to base class, C++ runtime determines which version 
// (base or derived) to call based on actual object type. Crucial for runtime polymorphism.

// See examples in Function Overriding section above.

// ============================================================================
// ABSTRACTION
// ============================================================================
// One of the four pillars of OOP. Shows only essential information and hides 
// complex implementation details. Focuses on "what an object does" rather than 
// "how it does it." Achieved using abstract classes and interfaces.

// ============================================================================
// ABSTRACT CLASS
// ============================================================================
// A class that cannot be instantiated directly. Designed to be a base class.
// Contains one or more pure virtual functions (declared with = 0).
// Derived classes must implement all pure virtual functions.

class Shape {  // Abstract Class
public:
    virtual double area() = 0;      // Pure virtual function
    virtual void display() = 0;     // Pure virtual function

    void printInfo() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14 * radius * radius;
    }

    void display() override {
        cout << "Circle with radius: " << radius << endl;
    }
};

// Example: Abstract Class
void exampleAbstractClass() {
    // Shape s;  // ERROR: Cannot create object of abstract class
    Circle c(5);
    c.display();
    cout << "Area: " << c.area() << endl;
}

// ============================================================================
// STATIC KEYWORD
// ============================================================================
// Can be used with class members (variables and functions).

// STATIC DATA MEMBERS: Belong to the class, not to individual objects.
// All objects share a single copy of static data member.

// STATIC MEMBER FUNCTIONS: Can only access static data members and other 
// static member functions. Called using class name, without creating object.

class MyClass {
public:
    static int count;  // Static data member (declaration)

    MyClass() {
        count++;       // Increment every time object is created
    }

    static void displayCount() {  // Static member function
        cout << "Number of objects: " << count << endl;
    }
};

// Definition and initialization of static data member outside the class
int MyClass::count = 0;

// Example: Static Members
void exampleStaticMembers() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::displayCount();  // Call static function using class name
    // Output: Number of objects: 3
}

// ============================================================================
// MAIN FUNCTION
// ============================================================================
int main() {
    cout << "=== OOP CONCEPTS DEMONSTRATION ===" << endl;

    // Uncomment the example functions you want to test:
    
    // exampleClass();
    // exampleConstructor();
    // exampleAccessSpecifiers();
    // exampleConstructorOverloading();
    // exampleCopyConstructor();
    // exampleDestructor();
    // exampleInheritance();
    // exampleFunctionOverloading();
    // exampleFunctionOverriding();
    // exampleAbstractClass();
    // exampleStaticMembers();

    return 0;
}



