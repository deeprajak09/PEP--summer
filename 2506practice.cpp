//chapter 2 (Control Instructions)
//Q2.1point out the error , if any , in the following program.
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    switch(i){
        cout<<"HEllo";
        case 1:
        cout<<"\n individualists unite!";
        break;
        case 2:
        cout<<"\n Monday is the root of all wealth";
        break;

    }

}

//Q2.2 Point out the error, if any , in the for loop.
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    for(;;){
        cout << i ;
        i++;
        if(i>=10)
        break;
    }
}

//Q2.3 Point out the error, if any , in the for loop.
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    while(1){
        cout << i;
        i++;
        if(i>10)
        break;
    }
}
//Q2.4 Point out hte error, if any, in the while loop.
#include<iostream>
using namespace std;

int main(){
    int i =  1;
    while(i<=5){
        cout <<i;
        if(i>2)
        goto here;
    }
}
fun(){
    here:
    cout<<"\n if it works, Dont's fix it.";
    
}
//Q2.5 Point out the error, if any, in the following program.
#include<iostream>
using namespace std;

int main(){
    int i =4,j = 2;
    switch (i){
        case 1:
        cout<<"\n To err is human, to forgive is against company policy.";
        break;
        case j:
        cout<<"\n if you have nothing to do, don't do  it here.";
        break;

    }
}
//error
//Q2.6 Point out the error, if any , in the following program.
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    switch(i){
        case 1:
        cout<<"\n Radioactive cats have 18 half-lives.";
        break;
        case 1*2+4:
        cout<<"\nBottle for rent - inquire within.";
        break;
    }
}

//Q2.7 Point out the error, if any , in the following program.
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    switch(a){

    }
    cout<<"Programmers never die. They just lost in the processing";
}

//Q2.8 Point out the error, if any in the following program.
#include<iostream>
using namespace std;

main(){
    int i = 1;
    switch (i){
        cout<<"Hello";
        case 1:
        cout<<"\nIndividualists unite!";
        break;
        case 2:
        cout<<"\nMonday is the root of all wealth";
        break;
    }
}
//2.9 Rewrite the following set of statements using conditional operators.
/*int a = 1,b;
if(a>10)
b =20;*/
int a = 1,b = 0;
int b=(a>10) ? 20:b;

//2.10 Point out the error, if any in the following program.
#include<iostream>
using namespace std;

int main(){
    int a = 10,b;
    a>=5?b =100:b=200;
    cout<<"\n"<<b;
}
//2.11what would be the output of the following program?
#include<iostream>
using namespace std;

int main(){
    char str[]= "part-time misicians are semiconductors";
    int a =5;
    cout
}