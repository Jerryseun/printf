#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char character;
	const char* message;
	char *ptr = "hello";

	_printf("Let's try to printf a simple sentence.\n");
	_printf("Let's try to %s sentence.\n", "printf a simple");


	character = 'A';
	_printf("Printing a character: %c\n", character);

	message = "Hello, custom_printf!";
	_printf("Printing a string: %s\n", message);

	_printf("Printing a number: %i, %d\n", "Hello", "World!");
	_printf("Printing a number: %i, %i, %i, %d, %d, %d\n", 0, 34, -75, 0, 75, -833);
	_printf("Printing a unsigned: %u\n", 65);
	_printf("Printing a unsigned: %u\n", -65);
	_printf("Printing a double double percent: %% b\n", 65);
	_printf("Printing a percent with invalid spec: %z\n", "hello");
	_printf("Printing a percent and space with space: % \n", "hello");
	_printf("Printing a percent only: %\n", "hello");
	_printf("Printing a unsigned: %u\n", 34);
	_printf("Printing a binay: %b\n", 34);
	_printf("Printing a octal: %o\n", 64);
	_printf("Printing a hex_lower: %x\n", 15);
	_printf("Printing a hex_upper: %X\n", 374746);
	_printf("Printing a ascii_non: %S\n", "Best\nSchool");
	_printf("Printing a pointer: %p\n", ptr);
	_printf("Printing a float: %.4f\n", 3.142);
	_printf("Printing a float: %5.4f\n", 3.142);
	return (0);
}
