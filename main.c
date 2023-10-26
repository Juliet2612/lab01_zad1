#include <windows.h>
#include <stdio.h>
int main() {
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8); // strona kodowa UTF-8
    printf("Hello, World!\n");
    printf("Witaj Świecie\u263A\n");
    system("pause");
    return 0;
}