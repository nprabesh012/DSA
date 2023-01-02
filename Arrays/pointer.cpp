#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int *y = &x;
    int **z = &y;

    cout<<"---------------------------------------------------"<<endl;
    cout<<"Value of x: x = "<<x<<endl;
    cout<<"Address of x: &x = "<<&x<<endl;
    cout<<"Dereferencing the address of x: *(&x) = "<<*(&x)<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"Value pointed by the pointer y: y = "<<y<<endl;
    cout<<"Address of y: &y = "<<&y<<endl;
    cout<<"Dereferencing the pointer y: *y = "<<*y<<endl;
    cout<<"Dereferencing the address of y: *(&y) = "<<*(&y)<<endl;
    cout<<"Address of the dereferenced value of y: &(*y) = "<<&(*y)<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"Value of double pointer z: z = "<<z<<endl;
    cout<<"Dereferencing the value of z: *z = "<<*z<<endl;
    cout<<"Dereferencing the value of *z: **z = "<<**z<<endl;
    cout<<"Address of z: &z = "<<&z<<endl;
    cout<<"---------------------------------------------------"<<endl;

    
    /*
        output
        ---------------------------------------------------
        Value of x: x = 5
        Address of x: &x = 0x7ffc71896e34
        Dereferencing the address of x: *(&x) = 5
        ---------------------------------------------------
        Value pointed by the pointer y: y = 0x7ffc71896e34
        Address of y: &y = 0x7ffc71896e38
        Dereferencing the pointer y: *y = 5
        Dereferencing the address of y: *(&y) = 0x7ffc71896e34
        Address of the dereferenced value of y: &(*y) = 0x7ffc71896e34
        ---------------------------------------------------
        Value of double pointer z: z = 0x7ffc71896e38
        Dereferencing the value of z: *z = 0x7ffc71896e34
        Dereferencing the value of *z: **z = 5
        Address of z: &z = 0x7ffc71896e40

    */

    return 0;
}