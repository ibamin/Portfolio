#include "cmalloc_study.h"
/* malloc 사용법
 (int*) malloc([변수사이즈])
 int* p = (int*) malloc(4);
 반드시 free를 해주어야함
 동적 할당은 힙에 저장
 스택 : 지역변수 매개변수 할당 밑에서 위로
 힙 : 동적변수 위에서 밑으로
*/
int* auto_malloc_int(int size) {
	return (int*)malloc(sizeof(int) * size);
}

char* auto_malloc_char(int size) {
	return (char*)malloc(sizeof(char) * size);
}

double* auto_malloc_double(int size) {
	return (double*)malloc(sizeof(double) * size);
}
/*
하나의 정수를 저장하기 위한 동적 메모리할당후 10저장해보기
*/
void int_test() {
	int* p = (int*)malloc(sizeof(int));
	if (p == NULL)
		return;
	*p = 10;
	cout << *p;
	free(p);
}

/*
하나의 문자를 저장 동적 메모리 할당후 'A' 저장
*/
void char_test() {
	char* p = (char*)malloc(sizeof(char));
	if (p == NULL)
		return;
	*p = 'A';
	cout << *p;
	free(p);
}

/*
5개의 정수를 저장하기 위한 동적 메모리할당후 3 5개저장해보기
*/
void int_test_five() {
	int* p = auto_malloc_int(5);
	for (int i = 0; i < 5; i++) p[i] = 3;
	for (int i = 0; i < 5; i++) cout << p[i] << ' ';
	free(p);
}

/*
이름을 저장하기 위한 동적 메모리할당후 이름저장해보기
*/
void char_test_name() {
	int size;
	cout << "이름은 몇자리? >>";
	cin >> size;

	char* p = auto_malloc_char(size + 1);
	for (int i = 0; i < size; i++) cin >> p[i];

	for (int i = 0; i < size; i++) cout << p[i];
	free(p);
}

/*
실수6개를 저장하기 위한 메모리를 malloc으로 할당한 후 사용자에게 5개의 점수를 입력받아
마지막 공간에 평균을 저장
*/
void double_test() {
	double* p = auto_malloc_double(6);
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 실수 입력 >>";
		cin >> p[i];
		sum += p[i];
	}
	p[5] = sum / 5;
	cout << "평균 :" << p[5];
	free(p);
}

/*
char 20개를 저장할 메모리 할당후 hello cpp를 저장 (malloc,strcpy)활용
*/
void char_test_20() {
	char* p = auto_malloc_char(20);
	char s[10] = "hello cpp";
	strcpy(p, s);
	for (int i = 0; i < 10; i++) {
		cout << p[i];
	}
	free(p);
}