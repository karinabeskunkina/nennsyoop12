#ifndef animal_h

#define animal_h

#include <iostream>
#include <string>

using namespace std;


class Animal {
protected:
	int age;
	string color;
public:
	string view;
	Animal(int age, string color) {
		this->age = age;
		this->color = color;

	}
	virtual void voice() = 0;


};






class Dog :public Animal {
public:
	Dog(int age, string color) :Animal(age, color) {

		this->view = "Dog";
	}
	void voice() override {
		cout << age << "\t" << color << "\t" << "GAWWWW" << endl;
	}
};


class Cat :public Animal {
public:
	Cat(int age, string color) :Animal(age, color) {

		this->view = "Cat";
	}

	void voice() override {
		cout << age << "\t" << color << "\t" << "MEUUU" << endl;
	}
};

class Parrot :public Animal {
public:

	Parrot(int age, string color) :Animal(age, color) {

		this->view = "Parrot";
	}
	
	void voice() override {
		cout << age << "\t" << color << "\t" << "KUUUU" << endl;
	}
};

#endif
