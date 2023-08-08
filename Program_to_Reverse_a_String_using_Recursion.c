# include <stdio.h>

void reverse(char *str)
{
if (*str)
{
	reverse(str + 1);
	printf("%c", *str);
}
}

int main()
{
char a[] = "I am Sneha Yadav";
reverse(a);
return 0;
}
