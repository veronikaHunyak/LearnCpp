#include <iostream>

using namespace std;

void HelloMessage() {
	cout << "Hello" << endl;
}

void Goodbye() {
	cout << "Goodbye" << endl;
}

void Message(const string param){
	cout << param << endl;
}

void Sort(int *numbers, int size) { for (int n= 0; n < size; n++) {
		int nBestIndex = n;
		for (int i = n + 1; i < size; i++){
			if (numbers[i] < numbers[nBestIndex]) nBestIndex = i;
		}
		swap(numbers[n], numbers[nBestIndex]);
	}
	for (int i=0; i < size; i++)
		cout << numbers[i] << endl;
}

int main() {
	void(*message)();
	message=HelloMessage;
	message();
	message=Goodbye;
	message();

	void(*newMessage)(string);
	newMessage=Message;
	newMessage("Bunny");

	int numbers[9] ={ 3, 7, 9, 5, 6, 1, 8, 2, 4 };
	Sort(numbers,9);

}
