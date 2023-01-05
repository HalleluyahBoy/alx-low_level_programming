/*
 * File: 5-sqrt_recursion.c
 * Auth: Evidev
 */
#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt -Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The ro0ot to be tested
 *
 * Return: if the number has a natural square root - The square rot
 * it the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}
