#include <iostream>

using namespace std;

class Date 
{
    private:
        int day{1};
        int month{1};
        int year{1984};
    
    public:
        int GetDay() { return day;};
        int GetMonth() { return month;};
        int GetYear() { return year;};
        
        void SetDay(int d) {
            if (d >= 0) day = d;
        }
        void SetMonth(int m) {
            if (m >= 1 || m <= 12) month = m;
        }
};

int main()
{
	Date date;

	// date.day = 19;
	// date.month = 4;
	// date.year = 1984;

    date.SetDay(13);
    date.SetDay(-7);

	cout << date.GetDay() << "/" << date.GetMonth() << "/" << date.GetYear() << endl;	
}