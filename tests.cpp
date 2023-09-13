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

	//std::string s1 = "Bonjour";
	//std::string s2 = "blata";

	//std::cout << std::stoi(s1, 0, 10) << std::endl;
	//std::cout << std::stoi(s2, 0, 10) << std::endl;
	//std::cout << std::stoi(s1, 0, 10) << std::endl;

	//float a = 12.43;
	//std::cout << a << std::endl;
	char str[1000] = "Rnpu cebwrpg bs gur 97 Pbzzba Pber pbagnvaf na rapbqrq uvag.";
	int i = 0;
	while (str[i])
	{
		if (str[i] != 32)
		{
			str[i]++;
			str[i]++;
		}
		i++;
	}

	std::cout << str << std::endl;
	return (0);
}