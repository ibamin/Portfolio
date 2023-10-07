#include "cmalloc_study.h"
/* malloc ����
 (int*) malloc([����������])
 int* p = (int*) malloc(4);
 �ݵ�� free�� ���־����
 ���� �Ҵ��� ���� ����
 ���� : �������� �Ű����� �Ҵ� �ؿ��� ����
 �� : �������� ������ ������
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
�ϳ��� ������ �����ϱ� ���� ���� �޸��Ҵ��� 10�����غ���
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
�ϳ��� ���ڸ� ���� ���� �޸� �Ҵ��� 'A' ����
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
5���� ������ �����ϱ� ���� ���� �޸��Ҵ��� 3 5�������غ���
*/
void int_test_five() {
	int* p = auto_malloc_int(5);
	for (int i = 0; i < 5; i++) p[i] = 3;
	for (int i = 0; i < 5; i++) cout << p[i] << ' ';
	free(p);
}

/*
�̸��� �����ϱ� ���� ���� �޸��Ҵ��� �̸������غ���
*/
void char_test_name() {
	int size;
	cout << "�̸��� ���ڸ�? >>";
	cin >> size;

	char* p = auto_malloc_char(size + 1);
	for (int i = 0; i < size; i++) cin >> p[i];

	for (int i = 0; i < size; i++) cout << p[i];
	free(p);
}

/*
�Ǽ�6���� �����ϱ� ���� �޸𸮸� malloc���� �Ҵ��� �� ����ڿ��� 5���� ������ �Է¹޾�
������ ������ ����� ����
*/
void double_test() {
	double* p = auto_malloc_double(6);
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "��° �Ǽ� �Է� >>";
		cin >> p[i];
		sum += p[i];
	}
	p[5] = sum / 5;
	cout << "��� :" << p[5];
	free(p);
}

/*
char 20���� ������ �޸� �Ҵ��� hello cpp�� ���� (malloc,strcpy)Ȱ��
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