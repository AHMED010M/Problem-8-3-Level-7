#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int RandomNumber(int From, int To)
{
	
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillaMatrix3x3(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j]= RandomNumber(1,10);

		}
	
	}


}

void MultiplyTwoMatrix3x3(int arr1[3][3],int arr2[3][3],int arr3[3][3], int Rows, int Cols)
{
	

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr3[i][j] = arr1[i][j] * arr2[i][j];

		}

	}



}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);

		}
		cout << "\n";
	}

}



int main()
{


	int arr1[3][3];
	int arr2[3][3];		
	int arr3[3][3];		

	FillaMatrix3x3(arr1, 3, 3);
	FillaMatrix3x3(arr2, 3, 3);

	cout << "Matrix 1 : " << endl;
	PrintMatrix(arr1, 3, 3);

	cout << "\nMatrix 2 : " << endl;
	PrintMatrix(arr2, 3, 3);


	MultiplyTwoMatrix3x3(arr1, arr2, arr3, 3, 3);

	cout << "\nResult : " << endl;
	PrintMatrix(arr3, 3, 3);

}

