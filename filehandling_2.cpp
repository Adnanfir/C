#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

// Function prototype to output a 3x3 matrix
void output_matrix(int arr[3][3], int rows, int cols);

// Function demonstrating binary file write and read
void bin_example(){
    int pixels[3][3];
    // Initialize the 3x3 matrix with values
    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j <3; j++)
        {
            pixels[i][j]=1+i+j;
        }
    }
    output_matrix(pixels,3,3); // Output the initialized matrix
     
    // Writing the matrix to a binary file
    ofstream fout("data.bin", ios::binary); // Open file in binary write mode
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Write each integer to the file as binary data
            fout.write((char *)&pixels[i][j], sizeof(int));
        }
    }
    fout.close(); // Close the output file

    output_matrix(pixels,3,3); // Output the matrix again (unchanged)
    cout<< "Reading again ... " << endl;

    // Reading the matrix back from the binary file
    ifstream fin("data.bin",ios::binary); // Open file in binary read mode

    // Check if file opened successfully
    if (!fin)
    {
        cout<<"Failed to read file ..."<< endl;
    }
    else {
        // Read each integer from the file into the matrix
        for (int  i = 0; i < 3; i++)
        {
            for (int  j = 0; j < 3; j++)
            {
                fin.read((char*)&pixels[i][j],sizeof(int));
            }
        }
        fin.close(); // Close the input file
        output_matrix(pixels,3,3); // Output the matrix read from file
    }
}

// Function to output a 3x3 matrix
void output_matrix(int arr[3][3], int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main (){
    bin_example(); // Call the binary file example function
    return 0;
}
