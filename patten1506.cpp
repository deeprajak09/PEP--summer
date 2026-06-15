//Q1.
#include <iostream>
using namespace std;

int main(){
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//Q2.
#include <iostream>
using namespace std;

int main(){
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
//Q3.
#include <iostream>
using namespace std;

int main(){
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
//Q4.
#include <iostream>
using namespace std;

int main(){
    for(int i = 5;i>=1;i--){
        for(int j = 1;j<=5;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
//Q5.
#include <iostream>
using namespace std;

int main(){
    for(int i = 5;i>=1;i--){
        for(int j = 5;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
//Q6.
#include <iostream>
using namespace std;

int main(){
    int n = 5, k = 1;
    for(int i  = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
//Q7.
#include <iostream>
using namespace std;

int main(){
    int n =5, m = 1;
    for(int i  = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<m<<" ";
            m+=2;
        }
        cout<<endl;
    }
    return 0;
}
//Q8.
#include <iostream>
using namespace std;

int main(){
    int n =5, m = 2;
    for(int i  = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<m<<" ";
            m+=2;
        }
        cout<<endl;
    }
    return 0;
}
//Q9.
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<(i *j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q10.
#include <iostream>
using namespace std;

int main(){
    
    for(int i  = 1;i<=5;i++){
        for(int j=1;j<=3;j++){
            cout<<j<<" "<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q11.
#include <iostream>
using namespace std;

int main(){
    
    for(int i  = 1;i<=5;i++){
        for(int j=1;j<=3;j++){
            cout<<i<<" "<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q12.
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int x;
    for(int i = 1;i<= n; i++){
       x = i;
        for(int j = 1;j<= n; j++){
            cout<<x<< " ";
            x += n;
        }
        cout<<endl;
    }
     return 0;
}
//Q13.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int x,y;
    for(int i = 1;i<= n; i++){
     x = i;
     y = n - i +1;
     for(int j = 1;j<= n; j++){
        if(j%2 == 1){
            cout<<x<<" ";

        }else{
            cout<<y<<" ";
        }
        x = x +n;
        y = y + n;
    }
    cout<< endl;
    }
    return 0;
}

//Q14.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int x;
    for(int i = 1; i<=n;i++){
        x = n-i+1;
        for(int j = 1;j<= n;j++){
            cout<<x<<" ";
            x = x +n;
        }
        cout<<endl;
    }
    return 0;
}
//Q15.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int x,y;
    for(int i = 1;i<= n; i++){
     x = i;
     y = n - i +1;
     for(int j = 1;j<= n; j++){
        if(j%2 == 0){
            cout<<x<<" ";

        }else{
            cout<<y<<" ";
        }
        x = x +n;
        y = y + n;
    }
    cout<< endl;
    }
    return 0;
}
//Q16.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cout<<(i + j -1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q17.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cout<<(2*(i +j))-3<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q18.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cout<<((i +j)%2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q19.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<n;j++){
            cout<<((i +j)%2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Q20.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cout<<((i * j)%2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}