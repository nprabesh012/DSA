#include <iostream>
using namespace std;

void print(int arr[],int n){
    cout<<"[";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<", ";
    }
    cout<<arr[n-1]<<"]"<<endl;
}
void print(float arr[],int n){
    cout<<"[";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<", ";
    }
    cout<<arr[n-1]<<"]"<<endl;
}

int main(){
    const int size = 10;

    // declaring static arrays
    int dots[3] = {1,2,-3}; //int dots[] = {1,2,-3};
    print(dots,3); //[1,2,-3]

    int dashes[5] = {1, 2, 3}; 
    print(dashes,5); //[1,2,3,0,0]

    // static array initialization
    int staticArray[size] = {1,2,3,4,5,6,7,8,9,10};
    float staticArrayTwo[] = {2.5,3.5,4.5,6.5,7.5}; // compiler figures out the length
    
    print(staticArray,size);
    print(staticArrayTwo,sizeof(staticArrayTwo)/sizeof(float));

    // dynamic array initialization
    int *dynamicArray = new int[size]; // declaring dynamic arrays

    for(int i=0;i<size;i++){
        dynamicArray[i]=i;
    }

    print(dynamicArray,size);

    delete[] dynamicArray;
    return 0;
}


