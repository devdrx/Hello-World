#include <iostream>
using namespace std;

void printArray(int Arr[], int size)
{
    cout << "Printing the array" << endl;
    for(int i = 0; i<size; i++)
    {
        cout<< Arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int Arr[], int size) {
    
    for(int i = 0; i<size; i+=2){
        if(i+1 < size) {
            swap(Arr[i], Arr[i+1]);
        }
    }
}

int main(){
    
    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11,33,9,76, 43};
    swapAlternate(even, 8);
    swapAlternate(odd, 5);
    
    printArray(even,8);
    printArray(odd,5);
    return 0;
}
