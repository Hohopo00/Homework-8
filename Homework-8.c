#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double sum = 0.0;
    int i;

    // ���� for � ������������� ��������� (0 �� 10)
    for (i = 0; i <= 10; i++) {
        double x = 1.0 + i * 0.1;   // ��������� x = 1.0, 1.1, 1.2, ..., 2.0
        double sin_value = sin(x);  // ��������� �����
        sum += sin_value;           // ��������� � �����
        printf("sin(%.1f) = %.6f\n", x, sin_value);  // ������� ���������
    }

    printf("����� = %.6f\n", sum);  // �������� �����

    return 0;
}