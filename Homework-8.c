#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double sum = 0.0;
    int i;

    // Цикл for с целочисленным счетчиком (0 до 10)
    for (i = 0; i <= 10; i++) {
        double x = 1.0 + i * 0.1;   // Вычисляем x = 1.0, 1.1, 1.2, ..., 2.0
        double sin_value = sin(x);  // Вычисляем синус
        sum += sin_value;           // Добавляем к сумме
        printf("sin(%.1f) = %.6f\n", x, sin_value);  // Выводим результат
    }

    printf("Сумма = %.6f\n", sum);  // Итоговая сумма

    return 0;
}