#include <iostream>
#include <limits>

void printComparison(int smaller_v, int larger_v)
{
	if (smaller_v == larger_v)
		std::cout << "\nThe values are equal!" << std::endl;
	else
	{
		std::cout << "\nThe smaller value is : " << smaller_v;
		std::cout << "\nThe larger value is : " << larger_v << std::endl;
	}
}

void compareTwoNumbers(int num1, int num2)
{
	int smaller_v, larger_v;

	if (num1 > num2)
	{
		larger_v = num1;
		smaller_v = num2;
	}
	else if (num1 < num2)
	{
		larger_v = num2;
		smaller_v = num1;
	}
	else if (num1 == num2)
	{
		larger_v = num1;
		smaller_v = num2;
	}	

	printComparison(smaller_v, larger_v);
}

void step2()
{
	std::cout << "\n[Step 2]";
	std::cout << "\nThis program allows you to enter integers in pairs.\n";
	std::cout << "To exit, you can enter the '|' character;\n";

	while (true)
	{
		int num1, num2;
		std::cout << "\nPlease enter two integer numbers : ";
		while (std::cin >> num1 >> num2)
		{
			compareTwoNumbers(num1, num2);
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
	std::cout << "\nExiting step 2.\n\n";
}