#include <iostream>
#include <stack>

using namespace std;

class Employee
{
    public:
        int days;
        
        Employee(int days)
        {
            cout<<"Constructed called: "<< days<<"\n";
            this -> days = days;
        }
        
        Employee(const Employee &employee)
        {
            cout<<"Copy constructed called: "<< employee.days<<"\n";
            this -> days = employee.days;
        }
};

int main()
{
    stack<Employee> employee_stack;
    
    Employee joe(10);
    employee_stack.push(joe);
    
    employee_stack.emplace(20);
    
    Employee top_employee = employee_stack.top();
    
    return 0;
}
