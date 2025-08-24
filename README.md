# Object-Oriented-Programming

C++ Object-Oriented Programming (OOP) Practice 🚀
Welcome to this C++ OOP Practice repository! This project is a collection of C++ code examples designed to demonstrate and solidify understanding of the core principles of Object-Oriented Programming. It serves as a practical guide and a personal playground for exploring concepts like classes, objects, inheritance, polymorphism, and more.

Core Concepts Covered
This repository showcases various OOP concepts through clear and commented examples. The key principles demonstrated include:

📦 Encapsulation: Bundling data (attributes) and the methods (functions) that operate on that data into a single unit, or class. Access to the data is controlled through public interfaces, protecting it from outside interference.

🎭 Abstraction: Hiding complex implementation details from the user and showing only the essential features of an object. This is often achieved using abstract classes and interfaces, simplifying the way we interact with our code.

👨‍👩‍👧‍👦 Inheritance: The mechanism of basing an object or class upon another object (prototype-based inheritance) or class (class-based inheritance), retaining similar implementation. This promotes code reusability and establishes a clear hierarchy between classes.

** polymorphic-shapes.png Polymorphism**: The ability for a message to be displayed in more than one form. In C++, this is primarily achieved through function overriding (using virtual functions) and function overloading, allowing objects of different classes to be treated as objects of a common superclass.

Getting Started
Follow these instructions to get a copy of the project up and running on your local machine for development and testing.

Prerequisites
You will need a C++ compiler installed on your system. The GNU C++ Compiler (g++) is a standard and widely used option.

To check if you have g++ installed, open your terminal or command prompt and run:

g++ --version

If you don't have it installed, you can get it through build tools like MinGW on Windows, or by installing build-essential on Debian/Ubuntu-based Linux distributions.

Compilation & Execution
Clone the repository:

git clone https://github.com/your-username/your-repository-name.git
cd your-repository-name

Compile the code:
Navigate to the source directory. Use the compiler to create an executable file. For a project with multiple source files, it's best to compile them together.

# Example: Compiling all .cpp files in the 'src' directory along with main.cpp
g++ -o main main.cpp src/*.cpp -Iinclude -std=c++11

-o main: Specifies the output executable file name.

-Iinclude: Tells the compiler to look in the include directory for header files.

-std=c++11: Ensures the code is compiled with C++11 standards (or a newer standard like c++14, c++17).

Run the executable:
Once compiled, you can run the program from your terminal:

./main

Project Structure
The repository is organized to keep the code clean, modular, and easy to navigate.

.
├── include/      # Header files (.h, .hpp) for class declarations
│   └── Shape.h
│   └── Circle.h
├── src/          # Source files (.cpp) for class definitions
│   └── Shape.cpp
│   └── Circle.cpp
├── main.cpp      # The main driver file for demonstrating the code
└── README.md     # This file

include/: Contains all the class declarations (header files). This is where the "what" of a class is defined.

src/: Contains the implementation of the classes and functions declared in the header files. This is the "how".

main.cpp: The entry point of the application. It's used to create objects and demonstrate the OOP concepts in action.

Contributing 🤝
Contributions are what make the open-source community such an amazing place to learn, inspire, and create. Any contributions you make are greatly appreciated.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement". Don't forget to give the project a star! Thanks again!

Fork the Project

Create your Feature Branch (git checkout -b feature/AmazingFeature)

Commit your Changes (git commit -m 'Add some AmazingFeature')

Push to the Branch (git push origin feature/AmazingFeature)

Open a Pull Reques
