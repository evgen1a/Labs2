
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
 
void ShowAndPrint(int **ptrarray, int number_rows, int number_columns)
{
	 for (int counter_rows = 0; counter_rows < number_rows; counter_rows++)
    {
        for (int counter_columns = 0; counter_columns < number_columns; counter_columns++)
        {
            ptrarray[counter_rows][counter_columns] = rand() % 100 - rand() % 100; 
            cout << setw(3) << ptrarray[counter_rows][counter_columns] << "  "; 
        }
        cout << endl;
    }
    cout << endl;
}

void Sum(    int **ptrarray, int number_rows, int number_columns)
 )
{ 

for (int counter_columns = 0; counter_columns < number_columns; counter_columns++)
    {
        ptrsum[counter_columns] = 0; 
        for (int counter_rows = 0; counter_rows < number_rows; counter_rows++)
            if ( (ptrarray[counter_rows][counter_columns] < 0) && ((ptrarray[counter_rows][counter_columns] % 2 != 0)) )
                ptrsum[counter_columns] += abs(ptrarray[counter_rows][counter_columns]); 
    }
 

    for ( int counter = 0; counter < number_columns; counter++)
        cout << setw(3) << ptrsum[counter] << "  "; 
    cout << endl << endl;
 

}
int main(int argc, char* argv[])
{
srand(time(NULL));
 setlocale(LC_ALL, "rus");
    int number_rows,
        number_columns; 
    cout << "Eiee?anoai no?ie: ";
    cin >> number_rows;
    cout << "Eiee?anoai noieaoia: ";
    cin >> number_columns;
 
   
    int **ptrarray = new int* [number_rows];
    for (int count = 0; count < number_rows; count++)
        ptrarray[count] = new int [number_columns];
 
	ShowAndPrint(ptrarray, number_rows, number_columns);
   
int *ptrsum = new int [number_columns]; 
    

Sum(ptrsum, number_rows, number_columns);
   


    int *ptrindex = new int [number_columns]; 
    int min = 1000, 
        index_column; 
 
   
    for (int counter_value = 0; counter_value < number_columns; counter_value++)
    {
        for (int counter = 0; counter < number_columns; counter++)
        {
            if (min > ptrsum[counter] && ptrsum[counter] != -1)
            {
                min = ptrsum[counter]; 
                index_column = counter; 
            }
        }
    ptrindex[counter_value] = index_column; 
    ptrsum[index_column] = -1; 
    min = 1000; 
    }
 
    delete [] ptrsum; 
 
    
    int **ptrarray_relocation = new int* [number_rows];
    for (int count = 0; count < number_rows; count++)
        ptrarray_relocation[count] = new int [number_columns];
 
   
    for (int counter_columns = 0; counter_columns < number_columns; counter_columns++)
        for (int counter_rows = 0; counter_rows < number_rows; counter_rows++)
                ptrarray_relocation[counter_rows][counter_columns] = ptrarray[counter_rows][ptrindex[counter_columns]]; 
 
    
    cout << "\nAuoiaiay iao?eoa:\n";

ShowAndPrint( ptrarray_relocation, number_rows, number_columns);
   
    cout << endl;
 
    
    for (int count = 0; count < number_rows; count++)
        delete []ptrarray[count];
 
    delete [] ptrindex; 
 
 
    for (int count = 0; count < number_rows; count++)
        delete []ptrarray_relocation[count];

}
