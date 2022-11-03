#include <iostream>
using namespace std;
int main()
{
    double Gross_Salary,Pretax_Rate,Posttax_Rate,Net_Salary;
    Pretax_Rate=(30/100) * 10000 ;
    Posttax_Rate=(25/100)* 10000;
    Gross_Salary = 10000;
    Net_Salary=Pretax_Rate-Posttax_Rate;
    return 0;



}