#include "Employee.h"

Employee* CreateEmp(int num, char name[NAMELEN])
{
	Employee* emp = new Employee;
	emp->OfficeNum = num;
	strcpy_s(emp->Name, name);

	return emp;
}

void ShowEmp(Employee* emp)
{
	cout << "�̸� : " << emp->Name << endl;
	cout << "���� ��ȣ : " << emp->OfficeNum << endl;
}