#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

int main()
{
	//std::cout << time(NULL) << std::endl;
	//srand(time(NULL));
	//for (int i = 0; i < 5; i++)
	//	std::cout << rand() % 2 << std::endl;

	std::string s1 = "Bonjour";
	std::string s2 = "blata";

	std::cout << std::stoi(s1, 0, 10) << std::endl;
	std::cout << std::stoi(s2, 0, 10) << std::endl;
	std::cout << std::stoi(s1, 0, 10) << std::endl;

	return (0);
}