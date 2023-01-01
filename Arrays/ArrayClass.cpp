#include <iostream>
using namespace std;

class Array{
    private:
        int length; // size of the array
        int *numbers; // array
        int num_elements; // number of items/elements
    public:
        // Constructor
        Array(int size = 0){
            numbers = new int[size];
            length = size;
            num_elements = 0;
        }

        // for inserting a new element
        void insert(int item){
            if(num_elements<length){
                numbers[num_elements++] = item;
            }
            else{
                resize();
                numbers[num_elements++] = item;
            }
        }
        void resize(){
            // size is doubled
            int *tempArr = new int[length*2];
            length *= 2;
            // copying old array values to new array
            for(int i=0;i<num_elements;i++){
                tempArr[i]=numbers[i];
            }
            // deleting the old allocated space
            delete[] numbers;
            // pointing to the new allocated memory
            numbers = tempArr;
        }
        int currentLength(){
            return num_elements;
        }
        void print(){
            cout<<"[";
            for (int i = 0; i < num_elements-1; i++){
                cout<<numbers[i]<<", ";
            }
            cout<<numbers[num_elements-1]<<"]"<<endl;

        }
        void removeAt(int index){
            // Validate the index
            if (index < 0 || index >=num_elements){
                throw range_error("Index out of range");
            }
            // Shift the items to the left to fill the hole
            for (int i = index; i < num_elements; i++){
                numbers[i] = numbers[i+1];
            }
            num_elements--;
        }
        int indexOf(int item){
            for (int i = 0; i<num_elements; i++){
                if (numbers[i]==item){
                    return i; 
                }
            }
            return -1;
        }
        int max(){
            int max = numbers[0];
            for(int i=1;i<num_elements;i++){
                if(max<numbers[i]){
                    max = numbers[i];
                }
            }
            return max;
        }
        int min(){
            int min = numbers[0];
            for(int i=1;i<num_elements;i++){
                if(min>numbers[i]){
                    min = numbers[i];
                }
            }
            return min;
        }

        Array* reverse(){

            Array *tempArr = new Array(length);
            for(int i=0;i<length;i++){
                tempArr->insert(numbers[(length-1)-i]);
            }
            return tempArr;
        }
        ~Array(){
            delete[] numbers;
        }
};


int main(){
    Array *numbers = new Array(5);

    numbers->insert(10);
    numbers->insert(20);
    numbers->insert(30);

    numbers->insert(40);
    numbers->insert(50);
    // cout<<numbers->max()<<endl;
    // cout<<numbers->min()<<endl;
    numbers->print(); //(*numbers).print();
    Array *reversed = numbers->reverse();
    reversed->print();
    return 0;
}