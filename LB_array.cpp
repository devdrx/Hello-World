#include <iostream>
using namespace std;

//this is function to return the maximum value in an array
int getMax(int Arr[], int size)
{
    int maxi = INT_MIN;
    for(int i =0; i<size; i++)
    {
        maxi = max(maxi, Arr[i]);
    }
    return maxi;
}

//this is a function to return the minimum value in an array

int getMin(int Arr[], int size)
{
    int mini = INT_MAX;
    for(int i =0; i<size; i++)
    {
        mini = min(mini, Arr[i]);
    }
    return mini;
}

//this is a function to print arrays, if i want to only print arrays with length 15 then i would declare w/ int Arr[15] (refer to video)
void printArray(int Arr[], int size)
{
    cout << "Printing the array" << endl;
    for(int i = 0; i<10; i++)
    {
        cout<< Arr[i] << " ";
    }
    cout << endl;
}

/**
 * this is a HUGE disclaimer
 * whenever we are passing an array to a function
 * we are technically giving the memory location of the array element to it
 * that's why any modifs done to the array inside the function also get reflected in the MAIN function AS WELL!!
 * so BEWARE!
 */
 

int main () {
    // intro to arrays
    
    //initializing an array
    int arr[10] = {5,2,24,42,65,96,23,12,245,54};
    cout << arr[0];
    cout << endl;
    
    //initializing all locations with a zero, not possible with other numbers
    int second[10] = {0};
    
    printArray(second, 10);
    
    //size of an array or the number of elements in it = total memory in array ÷ mem size of single integer
    int size = sizeof(second)/sizeof(int);
    cout << size << endl;
    
    //predefined variables INT_MAX and INT_MIN are used in 
    //programs like trying to calculate max/min value in an array
    
}
