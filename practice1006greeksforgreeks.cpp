//Q1. Write a Program to Print “Hello World” in the Console Screen.
#include <iostream>
using namespace std;
int main() {
    cout << "Hello World" << endl;
    return 0;
}
//Q2. Write a Program to Read and Print Number Input from the User.
#include <iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter the number";
    cin>>i;
    cout<<i;
}
//Q3. Write a Program to Print the ASCII Value of a Character.
#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII value of " << c << " is: " << int(c) << endl;
    return 0;
} 
//Q4Write a Program to Swap Two Numbers.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 2, b = 3;

    cout << "Before swapping a = " << a << " , b = " << b << endl;

    int temp;
    
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a = " << a << " , b = " << b << endl;
    return 0;
}
//Q5. Write a Program to Find the Size of int, float, double, and char.
#include <iostream>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    return 0;
}
//Q6. Write a Program to Find Compound Interest.
#include <iostream>


//Q7. Write a Program to Check Even or Odd Integers.
#include <iostream>
using namespace std;
int main(){
    int n = 11;
    if (n%2 ==0){
        cout<<"even";

    }else{
        cout<<"odd";
    }
}

//Q8. Write a Program to Find the Largest Among 3 Numbers.
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the numbers";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is the largest number";

    }else{
        if(b<c){
            cout<<c<<"is the largest number";

        }else{
            cout<<b<<"is the largest number";
        }
    }
}
//Q9. Write a Program to Check if a Given Year Is a Leap Year.
#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"enter the year";
    cin>>y;
    if((y%4==0 && y%100!=0) || (y%400==0)){
        cout<<y<<" is a leap year";

    }else{
        cout<<y<<" is not a leap year";
    }
    return 0;
}

//Q10. Write a Program to Check Whether a Number Is Prime or Not.
#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter number: ";
    cin >> n;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "Prime";
            return 0;
        }
    }

    cout << "not Prime";
    return 0;
}
//Q11. Write a Program to Check Whether a Number Is a Palindrome or Not.
#include <iostream>
using namespace std;

int main() {
    int n = 1221, rev = 0, t = n;

    while (t > 0) {
        rev = rev * 10 + t % 10;
        t /= 10;
    }

    if (n == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
//Q12. Write a Program to Make a Simple Calculator.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+ - * /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result = " << a + b;
            break;
        case '-':
            cout << "Result = " << a - b;
            break;
        case '*':
            cout << "Result = " << a * b;
            break;
        case '/':
            cout << "Result = " << a / b;
            break;
        default:
            cout << "Invalid Operator";
    }

    return 0;
}
//Q13.Write a Program to Reverse a Sentence Using Recursion.
#include <bits/stdc++.h>
using namespace std;

 
void reverse(string str) 
{ 
    if(str.size() == 0)
    {
        return;
    }
    reverse(str.substr(1));
    cout << str[0];
} 

 
int main() 
{ 
    string a = "Hello my name"; 
    reverse(a); 
    return 0; 
} 
//Q14. Write a Program for Fibonacci Numbers Using Recursion.



//Q15. Write a Program to Swap Two Numbers Using a Function.
#include <iostream>
using namespace std;
 
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
    int a = 10;
    int b = 22;

    cout << "Before Swapping: " << endl;
    cout << " a: " << a << " b: " << b << endl;

    
    swap(&a, &b);

    cout << "After Swapping: " << endl;
    cout << " a: " << a << " b: " << b << endl;

    return 0;
}
//Q16. Write a Program to Check if Two Arrays Are Equal or Not.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n];

    
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
        cin >> b[i];

 
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            cout << "Not Equal";
            return 0;
        }
    }

    cout << "Equal";
    return 0;
}
//Q17. Write a Program to Calculate the Average of All the Elements Present in an Array.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    int arr[n];

    // Input elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = (float)sum / n;

    cout << "Average = " << avg;

    return 0;
}
//Q18. Write a Program to Find the Maximum and Minimum in an Array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input elements
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int max = arr[0], min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min;

    return 0;
}
//Q19. Write a Program to Search an Element in an Array (Linear Search).
#include <iostream>
using namespace std;

int main() {
    int n, search;
    cin >> n;

    int arr[n];

    // Input elements
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> search;

    // Linear search
    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            cout << "Element found at index " << i;
            return 0;
        }
    }

    cout << "Element not found";
    return 0;
}

//Q20. Write a Program to Print the Array After It Is Right Rotated K Times.

//Q21. Write a Program to Compute the Sum of Diagonals of a Matrix.
//Q22.Write a Program to Rotate the Elements of a Matrix.
//Q23. Write a Program to Find the Length of a String.
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    cout << "Length of the string = " << length;

    return 0;
}
//Q24. Write a Program to Compare Two Strings.
#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    int i = 0, flag = 0;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
        cout << "Both strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
