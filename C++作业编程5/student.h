#pragma once
#pragma warning(disable:4996)
#include<string.h>
#include<iostream>
class student
{
public:
	student(const char* name, int score)
	{
		this->score = score;
		this->name = new char[20];
		strcpy(this->name, name);
	}
	student(student& s)
	{
		score = s.score;
		name = new char [strlen(s.name) + 1];
		strcpy(name, s.name);
	}

	void display();
	~student()
	{
		delete []name;
	}

private:
	int score;
	char* name;

};

