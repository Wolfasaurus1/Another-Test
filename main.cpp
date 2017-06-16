#include <iostream>
#include <Windows.h>

struct fVector
{
	float x;
	float y;
	float z;
};

fVector firstFunction() 
{
	fVector position;

	position.x = 5;
	position.y = 7;
	position.z = 10;

	return position;
}

int main()
{
	int map[3][3] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};

	fVector mine = firstFunction();

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			std::cout << map[i][j] << " ";
		}
		std::cout << std::endl;
	}


	std::cin.get();

	return 0;
}