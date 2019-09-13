#include <iostream>
#include "Dog.cpp"
#include "Cow.cpp"
#include "Lion.cpp"

using namespace std;

int main()
{
	Cow* cow = new Cow("Milka", "muuu");
	cow->Name();
	cout << "makes";
	cow->Sound();

	Lion* lion = new Lion("Simba", "mauu");
	lion->Name();
	cout << "makes";
	lion->Sound();

	Dog* dog = new Dog("Max", "hamm");
	dog->Name();
	cout << "makes";
	dog->Sound();

	return 0;
}
