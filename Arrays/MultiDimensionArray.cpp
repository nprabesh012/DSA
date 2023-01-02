#include <iostream>
using namespace std;


int main(){

    const int row = 3, col = 3;

    // static array initialization
    int staticArray[row][col] = {{1,2},{3,4},{6,5}};

    cout<<"[ ";
    for(int i=0;i<row;i++){
        cout<<"[";
        for(int j=0;j<col-1;j++){
            cout<<staticArray[i][j]<<", ";
        }
        cout<<staticArray[i][col-1]<<"] ";
    }
    cout<<"]"<<endl;

    

    
    // dynamic array - 2D
    int **dynamicArr = new int *[row];
    for(int i=0;i<row;i++){
        dynamicArr[i] = new int[col];
    }

    int k=0;
    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            dynamicArr[i][j] = ++k;
        }
    }

    cout<<"Dynamic two-Dimensional array: "<<endl;
    cout<<"[ ";
    for(int i=0;i<row;i++){
        cout<<"[ ";
        for (int j=0;j<col;j++){
            cout<<dynamicArr[i][j]<<" ";
        }
        cout<<"] ";
    }
    cout<<"]"<<endl;


    return 0;
}