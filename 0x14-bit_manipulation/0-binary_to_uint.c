#include "main.h"
/**
  * binary_to_uint - This function converts an unasigned integer no.
  * @b - Points to a string that has a binary no. 
  * Return - a unsigned interger with decimal value of binary number or zero on error.
 */

unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int num;
num = 0;
if (!b)
	return (0);
for (a = 0; b[a] != '\0'; a++)
	 {
	if (b[a] != '0' && b[a] != '1')
		return (0);
	 }
for (a = 0; b[a] != '\0'; a++)
	 {
	num <<= 1;
	if (b[a] == '1')
		num += 1;
	 }
return (num);
 }

