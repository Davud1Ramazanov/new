#pragma once
#include<iostream>
class Work
{
	protected:
	std::string work;
	int earn;
public:
	Work(std::string work, int earn) : work(work), earn(earn){}
	void print()
	{
		std::cout << "\nWork: " << work << "\tEarn: " << earn;
	}
	std::string getWork()
	{
		return work;
	}
	int getEarn()
	{
		return earn;
	}
};

class earnExpenditure : Work
{
protected:
	int money;
	int time;
public:
	void Earn()
	{
		for (int i = 0; i < time; i++)
		{
			if (time > 0)
			{
				std::cout << "\nWait a while for payroll...";
				money += earn;
			}
			else
			{
				std::cout << "\nError in the program system!";
			}
		}
		std::cout << "\nYou have earned: " << money;
	}
	void Expenditure()
	{
		char ch;
		do
		{
			std::cout << "\nMenu: ";
			std::cout << "\n1 - Pay utility bill";
			std::cout << "\n2 - Buy clothes";
			std::cout << "\n3 - Buy food";
			std::cout << "\n4 - Buy medicine";
			std::cout << "\n0 - Exit";
			std::cin >> ch;
			switch (ch)
			{
			case '1':
				if (money >= 40)
				{
					std::cout << "\nYou have successfully paid your utility bill";
					money -= 40;
				}
				else
				{
					std::cout << "\nYou don't have enough money";
				}
				break;
			case '2':
				if (money >= 25)
				{
					std::cout << "\nYou have successfully paid your cloth";
					money -= 25;
				}
				else
				{
					std::cout << "\nYou don't have enough money";
				}
				break;
			case '3':
				if (money >= 15)
				{
					std::cout << "\nYou have successfully paid your food";
					money -= 15;
				}
				else
				{
					std::cout << "\nYou don't have enough money";
				}
				break;
			case '4':
				if (money >= 30)
				{
					std::cout << "\nYou have successfully paid your medicine";
					money -= 30;
				}
				else
				{
					std::cout << "\nYou don't have enough money";
				}
				break;
			case '0':
				std::cout << "\nThank you for spending time in our mall. Bye!";
				break;
			}
		} while (ch != '0');
	}
};