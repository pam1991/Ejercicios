#include<stdio.h> //biblioteca para entrada y salida
#include<windows.h>//


int main(){
    printf("*");

    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = 4;
     dwPos.Y = 5;
    

    SetConsoleCursorPosition(hCon,dwPos);

   printf("*");



    return 0;


}