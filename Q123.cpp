// Arbaz Khan (1940280) 

// Code for questions 1,2 and 3 on this file


#include <iostream>
#include <cmath>

using namespace std;


// Function for question 1

int isOrdered(int arr[], int n)
{

    int i;

    for (i = 1; i < n; ++i)
    {
        if (arr[i] < arr[i - 1])    // descending order
        {
            break;
        }
    }

    if (i < n)
    {
        for (i = 1; i < n; ++i)
        {
            if (arr[i] > arr[i - 1])     // if prev test failed ^
            {
                break;
            }
        }

        if (i < n)
        {
            return 0;           // if "i" is less than "n" then print 0
        }

        else
        {
            return 2;              // prints 2 if non increasing order
        }

    }

    else
    {
        return 1;             // prints 1 if non decreasing order
    }

}


// Function for question 2

int* arrange(int arr[], int size, int n)
{
    int less[10];
    int greater[10];

    for (int i = 0; i < size; i++)
    {                                   // initialze both arrays 
        less[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        greater[i] = 0;
    }

    int count = 0, count2 = 0;           // declare 2 counter variables set to 0
    for (int i = 0; i < size; i++)
    {

        if (arr[i] < n)
        {
            less[count] = arr[i];            // if value of "i" less, then insert in less array
            count++;
        }

        else
        {
            greater[count2] = arr[i];         // if value of "i" greater, then insert in greater array
            count2++;
        }
    }

    count = 0;
    for (int i = 0; i < size; i++)              //combine arrays
    {
        if (less[i] != 0)
        {
            arr[i] = less[i];
        }
        else
        {
            arr[i] = greater[count];
            count++;
        }
    }

    return arr;
}


// Struct for question 3

struct Point        //declare struct
{
    int x;
    int y;
};

double distance(Point p1, Point p2)             //calculate distance
{
    int x1 = p1.x;
    int y1 = p1.y;
    int x2 = p2.x;
    int y2 = p2.y;

    double result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return result;

}

int main()                 // Call functions and display output
{

    // question 1
    int a[] = { 3,7,9,12,4,6 };
    int b[] = { 3,7,9,12,12,13 };
    int c[] = { 8,8,6,6,4,3 };
    int d[] = { 9,7,7,6,2,3 };

    cout << "Question 1 Output:" << endl;
    cout << isOrdered(a, 6) << endl;
    cout << isOrdered(b, 6) << endl;
    cout << isOrdered(c, 6) << endl;
    cout << isOrdered(d, 6) << endl;
    cout << "*******************" << endl;

    // question 2
    cout << "Question 2 Output:" << endl;
    int e[] = { 3,7,13,12,6,4 };
    int* f = arrange(e, 6, 7);
    for (int i = 0; i < 6; i++)
    {
        cout << *(f + i) << " ";
    }

    cout << endl;
    int g[] = { 19,6,22,11,4,9,15 };
    int* h = arrange(g, 7, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << *(h + i) << " ";
    }

    cout << endl;
    cout << "*******************" << endl;

    // question 3
    cout << "Question 3 Output" << endl;
    Point p1{ 3,4 };
    Point p2{ 7,0 };
    cout << distance(p1, p2) << endl;
    cout << "*******************" << endl;

}