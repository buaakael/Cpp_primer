#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    Employee()
    {
        m_id = number++;
    }
    Employee(const string &name)
    {
        m_name = name;
        m_id = number++;
    }
    Employee(const Employee&) = delete;
    Employee& operator=(const Employee&) = delete;
    void print()
    {
        cout << m_name << " : " << m_id << endl;
    }
private:
    string m_name;
    int m_id;
    static int number;
};

int Employee::number = 0;

int main(int argc, char* argv[])
{
    Employee e1("A");
    Employee e2("B");
    Employee e3("C");
    e1.print();
    e2.print();
    e3.print();
}
