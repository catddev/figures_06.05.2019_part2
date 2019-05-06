#include<iostream>
#include<string>
using namespace std;

//��������� ������� ������� ��� �������� ������� �������������� ����� : �����������, �������������, ����������.
//������� ������� ��� ���� ������� - ����������� �������� ����� Point(�����).
//������� ����� ������ ��������� ��������� ����������� ������ :
//�	����������� �� ���������
//�	�������� �� 90 �������� ������ / �����
//(��� ��� ������� �������)!!!

//� ����������� ������� ����������� :
//�	����� ��������� ���� �������� �� �������
//�	����������� �������� � == � ��� ��� �� ����,
//�	����������� �������� ����� / ������ ��� �������������.
//�	��� ������������� �������� � ������ ������ ������.

#pragma once
class Point {
protected:
	double x;
	double y;
public:
	Point();
	Point(double x, double y);

	virtual void move(double a, double b);//���� ����� ���������� � ������� ������, � ����������� ��� ����� �� ���������
	virtual void turn_90() = 0;//a ������ ������ ��������� � �����������
};