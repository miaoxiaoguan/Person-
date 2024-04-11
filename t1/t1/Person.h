#pragma once
class Person {
public:
	char name[100];
	int birth[3];

};

class Employee : public Person {
public:
private:
	int num;
	int salary;
};

class Manager : public Person {
public:
};
class ManagerEmployee : virtual public Employee, virtual public Person {
public:
};