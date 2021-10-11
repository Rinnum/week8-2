#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int x, y, z;
int sum(int x,int y) 
{
	z = x + y;
	return z;
}
int main() {
	FILE* fp;
	fp = fopen("a.txt", "w");
	printf("Enter input : ");
	scanf("%d %d", &x, &y);
	fprintf(fp, "%d ", x);
	fprintf(fp, "%d", y);
	fclose(fp);
	fp = fopen("b.txt", "w");
	sum(x,y);
	fprintf(fp, "%d", z);
	fclose(fp);
	return 0;
}