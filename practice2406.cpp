//GCD, LCM, prime checking, divisibility rules
#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
   /* cout<<gcd(12,18)<<endl;
    return 0;*/
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD: "<<gcd(a,b)<<endl;
    return 0;
}
//LCM
#include<iostream>
using namespace std;

int gcd(int a, int b){
    return(b==0)?a:gcd(b,a%b);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"LCM: "<<lcm(a,b)<<endl;
    return 0;
}

//Prime checking
#include<iostream>
using namespace std;
/*int main() {
    int n, i;

    cout << "Enter number: ";
    cin >> n;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << " Prime";
            return 0;
        }
    }

    cout << " Not Prime";
    return 0;
}*/ 
int main() {
int a[21]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0};
int p;
cin>>p;
if(a[p]){
    cout<<"Prime";
}else{
    cout<<"Not Prime";
}
return 0;
}

//reverse
#include<iostream>
using namespace std;
int reverse(int x){
    int rev=0;
    while(x!= 0){
        int digit = x%10;
        x/=10;
        if(rev>INT_MAX/10 || (rev==INT_MAX/10 && digit>7))
        return 0;
        if(rev<INT_MIN/10 || (rev==INT_MIN/10 && digit<-8))
            return 0;
            rev = rev*10 + digit;

        }
       return rev;
    }
    int main(){
        int x;
        cout<<"Enter a number: ";
        cin>>"%d", &x;
        
    }
