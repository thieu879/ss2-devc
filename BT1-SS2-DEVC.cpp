#include <stdio.h>
int main(){
	//Khai bao bien canh hinh vuong, chieu dai và chieu rong hinh chu nhat, ban kinh hinh tron
	float edge, length, width, radius;
	//Khai bao hang so PI co gia tri la 3.14
	const float PI = 3.14;
	//Tinh so chu vi hinh vuong 
	float edge;
	printf("Nhap vao so canh:");
	scanf("%f", &edge);
	int circumference = edge * 4;
	printf("Chu vi hinh vuong là: %f,circumference");
	//Tinh so dien tich hinh vuong
	float edge;
	printf("Nhap vao so canh:");
	scanf("%f, &edge");
	int area = edge * edge;
	printf("Dien tich hinh vuong là: %f,area");
	//Tinh chu vi hinh chu nhat
	float length, width;
	printf("Chieu dai %f va chieu rong %f\n","length","width");
	scanf("%f %f, &length, &width");
	int circumference = (length + width) * 2;
	printf("Chu vi hinh hinh chu nhat là: %f,circumference");
	//Tinh dien tich hinh chu nhat 
	float length, width;
	printf("Chieu dai %f va chieu rong %f\n","length","width");
	scanf("%f %f, &length, &width");
	int area = length * width;
	printf("Dien tich hinh hinh chu nhat là: %f,area");
	//Tinh chu vi hinh tron
	float radius;
	printf("Nhap vao so ban kinh:");
	scanf("%f", &radius);
	int circumference = 2 * 3.14 * radius;
	printf("Chu vi hinh tron là: %f,circumference");
	//Dien tich hinh tron
	float radius;
	printf("Nhap vao so ban kinh:");
	scanf("%f, &radius");
	int area = 3.14 * radius * radius;
	printf("Dien tich hinh tron là: %f,area");
} 
