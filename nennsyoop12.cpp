#include "animal.h"
#include <algorithm>
#include <vector>

int main() {
	int size;
	cout << "size:" << endl;
	cin >> size;
	vector<Animal*> zoo;
	string color[4] = { "Red", "Yellow", "Green", "Gray" };
	for (int i = 0; i < size; i++)
	{
		int k = rand() % 3 + 1;
		switch (k)
		{
		case 1:
			zoo.push_back(new Parrot(rand() % 20 + 1, color[rand() % 4]));
		case 2:
			zoo.push_back(new Cat(rand() % 20 + 1, color[rand() % 4]));
		case 3:
			zoo.push_back(new Dog(rand() % 20 + 1, color[rand() % 4]));

		default:
			break;
		}
	}
	for (int i = 0; i < size; i++) {
		cout << zoo[i]->view << "\t";
		zoo[i]->voice();
		
	}

}
