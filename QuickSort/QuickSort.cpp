#include <iostream>
using namespace std;

//array of integers to hold values
int arr[20];
int cmp_count = 0; //Number comparation
int mov_count = 0; //Number of daata movements
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;


}


int main()
{
	
}

