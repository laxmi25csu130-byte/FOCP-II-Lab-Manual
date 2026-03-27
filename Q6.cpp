#include <iostream>
using namespace std;

int main()
{
    float bonus = 12;
    int no_emp;
    cout << "Enter the number of employees :: ";
    cin >> no_emp;
    int employes[no_emp];
    int total_salary = 0;
    for (int i = 0; i < no_emp; i++)
    {
        cout << "Enter the salary of employee " << i + 1 << " :: ";
        cin >> employes[i];
        total_salary = total_salary + employes[i];
    }
    cout << "\nTotal no of employes :: " << no_emp << endl;
    cout << "Total salary without bonus :: " << total_salary << endl;
    cout << "Bonus :: " << bonus << endl;
    cout << "Salary after bonus :: " << total_salary * bonus / 100 << endl;
    return 0;
}