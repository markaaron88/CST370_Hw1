/*
 * Title: hw1_1.cpp
 * Abstract: This program reads an input file name from a user.After reading the numbers from the file, the program displays the closest distance between two numbers among the numbers.
 * Author: Mark Mariscal
 * ID: 7/19/1988
 * Date: 01/3/2020
 */


#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ifstream myFile;
    string fileName;
  
  	int *array; //pointer with array
    int num;
  	int count; // gives us the count of the array length 
  
  	int temp, num1, num2; // temp number and are distance numbers  we store numbers in our array
  	int num3,num4 = 0;
  	int min = 100; // min distance so a placeholder
    cout << "Enter input file name: "; //asks input
    cin >> fileName; // recieves input


    myFile.open(fileName.c_str()); //opens the file

    cout<< fileName + " is opened" << endl; //tells user file is open
  	cout << "Reading count into array" <<endl; //reads count into array
    if (myFile >> num) // if there is an input then count reads first line
    {
      count = num;
    }
  
  	array = new int [count]; //array with count , create size of array
  	count = 0;
    while(myFile >> num) //start after first line
    {
        cout << "Reading data from file. \n";
        array[count] = num;//adds number to array
				cout<< num << endl; // Prints numbers.
      	count++;
	    
    }
    myFile.close();//closes file 
    cout << "logic in array" << endl;
   //This is how we are checking for the distance:
  	for (int i = 0; i < count - 1; i++){ //is going from 0 to end - 1 in the array
      for (int j = i + 1; j < count; j++){ //is going from 1 to the end of the array.
        	temp = array[i] - array[j]; // this is making a temp int of the differences of the array
            temp = abs(temp);//makes abs value of temp value
        	
        	if( temp < min && temp > 0){ // if the temp value is less then 100 and more than 0
            min = temp; // min becomes the temp value 
            num1 = array[i];//num1 becomes the value i in array
            num2 = array[j];//num2 becomes the value j in array
          }
    		if( temp == min ){ 
            min = temp; // min becomes the temp value 
            num3 = array[i];//num3 becomes the value i in array
            num4 = array[j];//num4 becomes the value j in array
          }

      }
    
    }
  
  	//print files to screen
  	cout << "Min distance: " << min << endl;
  	cout << "Two numbers for min distance: " << num1 << " and " << num2 << endl;

  	cout << "Two numbers for min distance: " << num3 << " and " << num4;
  	delete[] array; //deletes arrray
    cout << "\n is closed";

    return 0;
}
