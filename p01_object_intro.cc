#include <iostream>

class Person
{
public:

	void input()
	{
		std::cin.getline(name, 80); // same as C-language fgets(name, 80, stdin);
		std::cin >> age; // same as C-language scanf("%d", &age);
		std::cin.ignore(); // // same as C-language fflush(stdin);
	}
	void output()
	{
		std::cout << "Name: " << name << std::endl << "Age: " << age << std::endl;
	}
	char name[80];
	int age;
};


int main()
{
	Person p1, p2;
	p1.input();
	p2.input();
	p1.output();
	p2.output();
	return 0;
}
