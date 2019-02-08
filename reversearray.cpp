#include <iostream>

using namespace std;

//global variable size


void reverseArray(int myArray[], int fsize){
  int * p;
  p = myArray;

  int bArray [fsize];
  int * b;
  b = bArray;

  int k = fsize - 1;
  for(int i=0; i < fsize; i++){
    *(b+i) = *(p+k);
    k--;
  }
  for(int i=0; i < fsize; i++){
    *(p+i) = *(b+i);
  }

}
int main(){

  int size;
  //collect array size from user
  cout << "How many items will be in the array?\n";
  cin >> size;
  //initialize array with size
  int myArray [size];
  cout << "Enter the items one at a time.\n";
  //typical while loop to grab elements from user.
  for(int i=0; i < size; i++){
    cin >> myArray[i];
  }
  //need to implement reverseArray function to reverse the array and print it out.
  reverseArray(myArray, size);

  cout << "Here is the array after reversing the elements in place.\n";
  for(int i=0; i < size; i++){
    cout << myArray[i] << endl;

  }
  return 0;
}
