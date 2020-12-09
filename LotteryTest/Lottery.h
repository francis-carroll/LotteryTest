#pragma once

#include <list>

using namespace std;

class Lottery
{
public:
    bool checkInRange(int t_number);
private:
    const int MAX_NUMBER = 46;
    const int MIN_NUMBER = 0;

};

//#include <iostream>
//#include <time.h>
//#include <assert.h>
//#include <vector>
//
//#include "Lottery.h"
//
//using namespace std;
//
//int main()
//{
//    srand((unsigned)time(nullptr));
//
//    int input = -1;
//    std::vector<int> v;
//    for (int i = 0; i < 6;)
//    {
//        std::cin >> input;
//
//        if (Lottery::checkInRange(input) == true)
//        {
//            std::cout << "Valid Number Input" << endl;
//            v.push_back(input);
//            i++;
//        }
//        else {
//            std::cout << "Number is not in range of 0-48" << endl;
//        }
//        assert(Lottery::checkInRange(input) == true);
//    }
//
//
//    system("PAUSE");
//    return 0;
//}