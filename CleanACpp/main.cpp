#include "flavor.h";

int main() 
{

	int custom_flavors_type = 0;
	
	do
	{
		system("cls");
		std::cout << "0 - developer" << std::endl;
		std::cout << "1 - stage" << std::endl;
		std::cout << "2 - release" << std::endl;
		std::cout << "Enter the flavor type: ";
		cin >> custom_flavors_type;
		if (custom_flavors_type >= 0 && custom_flavors_type <=2)
		{
			break;
		}
		else
		{
			std::cout << "Invalid flavor type!" << endl;
		}
		system("pause");
	} while (true);
	FlavorsType flavors_type = (FlavorsType)custom_flavors_type;
	Flavors::runApp(flavors_type);
}
