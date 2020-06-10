#include <iostream>
#include <string>
using namespace std;

class Date
{
    Date(string date)
    {
        string s = "0123456789";
        
    }
    void print()
    {
        cout << year << " " << month << " " << day << endl;
    }
private:
    unsigned year;
    unsigned month;
    unsigned day;
};

int main()
{
    Date date("Jan 1 1900");
    date.print();
}
