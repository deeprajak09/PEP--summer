//write a program to the avg of number
/*#include <iostream>
using namespace std;

int main() {
int a = 2;
int b = 4;

int c = (a + b) /2;
cout << c << endl;
}*/
//gratest number
#include <iostream>
using namespace std;

int main () {
    int a = 2;
    int b = 4;
      
    if (a > b) {
        cout<<a  ;
    }
    else {
        cout << b ;
    }
}
//2. avg of 2number
//3. avg of 3 number
//4.swap 2 number
//5.convert temperature from  fahrenheit  to celsius
//6. area of circle
//7.area of rectangle
//8.

//2. avg of 2number
#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 4;
    double avg = (a + b) / 2.0;
    cout << "Average: " << avg << endl;
}

//3. avg of 3 number
#include <iostream> 
using namespace std;

int main() {
    int a = 2;
    int b = 4;
    int c = 6;
    double avg = (a + b + c) / 3.0;
    cout << "Average: " << avg << endl;
}

//4.swap 2 number
#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 4;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    
    // Swap
    int temp = a;
    a = b;
    b = temp;
    
    cout << "After swap: a = " << a << ", b = " << b << endl;
}

//5.convert temperature from  fahrenheit  to celsius
#include <iostream>
using namespace std;

//6. area of circle
#include <iostream>
using namespace std;

int main() {
    double radius = 5.0;
    double area = 3.14159 * radius * radius;
    cout << "Area of the circle: " << area << endl;
}
//7.area of rectangle
#include <iostream>
using namespace std;

int main() {
    double length = 5.0;
    double width = 3.0;
    double area = length * width;
    cout << "Area of the rectangle: " << area << endl;
}

