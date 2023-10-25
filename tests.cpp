#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <string>

int binarySearch(int start, int end, int value, std::vector<int> vec)
{

}


int main()
{
	std::vector<int> vec;

	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(8);
	vec.push_back(9);
	vec.push_back(10);

	std::cout << binarySearch(0, 5, 7, vec) << std::endl;
	return (0);
}

