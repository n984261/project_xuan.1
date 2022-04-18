#include <stdio.h>
int main()
{
	int acount = 0, bcount = 0, ccount = 0, dcount = 0, ecount = 0;
	int grade, total;
	while ((grade = getchar()) != eof)
	{
		switch (grade)
		{
		case 'a':
		case 'A': ++acount; break;
		case 'b':
		case 'B': ++bcount; break;
		case 'c':
		case 'C': ++ccount; break;
		case 'd':
		case 'D': ++dcount; break;
		case 'e':
		case 'E': ++ecount; break;
		case ' ':  break;
		case '\n':  break;
		default: printf(" ‰»Î¥ÌŒÛ"); break;

		}
	}
	printf("%d%d%d%d%d", acount, bcount, ccount, dcount, ecount);
	return 0;
}

#include <stdio.h>
int main()
{
	int n=0, count=0, sum=0;
	float aver=0;
	
	while (scanf_s("%d,&")!=eof)
	{
		if (n == 0)
			continue;
		sum = sum + n;

	}
	return 0;
	}


#include <stdio.h>
int main()
{
	int a,b,max=0;
	
     for (a=0;a<5;a++)
	{
		 scanf_s("%d", &b);
		 if (b > max)
			 max = b;	 		
	}

	printf("%d", max);
	return 0;
}








#include <stdio.h>
int main()
{
	int a, b, c,d;
	
	

	for (a = 100;a < 999;a++)
	{
		
		b = a / 100;
		c = (a - b * 100) / 10;
		d = (a - b * 100 - c * 10);
		if (a == b * b * b + c * c * c + d * d * d)
		{
			printf("%d", a);
			break;
		}

	}
	return 0;
}

#include <stdio.h>
int main()
{
	int a, b;
	for (a = 10; a < 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("%d ", a);
		}
		else
		{
			continue;
		}
	}

	return 0;
}



#include <stdio.h>
int main()
{
	float x, max, min;
	scanf_s("%f", &x);
	max = min = x;
	while (x > 0)
	{
		if (x > max)
			max = x;
		if (x < min)
			min = x;
		scanf_s("%f", &x);
	}
	printf("max=%f min=%f", max, min);
	return 0;
}