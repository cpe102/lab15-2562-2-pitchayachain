#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randData(double *, int, int);

void findRowSum(const double *, double *, int, int);

void showData(double *, int, int);

int main()
{
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr, N, M);
	showData(dPtr, N, M);

	cout << "---------------------------------------------\n";

	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

void randData(double *dPtr, int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			*(dPtr + i * M + j) = rand()%101/100.0;
		}
	}
}
void findRowSum(const double *dPtr, double *result, int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
		*(result+i) += *(dPtr + i * M + j) ;
		}
	}
}
void showData(double *dptr, int N, int M)
{

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << *(dptr + i * M + j) << "\t";
		}
		cout << endl;
	}
	cout << "\n";
}
