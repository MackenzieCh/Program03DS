/**Mackenzie Chapman
Program 03
COSC 2436 Data Structures
09/30/2024
This program uses 6 different recursive cases, beginning with the calculation of the factorial value of a positive integer from the user.
The following recursive cases print an array in reverse order, the Fibonacci number at position 7, the sum of an array, 2 to the power of 3, 
and a string in the forward and backward direction.*/

#include <iostream>
#include <string>

using namespace std;

// Function to calculate the factorial of a number using recursion
int factorial(int n) 
{
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) 
    {
        return n;
    }
    else 
    {
        return n * factorial(n - 1);
    }
}

// Function to print elements of an array in reverse order using recursion
void printReverse(int arr[], int size) 
{

    if (size == 0) 
    {
        return;
    }
    else 
    {
        cout << arr[size - 1] << " ";

        printReverse(arr, size - 1);
    }
}

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) 
{

    if (n == 0) 
    {
        return 0;
    }
    else if (n == 1) 
    {
        return 1;
    }
    else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to find the sum of elements in an array using recursion
int arraySum(int arr[], int size) 
{

    if (size == 0) 
    {
        return 0;
    }
    else 
    {
        return arr[size - 1] + arraySum(arr, size - 1);

    }
}

// Function to calculate the power of a number using recursion
int power(int base, int exponent) 
{

    if (exponent == 0)
    {
        return 1;
    }

    else 
    {
        return base * power(base, exponent - 1);
    }
}

// Function to reverse a string using recursion
void reverseString(string& str, int start, int end) 
{

    if (start >= end) 
    {
        return;
    }
    else 
    {
        swap(str[start], str[end]);

        reverseString(str, start + 1, end - 1);

    }
}

int main() 
{
    // Get user input for the number
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Check if the input is non-negative
    if (num < 0)
    {
        cerr << "Error: Please enter a non-negative integer." << endl;
        return 1;
    }

    // Calculate and display the factorial of the input number
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    // Array for demonstrating recursion with arrays
    int arr[] = { 1, 2, 3, 4, 5 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // Display the elements of the array in reverse order using recursion
    cout << "Array elements in reverse order: ";
    printReverse(arr, arrSize);
    cout << endl;

    // Calculate and display the nth Fibonacci number using recursion
    int fibNum = 7; // Change this value for different Fibonacci numbers
    cout << "Fibonacci number at position " << fibNum << " is: " << fibonacci(fibNum) << endl;

    // Find the sum of elements in the array using recursion
    cout << "Sum of array elements: " << arraySum(arr, arrSize) << endl;

    // Calculate and display the power of a number using recursion
    int base = 2;
    int exponent = 3;
    cout << base << " to the power of " << exponent << " is: " << power(base, exponent) << endl;

    // Reverse a string using recursion
    string inputStr = "Recursion";
    cout << "Original string: " << inputStr << endl;
    reverseString(inputStr, 0, inputStr.length() - 1);
    cout << "Reversed string: " << inputStr << endl;

    return 0;
}