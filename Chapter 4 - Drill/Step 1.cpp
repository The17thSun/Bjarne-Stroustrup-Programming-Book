#include <iostream>
#include <limits>

void step1()
{
	std::cout << "\n[Step 1]";
	std::cout << "\nThis program allows you to enter integers in pairs.\n";
	std::cout << "To exit, you can enter the '|' character;\n";

	while (true) 
	{
		int num1, num2;
		std::cout << "\nPlease enter two integer numbers : ";
		while (std::cin >> num1 >> num2)
		{
			std::cout << "Values entered : " << num1 << " & " << num2 << std::endl;
			break;
		}

		if (std::cin.fail())
		{
			std::cin.clear();
			char temp;
			std::cin >> temp;
			if (temp == '|')
			{
				break;
			}
			else
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid input. Please enter integer pairs or '|' to exit.\n";
			}
		}
	}
	std::cout << "\nExiting step 1.\n\n";
}