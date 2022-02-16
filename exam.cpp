#include <iostream>
#include"Work.h"
int main()
{
    std::string work;
    int earn;
    std::cout << "\nEnter your work: ";
    std::cin >> work;
    std::cout << "\nEnter your salary: ";
    std::cin >> earn;
    Work* vk = new Work(work, earn);
    vk->print();
    int money;
    int time;
    std::cout << "\nEnter how many hours you will work: ";
    std::cin >> time;
    earnExpenditure* en = new earnExpenditure(money, time);
    en->Earn();
    en->Expenditure();
}
