//#include <stdio.h>
//int main()
//{
//	int a, b, d = 0; float c;
//	printf("input\n");
//	scanf_s("%d", &a);
//	if (a < 0)
//		printf("error");
//	if (a<800)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		b = a / 400;
//
//		switch (b)
//		{
//		case 1:
//		case 2:c = a+ (a - 800) * 0.05;  break;
//		case 3:
//		case 4:c = a+(a - 800) * 0.05 + (a - 1200) * 0.08;  break;
//		default:c = a+(a - 800) * 0.05 + (a - 1200) * 0.08 + (a - 2000) * 0.2;  break;
//			
//		}
//		printf("%f", c);
//		return 0;
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	float x, y,z;
//	printf("input\n");
//	scanf_s("%f%f", &x, &y);
//	if (x < 0)
//	{
//		z = x + y;
//	}
//	if (x >= 0 && y > 0)
//	{
//		z = (x * x + 1) * y / (x * x + 2);
//	}
//	if (x > 0 && y <= 0)
//	{
//		z = (x - 2) / (y * y + 1);
//	}
//
//			printf("%f", z);
//
//
//	return 0;
//}

#include <stdio.h>
#include <math.h>
int main()
{
	char ch;
	scanf_s("%c",&ch);
	if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
		printf("%c\n", ch);
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
		printf("%c", ch);
	}
	else
		printf("%c", ch);


	
	return 0;
}


#include <stdio.h>
int main()
{
	int a, b;
	scanf_s("%d",&a);
	if (a % 3 == 0&&a%5==0&&a%7==0)
		printf("right");
	else
		printf("error");

	return 0;
}