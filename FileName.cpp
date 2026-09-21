#include <stdio.h>
int main() {
	int x;
	int t = 0;
	printf("Please input a number:\n");
	scanf_s("%d", &x);
	
	int mask = 1;
	int e = x;
	while (e > 9) {
		e /= 10;
		mask *= 10;
	}							//前面是对输入的数字进行处理，得到输入数字的位数
	do {
		int d = x / mask;		//得到最高位的数字
		printf("%d", d);		//输出最高位的数字
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;				//去掉最高位的数字
		mask /= 10;
	} while (mask > 0);
	printf("\n");

	return 0;
}