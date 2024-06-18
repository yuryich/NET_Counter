#include <iostream>
#include <string>
using namespace std;

class Counter
{
public:
	Counter();
	int counter;

	int add(int counter) {
		return(this->counter++);
	}

	int subtract(int counter) {
		return(this->counter--);
	}

	int equals(int counter) {
		return(this->counter);
	}
	void equate(int counter){
		this->counter = counter;
	}
};

Counter::Counter()
{
	counter = 0;
}



int main()
{
	setlocale(LC_ALL, "rus");
	string s;
	char x = '0';
	int n;
	Counter example;
	cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	cin >> s;
	cout << s;
	if (s == "yes") {
		cout << "Введите начальное значение счётчика: ";
		cin >> n;
		example.equate(n);
	}
	while (x != 'x') {
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> x;
		if (x == '+') {
			example.add(example.counter);
		}
		else if (x == '-') {
			example.subtract(example.counter);
		}
		else if (x == '=') {
			cout << example.equals(example.counter) << endl;
		}
	}
	cout << "До свидания!";
}
