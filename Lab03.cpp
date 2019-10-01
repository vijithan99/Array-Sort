//============================================================================
// Name        : Lab03.cpp
// Author      : Vijithan Mangaleswaran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>
#include <cstdlib>
#include "Lab03.h"

using namespace std;

//Part 2

void PtrArthimetic (int r, int* array){
int i, j, placehold;

for(i = 0; i < r; i++){
for (j = i + 1; j < r; j++){
   if (*(array + j) < *(array + i)){

     placehold = *(array + i);
     *(array + i) = *(array +j);
     *(array + j) = placehold;
   }
}
}

for (i = 0; i < r; i++)
cout << *(array + i) << " ";
}

int main (int argc, char* argv[]){

int n;
int s[10];

    cout << "Enter the array (10 integers): ";
for (n=0; n<argc; n++) {
   s[n] =  atof(argv[n]);
}

    cout << "The numbers in ascending order are:" << endl;

PtrArthimetic (argc, s);

return (0);
}











/*

using namespace std;

int main()
{
    int salary[20];
    int* ptr;
    int i;

    ptr = salary;

    for (i=0;i<20;++i) {
        cout <<"Enter Salary: ";
        cin >> *(ptr + i);

    }

    for (i=0;i<20;++i){
    *(ptr + i)= *(ptr + i)+ *(ptr + i)/(i+1);
     cout << *(ptr + i) << " ";
    }

    return 0;
}

*/

