#pragma once
#include<string>
using namespace std;

// Арифметические операции
float Sum(float a, float b)
{
	return a + b;
}

float Vch(float c, float d)
{
	return c - d;
}

float Umn(float f, float e)
{
	return f * e;
}

float Del(float r, float h)
{
	return r / h;
}

float Delost(float j, float l)
{
	return j / l;
}


// Логические операции
float E(float a1, float b1) 
{
	return a1 == b1;
}

float N(float a2, float b2) 
{
	return a2 != b2;
}

float G(float a3, float b3) 
{
	return a3 > b3;
}

float L(float a4, float b4) 
{
	return a4< b4;
}

float G1(float a5, float b5) 
{
	return a5 >= b5;
}

float L1(float a6, float b6) 
{
	return a6 <= b6;
}

float L2(float a7, float b7) 
{
	return a7 && b7;
}

float L3(float a8, float b8) 
{
	return a8 || b8;
}

float L4(float a9) 
{
	return !a9;
}

// Минимум и Максимум
float Min(float a, float b) 
{
	return (a < b) ? a : b;
}

float Max(float a, float b) 
{
	return (a > b) ? a : b;
}