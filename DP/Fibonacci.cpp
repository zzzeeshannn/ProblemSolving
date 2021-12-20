//
// Created by Zeeshan Shaikh on 12/20/21.
//

// This program is used to generate the nth fibonacci number

#include <iostream>
#include <vector>

using namespace std;

void fibonacci(int n){
    // This function generates the nth fibonacci number
    // Variable declarations
    long int fibonacci[n];

    // Base cases
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    // Loop till n
    for (int i = 2; i <= n; i++) {
        // Subproblem
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    // Print the nth fibonacci number
    cout << "The nth fibonacci number is: " << fibonacci[n-1];
}

int main(){
    // Main entry function

    // Variable declarations here
    int n;

    // Get the value of "n" from the user
    cout << "Enter the value of n: ";
    cin >> n;

    // Call the function to generate the nth Fibonacci Number
    fibonacci(n);
}
