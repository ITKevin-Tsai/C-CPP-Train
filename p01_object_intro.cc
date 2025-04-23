#include <cstring> // for strcpy

class Person
{
	char name[80];
	int age;
public:
	Person()  // Constructor
	{
		name[0] = '\0'; // Initialize to empty string
		age = 0;
	}
	~Person() {}  // De-Constructor

	void input();
	void output();
};

void Person::input()
{
	std::cin.getline(name, 80); // fgets(name, 80, stdin);
	std::cin >> age; // scanf("%d%, &age);
	std::cin.ignore(); // fflush(stdin);
}

void Person::output()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
}
