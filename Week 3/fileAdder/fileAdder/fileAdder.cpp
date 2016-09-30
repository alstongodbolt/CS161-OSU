/*********************************************
 ** Author: Alston Godbolt
 ** Date:
 ** Description: This program opens a file, reads in the integers of the file
 ** adds them and outputs the sum to a new file
 **********************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputfile;
    ofstream outputfile;
    int numbers;
    string filename;
    int sum;
    
    cout << "Enter file name: " << endl; //directions for user
    cin >> filename; //used to readin file name
    
    inputfile.open(filename.c_str()); //open user directed file
    outputfile.open("sum.txt"); //open output file
    
    if(inputfile) //if statement to either read file or display error message
    {
        while (inputfile >> numbers) //reading in ints from file
        {
            sum += numbers; //adding ints to total
        }
        outputfile << sum << endl; //sending sum to output file
        
        inputfile.close(); //close input file
        outputfile.close(); //close output file
    }
    else
    {
        cout << "could not access file" << endl; //error message if file could not be opened
    }
    
    
    return 0;
}
