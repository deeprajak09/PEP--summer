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
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;          // right rotate by 2
    int temp[5];

    
    int j = 0;
    for (int i = n - k; i < n; i++) {
        temp[j] = arr[i];
        j++;
    }
 
    for (int i = 0; i < n - k; i++) {
        temp[j] = arr[i];
        j++;
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

   
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

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

//Q25. Write a Program to Check if the String Is Palindrome.

#include <iostream>
#include <algorithm>
using namespace std;

void isPalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev)
        cout << "\"" << str
      	<< "\" is palindrome." << endl;
    else
        cout << "\"" << str
      	<< "\" is NOT palindrome." << endl;
}

int main() {
    
	isPalindrome("ABCDCBA");
  	isPalindrome("ABCD");
    return 0;
}

//Q26. Write a Program to Add 2 Binary Strings.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinary(string a, string b) {
    string result;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result.push_back((sum % 2) + '0');
        carry = sum / 2;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string bin1, bin2;

    cout << "Enter first binary string: ";
    cin >> bin1;

    cout << "Enter second binary string: ";
    cin >> bin2;

    cout << "Sum = " << addBinary(bin1, bin2) << endl;

    return 0;
}

//Q27. Write a Program to Convert String to int.
#include <iostream>
#include <string>
using namespace std;

int stringToInt(string str) {
    int num = 0;
    for (int i = 0; i < str.length(); i++) {
        num = num * 10 + (str[i] - '0');
    }
    return num;
}

int main() {
    string str;
    cout << "Enter a string representing an integer: ";
    cin >> str;
    cout << "Integer value: " << stringToInt(str) << endl;
    return 0;
}


//Q28. Write a Program to Split a String into a Number of Sub-Strings.
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string str = "Hello,World,How,Are,You";
    vector<string> substrings;
    stringstream ss(str);
    string token;

    while (getline(ss, token, ',')) {
        substrings.push_back(token);
    }

    for (const string& s : substrings) {
        cout << s << endl;
    }

    return 0;
}

//Q29. Write a Program to Print a Simple Full Pyramid Pattern.

#include <iostream>
using namespace std;

int main() {
    int n = 5;  

    for (int i = 1; i <= n; i++) {
        
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//Q30. Write a Program That Receives a Number and Prints It Out in Large Size.

// C++ program to print a number in large size 
#include<bits/stdc++.h>
using namespace std;
#define H 7

// one extra room in the char array is required for storing '\0' 
#define W 8

void hashprint (string num)
{
  int i, j, k;

  // declaring char 2D arrays and initializing 
  // with hash-printed digits 
  char zero[H][W] = 
  { " ##### ",    // H=0 
    " #   # ",            // H=1 
    " #   # ",            // H=2 
    " #   # ",            // H=3 
    " #   # ",            // H=4 
    " #   # ",            // H=5 
    " ##### "
  },                // H=6 
    one[H][W] = {
   "    #  ",
    "   ##  ",
    "    #  ",
    "    #  ",
    "    #  ",
    "    #  ",
    " ##### "
  }, two[H][W] = 
  {" ##### ",
    "     # ",
    "     # ",
    " ##### ",
    " #     ",
    " #     ",
    " ##### "
  }, three[H][W] = 
  {" ##### ",
    "     # ",
    "     # ",
    " ##### ",
    "     # ",
    "     # ",
    " ##### "
  }, four[H][W] = 
  {" #     ",
    " #  #  ",
    " #  #  ",
    " ##### ",
    "     # ",
    "     # ",
    "     # "
  }, five[H][W] = 
  {" ##### ",
    " #     ",
    " #     ",
    " ##### ",
    "     # ",
    "     # ",
    " ##### "
  }, six[H][W] = 
  { " ##### ",
    " #     ",
    " #     ",
    " ##### ",
    " #   # ",
    " #   # ",
    " ##### "
  }, seven[H][W] = 
  {" ##### ",
    "     # ",
    "     # ",
    "   ### ",
    "     # ",
    "     # ",
    "     # "
  }, eight[H][W] = 
  {" ##### ",
    " #   # ",
    " #   # ",
    " ##### ",
    " #   # ",
    " #   # ",
    " ##### "
  }, nine[H][W] = 
  {" ##### ",
    " #   # ",
    " #   # ",
    " ##### ",
    "     # ",
    "     # ",
    "     # "
  };


  if (num.length () > 10)
    cout << "\nYou must enter a number up to 10 digits.\nTry again!\n";

  else
    {
      cout << "\n";
      k = 1;
      j = 0;             
      while (k <= 7)        
    {
      for (i = 0; i < num.length (); i++)     
        {
          if (num[i] == '0')
        cout << zero[j];
          else if (num[i] == '1')
        cout << one[j];
          else if (num[i] == '2')
        cout << two[j];
          else if (num[i] == '3')
        cout << three[j];
          else if (num[i] == '4')
        cout << four[j];
          else if (num[i] == '5')
        cout << five[j];
          else if (num[i] == '6')
        cout << six[j];
          else if (num[i] == '7')
        cout << seven[j];
          else if (num[i] == '8')
        cout << eight[j];
          else if (num[i] == '9')
        cout << nine[j];
        }
      cout << "\n";
      k++;
      j++;
    }
    }
}

 
int main ()
{
  

  hashprint ("0194");

  return 0;
}

//Q31. Write a Program to Print Pascal’s Triangle.

#include <iostream>
using namespace std;

int main() {
    int n = 5;  

    for (int line = 0; line < n; line++) {
        int C = 1; 
        for (int i = 0; i <= line; i++) {
            cout << C << " ";
            C = C * (line - i) / (i + 1); //  
        }
        cout << endl;
    }

    return 0;
}

//Q32. Write a Program for Binary to Decimal Conversion.

#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n) {
    int decimalNumber = 0, i = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    return decimalNumber;
}

//write a program to display the following ouput using a single cout statement
#include <iostream>
using namespace std;

int main(){
   int math = 90;
   int physics = 77;
   int chemistry =69;
   cout<<"Math: "<<math<<"\nPhysics: "<<physics<<"\nChemistry: "<<chemistry;
   return 0; 
}
//write a program to read two numbers from the keyboard and display the larger value on the screen.

#include <iostream>
using namespace std;

int main(){
    int n, a, b;
    cout<<"enter the two numbers";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is the largest number";
    }else{
        cout<<b<<" is the largest number";
    }
    return 0;
}

//write a progra that inputs a character from keyboard and displays its corresponding ASCII value on the screen.
#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"enter the character";
    cin>>c;
    cout<<"ASCII value of "<<c<<" is "<<int(c);
    return 0;
}
//
#include <iostream>
using namespace std;

int main(){
    int x, a,b, c;
    cout<<"enter the three numbers";
    cin>>a>>b>>c;
    x = a/b-c;
    cout<<"the value of x is "<<x;
    return 0;
}
