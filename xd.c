#include <stdlib.h>

int main() {
    while (1) {
        int* ptr = malloc(1024 * 1024 * sizeof(int)); // Выделяем 1 МБ памяти
        if (ptr == NULL) {
            break; // Прерываем цикл, если выделение памяти не удалось
        }
    }

    return 0;
}

