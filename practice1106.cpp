//Q.1+2+3+4+5 = 15//
/*#include <iostream>
using namespace std;
int main(){
    int i,n,s;
    n=5;
    s=0;
    for(i = 1; i <= n; i++){
       if(i==n){
        cout<<i<<"=";

       }else{
        cout<<i<<"+";
       }
       s+=i;
    }
    cout<<s;
}*/


//Q.1+2+3+4+5 = 15
/*#include <iostream>
using namespace std;
int main(){
    int i,n,s;
    n=5;
    s=0;
    for(i = 1; i <= n; i++){
      cout<<i<<"+";  
       s+=i;
    }
    cout<<"\b="<<s;
}*/


//Q.1-2+3-4+5 = 3
/*#include<iostream>
using namespace std;
int main(){
    int i,n,s;
    n=5;
    s=0;
    for(i = 1; i <= n; i++){
       if(i%2==0){
        cout<<i<<"+"; s=s-i;

    }else{
        cout<<i<<"-"; s=s+i;
    }
       
    }
    cout<<"\b="<<s;
}*/


//Q.1/2+2/3+3/4+4/5
/*#include <iostream>
using namespace std;
int main(){
    int i,n,s;
    n = 5;
    s = 0;
    for(i = 1;i<n;i++){
                cout<<i<<"/"<<i+1<<"+";
                s=s+(float(i)/float(i+1));
     }
    cout<<"\b ="<<s;
}*/


//Gnerate prime number
/*#include <iostream>
using namespace std;

int main() {
    int a[21];

    for (int i = 0; i <= 20; i++) {
        a[i] = i;
    }

    a[0] = 0;
    a[1] = 0;

    for (int i = 2; i * i <= 20; i++) {
        if (a[i] != 0) {
            for (int j = i * 2; j <= 20; j += i) {
                a[j] = 0;
            }
        }
    }

    cout << "Prime numbers: ";
    for (int i = 2; i <= 20; i++) {
        if (a[i] != 0) {
            cout << a[i] << " ";
        }
    }

    return 0;
}*/

