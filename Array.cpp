#include <iostream>
using namespace std;
int main()
{
	int numbers[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	cout << "Array: " << endl;
	
	cout << "[";
	for(int i = 0; i < 10; i++){
		cout << numbers[i] << " ";
	}
	cout << "]" << endl;
	
	cout << "Append: " << endl;
	
	int append = 11;
	numbers[10] = append;
	
	cout << "[";
	for(int i = 0; i < 11; i++){
		cout << numbers[i] << " ";
	}
	cout << "]" << endl;
	
	cout << "Insert: " << endl;
	
	for (int i = 11; i >= 1; i--)
               numbers[i] =numbers[i - 1];
          numbers[2 - 1] = 0;
    
	
	cout << "[";
	for(int i = 0; i < 11; i++){
		cout << numbers[i] << " ";
	}
	cout << "]" << endl;
	
	cout << "Reverse" << endl;
	
	cout << "[";
	int reverse;
    for(int i = 0; i<12/2; i++){
        reverse = numbers[i];
        numbers[i] = numbers[12-i-1];
        numbers[12-i-1] = reverse;
    }
    for(int i = 0; i < 12; i++){
        cout << numbers[i] << " ";
	}
	cout << "]" << endl;
	
	cout << "Length" << endl;
	
	cout << "[";
	int Length = sizeof(numbers) / sizeof(int);
	cout << Length;
	cout << "]" << endl;
	
	return 0;
}
