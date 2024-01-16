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

void step2and3()
{
	std::cout << "\n[Step 2 & 3]";
	std::cout << "\nThis program allows you to enter two integers.";
	std::cout << "\nThe program compares the two values to display the larger and smaller values.";
	std::cout << "\nTo exit, you can enter the '|' character;\n";

	while (true)
	{
		int num1, num2;
		std::cout << "\nPlease enter two integer numbers : ";
		if (std::cin >> num1 >> num2 && std::cin.peek() == '\n')
		{
			compareTwoNumbers(num1, num2);
		}

		else
		{
			std::cin.clear();
			if (std::cin.peek() == '|')
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "\nExiting step 2/3.\n\n";
				break;
			}
			else
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid input. Please enter integer pairs or '|' to exit.\n";
			}
		}
	}
}