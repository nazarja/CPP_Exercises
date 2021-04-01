#include <iostream>
#include <string>

class Date 
{
    private: 
        int day {1};
        int month {1};
        int year {1970};

    public: 
        Date (int d, int m, int y) 
        {
            this->day = d;
            this->month = m;
            this->year = y;
        };

        void SetDay(int d);

        int GetDay() 
        {
            return this->day;
        }

        std::string GetDate()
        {
            return std::to_string(this->day) + "/" + std::to_string(this->month) + "/" + std::to_string(this->year);
        }
};

void Date::SetDay(int d)
{
    this->day = d;
};

namespace Test
{
    int test = 0;
};


int main()
{
    Date date (19,4,1984);
    std::cout << date.GetDate() << std::endl;

    date.SetDay(13);
    std::cout << date.GetDay() << std::endl;

    std::cout << Test::test << std::endl;
}