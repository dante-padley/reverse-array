#include <iostream>

using namespace std;

int main(){
//initialize variable for array size
int size;
//collect array size from user
cout << "How many items will be in the array?\n";
cin >> size;
//initialize array with size
int myArray [size];
cout << "Enter the items one at a time.\n";
//typical while loop to grab elements from user.
int i = 0;
while(i < size){
cin >> myArray[i];
i++;
}
//need to implement reverseArray function to reverse the array and print it out.

return 0;
}
