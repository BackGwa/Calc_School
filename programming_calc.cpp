#define _CRT_SECURE_NO_WARNINGS
#define mathPI 3.141592

#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

bool titleLoop = true;
double valueA = 0.0, rad = 0.0;
char valueX = ' ', ValueInput = ' ';

void titlescreen();
void askback();
void commoncalc();

void gotoxy(int x, int y) {
	COORD xy = { (SHORT)x*2,(SHORT)y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

int main() {
	while (_kbhit())  ValueInput = _getch();
	titlescreen();
	return 0;
}

void titlescreen() {

	while (_kbhit())  ValueInput = _getch();
	titleLoop = true;

	printf("==============================\n\t공학용 계산기\n==============================\n\n\n");
	printf("\n==============================\n[n] 계산 시작\n[x] 프로그램 종료 - 프로세스\n==============================\n\n[프로젝트 제작 : 1102 강찬영]");

	while (titleLoop) {
		gotoxy(1, 4);
		printf("계산 모드를 선택해주세요.  ");
		Sleep(250);
		gotoxy(1, 4);
		printf("계산 모드를 선택해주세요.. ");
		Sleep(250);
		gotoxy(1, 4);
		printf("계산 모드를 선택해주세요...");
		Sleep(250);
		if (_kbhit()) {
			ValueInput = _getch();
			if (ValueInput == 'n') {
				titleLoop = false;
				commoncalc();
			}
			else if (ValueInput == 'x') {
				titleLoop = false;
				system("cls");
				exit(0);
			}
		}
	}
}

void commoncalc() {

	valueA = 0.0;
	char valueB[100] = "";
	int divmod = 0;
	double sum = 0.0;

	system("cls");
	printf("==============================\n\t공학용 계산기\n==============================\n\n");
	printf("수식을 입력하세요.\nEx. 1 + 1  OR  1 + sin(60)  >>  ");

	scanf("%lf %c %s", &valueA, &valueX, &valueB);

	if ( (strstr(valueB, "sin") != NULL) || (strstr(valueB, "cos") != NULL) || (strstr(valueB, "tan") != NULL)) {

		double sin180 = 0.0, sin90 = 0.0, sin60 = 0.0, sin30 = 0.0, cos180 = 0.0, cos90 = 0.0, cos60 = 0.0, cos30 = 0.0, tan180 = 0.0, tan90 = 0.0, tan60 = 0.0, tan30 = 0.0, threefunsum = 0.0;
		sin180 = sin(180 * mathPI / 180); cos180 = cos(180 * mathPI / 180); tan180 = tan(180 * mathPI / 180);
		sin90 = sin(90 * mathPI / 180); cos90 = cos(90 * mathPI / 180); tan90 = tan(90 * mathPI / 180);
		sin60 = sin(60 * mathPI / 180); cos60 = cos(60 * mathPI / 180); tan60 = tan(60 * mathPI / 180);
		sin30 = sin(30 * mathPI / 180); cos30 = cos(30 * mathPI / 180); tan30 = tan(30 * mathPI / 180);

		if (strstr(valueB, "sin") != NULL)
		{
			switch (valueX)
			{
			case '+':
				if (strstr(valueB, "180") != NULL) {
					threefunsum = valueA + sin180;
					printf("%.5lf + sin(180) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "90") != NULL) {
					threefunsum = valueA + sin90;
					printf("%.5lf + sin(90) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "60") != NULL) {
					threefunsum = valueA + sin60;
					printf("%.5lf + sin(60) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "30") != NULL) {
					threefunsum = valueA + sin30;
					printf("%.5lf + sin(30) = %.5lf", valueA, threefunsum);
				}
				break;

			case '-':
				if (strstr(valueB, "180") != NULL) {
					threefunsum = valueA - sin180;
					printf("%.5lf - sin(180) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "90") != NULL) {
					threefunsum = valueA - sin90;
					printf("%.5lf - sin(90) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "60") != NULL) {
					threefunsum = valueA - sin60;
					printf("%.5lf - sin(60) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "30") != NULL) {
					threefunsum = valueA - sin30;
					printf("%.5lf - sin(30) = %.5lf", valueA, threefunsum);
				}
				break;
			case '*':
				if (strstr(valueB, "180") != NULL) {
					threefunsum = valueA * sin180;
					printf("%.5lf * sin(180) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "90") != NULL) {
					threefunsum = valueA * sin90;
					printf("%.5lf * sin(90) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "60") != NULL) {
					threefunsum = valueA * sin60;
					printf("%.5lf * sin(60) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "30") != NULL) {
					threefunsum = valueA * sin30;
					printf("%.5lf * sin(30) = %.5lf", valueA, threefunsum);
				}
				break;
			case '/':
				if (strstr(valueB, "180") != NULL) {
					threefunsum = valueA / sin180;
					printf("%.5lf / sin(180) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "90") != NULL) {
					threefunsum = valueA / sin90;
					printf("%.5lf / sin(90) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "60") != NULL) {
					threefunsum = valueA / sin60;
					printf("%.5lf / sin(60) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "30") != NULL) {
					threefunsum = valueA / sin30;
					printf("%.5lf / sin(30) = %.5lf", valueA, threefunsum);
				}
				break;
			default: printf("계산이 불가능합니다!"); Sleep(500); commoncalc();  break;
			}
			askback();
		}

		else if (strstr(valueB, "cos") != NULL) {
			switch (valueX)
			{
			case '+':
				if (strstr(valueB, "180") != NULL) {
					threefunsum = valueA + cos180;
					printf("%.5lf + cos(180) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "90") != NULL) {
					threefunsum = valueA + cos90;
					printf("%.5lf + cos(90) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "60") != NULL) {
					threefunsum = valueA + cos60;
					printf("%.5lf + cos(60) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "30") != NULL) {
					threefunsum = valueA + cos30;
					printf("%.5lf + cos(30) = %.5lf", valueA, threefunsum);
				}
				break;

			case '-':
				if (strstr(valueB, "180") != NULL) {
					threefunsum = valueA - cos180;
					printf("%.5lf - cos(180) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "90") != NULL) {
					threefunsum = valueA - cos90;
					printf("%.5lf - cos(90) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "60") != NULL) {
					threefunsum = valueA - cos60;
					printf("%.5lf - cos(60) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "30") != NULL) {
					threefunsum = valueA - cos30;
					printf("%.5lf - cos(30) = %.5lf", valueA, threefunsum);
				}
				break;
			case '*':
				if (strstr(valueB, "180") != NULL) {
					threefunsum = valueA * cos180;
					printf("%.5lf * sin(180) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "90") != NULL) {
					threefunsum = valueA * cos90;
					printf("%.5lf * cos(90) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "60") != NULL) {
					threefunsum = valueA * cos60;
					printf("%.5lf * cos(60) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "30") != NULL) {
					threefunsum = valueA * cos30;
					printf("%.5lf * cos(30) = %.5lf", valueA, threefunsum);
				}
				break;
			case '/':
				if (strstr(valueB, "180") != NULL) {
					threefunsum = valueA / cos180;
					printf("%.5lf / cos(180) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "90") != NULL) {
					threefunsum = valueA / cos90;
					printf("%.5lf / cos(90) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "60") != NULL) {
					threefunsum = valueA / cos60;
					printf("%.5lf / cos(60) = %.5lf", valueA, threefunsum);
				}
				else if (strstr(valueB, "30") != NULL) {
					threefunsum = valueA / cos30;
					printf("%.5lf / cos(30) = %.5lf", valueA, threefunsum);
				}
				break;
			default: printf("계산이 불가능합니다!"); Sleep(500); commoncalc();  break;
			}
			askback();
		}

		else if (strstr(valueB, "tan") != NULL) {
		switch (valueX)
		{
		case '+':
			if (strstr(valueB, "180") != NULL) {
				threefunsum = valueA + tan180;
				printf("%.5lf + tan(180) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "90") != NULL) {
				printf("[Error!] tan(90)으로 연산할 수 없습니다.");
			}
			else if (strstr(valueB, "60") != NULL) {
				threefunsum = valueA + tan60;
				printf("%.5lf + tan(60) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "30") != NULL) {
				threefunsum = valueA + tan30;
				printf("%.5lf + tan(30) = %.5lf", valueA, threefunsum);
			}
			break;

		case '-':
			if (strstr(valueB, "180") != NULL) {
				threefunsum = valueA - tan180;
				printf("%.5lf - tan(180) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "90") != NULL) {
				threefunsum = valueA - tan90;
				printf("%.5lf - tan(90) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "60") != NULL) {
				threefunsum = valueA - tan60;
				printf("%.5lf - tan(60) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "30") != NULL) {
				threefunsum = valueA - tan30;
				printf("%.5lf - tan(30) = %.5lf", valueA, threefunsum);
			}
			break;
		case '*':
			if (strstr(valueB, "180") != NULL) {
				threefunsum = valueA * tan180;
				printf("%.5lf * tan(180) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "90") != NULL) {
				threefunsum = valueA * tan90;
				printf("%.5lf * tan(90) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "60") != NULL) {
				threefunsum = valueA * tan60;
				printf("%.5lf * tan(60) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "30") != NULL) {
				threefunsum = valueA * tan30;
				printf("%.5lf * tan(30) = %.5lf", valueA, threefunsum);
			}
			break;
		case '/':
			if (strstr(valueB, "180") != NULL) {
				threefunsum = valueA / tan180;
				printf("%.5lf / tan(180) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "90") != NULL) {
				threefunsum = valueA / tan90;
				printf("%.5lf / tan(90) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "60") != NULL) {
				threefunsum = valueA / tan60;
				printf("%.5lf / tan(60) = %.5lf", valueA, threefunsum);
			}
			else if (strstr(valueB, "30") != NULL) {
				threefunsum = valueA / tan30;
				printf("%.5lf / tan(30) = %.5lf", valueA, threefunsum);
			}
			break;
		default: printf("계산이 불가능합니다!"); Sleep(500); commoncalc();  break;
		}
		askback();
		}
}

	else {

		if ((valueX == '+' || valueX == '-' || valueX == '*' || valueX == '/')) {

			switch (valueX) {

			case '+':
				sum = valueA + atof(valueB);
				printf("%.5lf + %.5lf = %.5lf\n", valueA, atof(valueB), sum);
				askback();
				break;

			case '-':
				sum = valueA - atof(valueB);
				printf("%.5lf - %.5lf = %.5lf\n", valueA, atof(valueB), sum);
				askback();
				break;

			case '*':
				sum = valueA * atof(valueB);
				printf("%.5lf * %.5lf = %.5lf\n", valueA, atof(valueB), sum);
				askback();
				break;

			case '/':

				if (valueA == 0 || valueB == 0) {
					printf("0으로 나눌 수 없습니다.\n"); Sleep(500); commoncalc();  break;
				}
				else {
					sum = valueA / atof(valueB);
					divmod = (int)valueA % (int)atof(valueB);
					printf("%.5lf / %.5lf = 몫 : %.5lf | 나머지 : %d\n", valueA, atof(valueB), sum, divmod);
					askback();
					break;
				}

			default: printf("계산이 불가능합니다!"); Sleep(500); commoncalc();  break;

			}
		}
		else {
			printf("정상적인 수식이 아닙니다!");
			Sleep(500);
			commoncalc();
		}
	}
}

void askback() {
		printf("\n==============================\n신규 연산 [n]\n연산 종료 [x]\n==============================\n");
		while (1) {
			if (_kbhit()) {
				ValueInput = _getch();
				if (ValueInput == 'n') {
					commoncalc();
					break;
				}
			}
				else if (ValueInput == 'x') {
					system("cls");
					titlescreen();
					break;
				}
			}
		}