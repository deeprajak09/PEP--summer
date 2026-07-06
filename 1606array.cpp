#include<iostream>
using namespace std;

int main(){
    int a[5];
    a[0]=30;
    a[1]=70;
    a[5]=80;
    cout<<a[2];
    cout<<'\n'<<a[5];

}

#include <iostream>
using namespace std;
// linear search function
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = linearSearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

