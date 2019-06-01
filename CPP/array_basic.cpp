//Basic array code
//This code inputs an array and prints reverse of the array


#include <iostream>

using namespace std;


int main() {
    int size;
    int arr[1000];
    cin>>size;					//accepting size of array
    for(int i = 0;i<size;i++)				//running the loop
    {
        cin>>arr[i];					//accepting the array
    }
    for(int i = size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";				//printing the reverse of the array entered
    }
    return 0;
}
