/*
 * Title: hw1_1.cpp
 * Abstract: .
 * Author: Mark Mariscal
 * ID: 7/19/1988
 * Date: 01/3/2020
 */


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream myFile;
    string fileName;
  
  	int *array;
    int num;
  	int count;
  
  	int temp, num1, num2;
  	int min = 100;
    cout << "Enter input file name: ";
    cin >> fileName;


    myFile.open(fileName.c_str());

    cout<< fileName + " is opened" << endl;
  	cout << "Reading count into array" <<endl;
    if (myFile >> num)
    {
      count = num;
    }
  
  	array = new int [count];
    count = 0;
    while(myFile >> num) 
    {
        cout << "Reading data from file. \n";
        array[count] = num;
				cout<< num << endl; // Prints numbers.
	      count++;
    }
    myFile.close();
		cout << "logic in array" << endl;
  	for (int i = 0; i < count - 1; i++){ //is going from 0 to end - 1 in the array
      for (int j = i + 1; j < count; j++){ //is going from 1 to the end of the array.
        	temp = array[i] - array[j]; // this is making a temp int of the differences of the array
        	if(temp < 0){
                temp *= -1;  //storing that value into an absolute temp value
            } 
        	if( temp < min && temp > 0){ // if the temp value is less then 100
            min = temp; // min becomes the temp value 
            num1 = array[i];//num1 becomes the value i in array
            num2 = array[j];//num2 becomes the value j in array
          }
      }
    }
  
  	cout << "Min distance: " << min << endl;
  	cout << "Two numbers for min distance: " << num1 << " and " << num2;
  	delete[] array;
    cout << "\n is closed";

    return 0;
}
