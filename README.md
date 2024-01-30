# C++ Project

This C++ project focuses on the implementation of Abstract Data Types (ADTs) using classes to facilitate software reuse. The project includes two programs, each utilizing a specific class.

Each function within the programs has internal documentation, providing insights into its purpose, inputs, and outputs.

## Program 1: Student Class
- Create a client program using the Student class.
- Tasks:
    - Create objects (at least 4 objects).
    - Assign values to those objects (constant data can be used).
    - Store the objects in a vector (using `<vector>`).
    - Implement a function that takes the objects from the vector and prints them by directly accessing the member variables of the Student class. Utilize a friend function for this purpose.

## Program 2: Time Class
- Create a client program using the Time class.
- Tasks:
    - Create two objects of this class: `time1` and `time2`.
    - Assign values to these objects: Hours (00 to 23), minutes (00 to 59), and seconds (00 to 59).
    - Use the overloaded `+` operator to sum these objects: `sum_times = time1 + time2`.
    - Print the value returned by `sum_times` using the respective method.
    - Utilize the `time_greater` function and print its result. `time_greater` receives two times, one is implicit (`this`), and the other is a parameter. It returns another object containing the greater hour.
