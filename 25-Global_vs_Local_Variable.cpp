using namespace std;
#include<iostream>

int x=10; // Global variable

int main(){
    int x=20; // Local variable
    cout << x << endl; // 20
    cout << ::x << endl; // 10 we use ::(scope resolution) to access global variable
    return 0;
}