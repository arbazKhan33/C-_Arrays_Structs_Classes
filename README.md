# C-_Arrays_Structs_Classes
This repository hosts my solutions for a C++ programming assignment covering topics such as arrays, structs, and classes. 
The assignment comprises multiple questions, each with specific requirements and code implementations.

- Q123.cpp file including the functions and struct for the Questions 1, 2, and 3. It should also 
include a main function calling those functions.

- Circle.cpp and Circle.h files for the Question 4 and CircleDriver.cpp file that contains the main 
function where Circle objects are created and the methods are called.

Q1: Write a C++ function named isOrdered that accepts an integer array and the 
number of elements in the array as a parameter. The function should return 1 if the numbers 
are in non-decreasing order, 2 if the numbers are in non-increasing order, and returns 0 
otherwise. For instance, running the following code in the main function should print 0, 1, 2, and 
0.
int a[] = { 3,7,9,12,4,6 };
int b[] = { 3,7,9,12,12,13 };
int c[] = { 8,8,6,6,4,3 };
int d[] = { 9,7,7,6,2,3 };
cout << isOrdered(a, 6) << endl;
cout << isOrdered(b, 6) << endl;
cout << isOrdered(c, 6) << endl;
cout << isOrdered(d, 6) << endl;

Q2: Write a C++ function named arrange that accepts an integer array, its capacity, and 
a number n as a parameter and returns an integer pointer that stores the address of a new 
array which contains the same array elements in the following order: all elements less than n, n 
(if any), all elements greater than n. Therefore, you should create a new array in the function 
having the same size as the array in the parameter and copy all elements in the requested
order. Note that, you will not sort the elements. For instance, running the following code in the 
main function should print "3 6 4 7 13 12" and "6 4 19 22 11 9 15".
int a[] = { 3,7,13,12,6,4 };
int * b = arrange(a, 6, 7);
for (int i = 0; i < 6; i++) {
cout << *(b+i) << " ";
}
cout << endl;
int c[] = { 19,6,22,11,4,9,15 };
int * d = arrange(c, 7, 7);
for (int j = 0; j < 7; j++) {
cout << *(d+j) << " ";
}
cout << endl;

Q3: Define a struct named Point having int x and y values representing x and y 
coordinates of the point. Write a function named distance that accepts two Points as 
parameters and returns their distance. Distance can be computed as 
√(𝑥1 − 𝑥2)
2 + (𝑦1 − 𝑦2)
2. For instance, running the following code in the main function should 
print "5.65685".
Point p1 = {3,4};
Point p2 = {7,0};
cout << distance(p1,p2) << endl;

Q4 : Write a Circle class having two data values: radius of the circle as integer and 
center of the circle (as a Point). You should use point struct defined in Q3. Include the following 
functions in the class.

    a. Write two constructors. Default constructor should set radius to 10 and center 
    to (0,0) point. Explicit-value constructor should accept three parameters and sets those 
    values as radius and (x,y) coordinates of the center. However, if the radius is less than or 
    equal to 0, the constructor should print an error message and sets radius to 10. 

    b. Write getters and setters for radius and center such as getRadius, setRadius, 
    getCenterX, setCenterX, getCenterY, and setCenterY. If the parameter of setRadius is 
    not positive, do not change the radius and print an error message.

    c. Write two functions getArea and getCircumference that returns the area and 
    circumference of the circle, respectively. 

    d. Write a function named contains that takes a Point as parameter and returns 
    true if the point is inside the circle, false otherwise.

    e. Write a function named intersects that takes a Circle c as parameter and returns 
    true if the circle object intersects with the Circle c, false otherwise. Note that, two 
    circles intersect if the distance between the centers of two circles is not greater than the 
    sum of their radii. You can use the distance function in Q3. 
    
    f. Write a function named display to print the circle objects by displaying all data 
    members. For a circle with radius 3 and center (4,-5), it should display: " radius: 3, 
    center: (4,-5)". The function returns nothing.
    
