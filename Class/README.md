
C++ Classes, Access Specifiers, and Constructors

This project contains C++ files that demonstrate core object-oriented programming (OOP) concepts. The examples focus on how to define a class, control access to its members, and initialize objects in different ways using constructors.
📜 Concepts Explained
1. Classes and Objects

A class is a blueprint for creating objects. It bundles data (member variables) and functions (member methods) that operate on that data into a single unit. An object is a specific instance of a class, with its own set of data.

    File: class.cpp

    Analogy: Think of a class as the architectural blueprint for a house. The blueprint defines the properties (like number of rooms, color) and functions (like open door, turn on lights). An object is the actual house built from that blueprint. You can build many houses (objects) from the same blueprint (class).

2. Access Specifiers (public vs. private)

Access specifiers control how the members (variables and functions) of a class can be accessed.

    public: Members declared as public can be accessed from anywhere outside the class. In class.cpp, the age variable and the setdata()/getdata() functions are public.

    private: Members declared as private can only be accessed by the member functions of that same class. This is a key principle of encapsulation, as it hides the internal state of an object from the outside world. In class.cpp, ID and name are private, which is why you cannot write naushad.ID = 123; in the main function. You must use a public function like setdata() to modify them.

3. Constructors

A constructor is a special member function that is automatically called when an object of a class is created. Its primary job is to initialize the object's data members.

    Default Constructor: A constructor that takes no arguments. It's used to create an object with a default initial state.

        File: classquestion01.cpp (The Employee() constructor).

    Parameterized Constructor: A constructor that accepts arguments, allowing you to initialize an object with specific values when it's created.

        Files: classquestion01.cpp (The Employee(string, int, double) constructor) and classquestion02.cpp (The abc(int, int) constructor).

    Copy Constructor: A constructor that creates a new object as a copy of an existing object of the same class.

        File: classquestion02.cpp (The abc(abc &p) constructor). This is called when you write abc c2 = c1;.

📂 File Breakdown

    class.cpp

        Concept: Demonstrates the basic structure of a class (Employee) with private and public access specifiers. It shows that private members (ID, name) cannot be accessed directly from main and require public member functions (setdata, getdata) to interact with them.

    classquestion01.cpp

        Concept: Illustrates constructors. The Employee class has both a default constructor (initializes with default values) and a parameterized constructor (initializes with values provided at creation). The main function shows both types of constructors in action.

    classquestion02.cpp

        Concept: Focuses on the copy constructor. The abc class has a parameterized constructor and a copy constructor. The line abc c2 = c1; in main invokes the copy constructor, creating c2 as an exact copy of c1.