Arrays and Objects in C++

This project contains several C++ files that explore two fundamental ways of handling collections of data with classes:

    An Object Containing Arrays: A single object of a class uses internal arrays to manage multiple pieces of data.

    An Array of Objects: An array where each element is a separate, independent object of a class.

📜 Concepts Explained
1. Object Containing Arrays

In this pattern, you create a single instance of a class. This class is designed to be a "manager" or "container" for a collection of data, which it stores in member arrays.

    Files: arraysofclass.cpp, arraysofclass02.cpp, arraysofclass03.cpp

    Analogy: Think of a single filing cabinet (the object). The cabinet itself has several drawers, and inside those drawers are arrays of folders (the internal arrays) that hold the information. You interact with the cabinet, and it manages the folders for you.

    Use Case: Good for when you need one central object to control and manage a set of related data. The Shop class, for example, acts as a single point of entry to manage all item IDs and prices.

2. Array of Objects

In this pattern, you create a standard array, but instead of holding simple data types like int or char, each element of the array is a complete object of a class. Each object in the array has its own set of member variables and functions.

    Files: arraysofobject.cpp, arraysofobjects.cpp

    Analogy: Think of a row of briefcases (the array). Each briefcase (the object) is separate and holds its own set of documents (member variables). You can open and interact with each briefcase individually.

    Use Case: Ideal for when you need multiple independent instances of a class, each with its own state. The employee examples are perfect for this, as each employee in the array has their own unique ID and salary.

📂 File Breakdown

    arraysofclass.cpp & arraysofclass03.cpp

        Concept: Object Containing Arrays.

        Description: These files define Shop and Kstar classes, respectively. A single object (dukaan, shop) is created to manage a list of item IDs and their corresponding prices using internal arrays.

    arraysofclass02.cpp

        Concept: Object Containing Arrays.

        Description: Defines a calc class that uses an internal array to store numbers and calculate their sum.


    arraysofobject.cpp & arraysofobjects.cpp

        Concept: Array of Objects.

        Description: These files define an employee class. In the main function, an array of employee objects is created (employee harry[5], employee facebook[100]). The code then iterates through the array to set and get data for each individual employee object.

⚙️ How to Compile and Run

You can compile and run any of these C++ files using a C++ compiler like g++.

    Open a terminal or command prompt.

    Navigate to the directory where you have saved the files.

    Compile the file using the following command (replace filename.cpp with the actual file name):

    g++ filename.cpp -o output_name

    Run the compiled executable:

    ./output_name

Example:

g++ arraysofobject.cpp -o employee_app
./employee_app

