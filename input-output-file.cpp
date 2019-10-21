#include <iostream>
#include <sstream>
#include <stdio.h>
#include <fstream>

using namespace std;

/* 
Даны два числа A и B. Вам нужно вычислить их сумму A+B. В этой задаче вам нужно читать из файла и выводить ответ в файл
*/
int main()
{
    int summ = 0;
    FILE *in = fopen("input.txt","r"); //  параметр "r", то есть reed - позволит нам только считать информацию.
    char str[1000];       //создаём строку(string) размером 1024.
    fgets(str,1000,in);   //записываем в str первую строку.
    
    istringstream ss(str);
    int temp = 0;
    for(int i = 0; i < 2; ++i) {
        ss >> temp;
        summ += temp;
    }
    
    std::ofstream outfile("output.txt");
    outfile << summ;
    outfile.close();
        
    fcloseall();         //закрываем все открытые файлы.
    return 0;
}
