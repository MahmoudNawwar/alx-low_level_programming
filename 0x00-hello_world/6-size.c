#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char:%zu byte(S)\n" , sizeof(char));
	printf("size of int:%zu byte(S)\n" , sizeof(int));
	printf("size of long int:%zu byte(S)\n" , sizeof(long int));
	printf("size of long long int:%zu byte(S)\n" , sizeof(long long int));
	printf("size of float:%zu byte(S)\n" , sizeof(float));
	return (0);