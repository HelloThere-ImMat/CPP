#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

int main()
{
	std::string bla = "bonjour";
	int i = 0 ;

	while (bla[i])
		std::cout << bla[i++] << std::endl;
	return (0);
}
