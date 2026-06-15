#include<iostream>
using namespace std;

class Student{
    public:
    int Cust_id;
    int Balance;
    int account_no;

    void show_details(){
        cout<<"Customer ID: "<<Cust_id<<endl;
        cout<<"Balance: "<<Balance<<endl;
        cout<<"Account Number: "<<account_no<<endl;  
    }
    void withdraw(int amount){
        if(amount>Balance){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
            Balance-=amount;
            cout<<"Amount Withdrawn: "<<amount<<endl;
            cout<<"Remaining Balance: "<<Balance<<endl;
        }
    }

    void Check_Balance(){
        cout<<"Current Balance: "<<Balance<<endl;
    }
};

int main(){
    Student s1;
    s1.Cust_id=12345;
    s1.Balance=1000;
    s1.account_no=987654321;

    s1.show_details();
    s1.withdraw(200);
    s1.Check_Balance();

    return 0;
}