/*
 * File: 6-is_prime_number.c
 * Auth: sam tech
 */

#include "main.h"
int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible -checks if a number is divisible
 * @num: The num to be chcked
 * @div: The divisor.
 *
 * Return: if the number is divisible - 0.
 * if the number is not divisible - 1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
}
