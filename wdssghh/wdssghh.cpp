#include <iostream>

using namespace std;

long long int step_en(int number, int stepen) // 1
{
    long long int itog = 1;
    for (int i = 0; i < stepen; i++)
        itog *= number;

    return itog;
}

int zadan2(int number1, int number2) // 2
{
    int vsego_chisel;
    int min;
    int max;
    int itog = 0;
    int tmp_num1 = number1;
    int tmp_num2 = number2;
    if (tmp_num1 < 0)
        tmp_num1* (-1);
    if (tmp_num2 < 0)
        tmp_num2* (-1);
    if (tmp_num1 < tmp_num2)
        vsego_chisel = tmp_num2 - tmp_num1;
    else
        vsego_chisel = tmp_num1 - tmp_num2;
    if (number1 < number2)
    {
        min = number1;
        max = number2;
    }
    else
    {
        min = number2;
        max = number1;
    }
    for (int num = min + 1; num < max; num++)
        itog += num;

    return itog;
}

void soversh_number(int number)
{
    int vsego = 0;
    for (int i = 1; i < number; i++)
        if (number % i == 0)
            vsego += i;
    if (vsego == number)
        cout << "Chislo soversh";
    else
        cout << "Chislo nesoversh";
}

void soversh_nimber_search(int number) {
    int vsego = 0;
    if (number >= 0)
    {
        for (int num = 1; num < number; num++)
            if (number % num == 0)
                vsego += num;
        if (vsego == number)
            cout << "Soversh";
        /* if(vsego== -number)
             cout<<"Soversh";*/
        else
            cout << "NeSoversh";
    }
    if (number < 0)
    {
        for (int num = 1; num < -number; num++)
            if (-number % num == 0)
                vsego += num;
        if (vsego == -number)
            cout << "Soversh";
        else
            cout << "NeSoversh";
    }
}

void zadan3(int number1, int number2) // 2
{
    int vsego = 0;
    int vsego_chisel;
    int min;
    int max;
    int itog = 0;
    int tmp_num1 = number1;
    int tmp_num2 = number2;
    if (tmp_num1 < 0)
        tmp_num1* (-1);
    if (tmp_num2 < 0)
        tmp_num2* (-1);
    if (tmp_num1 < tmp_num2)
        vsego_chisel = tmp_num2 - tmp_num1;
    else
        vsego_chisel = tmp_num1 - tmp_num2;
    if (number1 < number2) {
        min = number1;
        max = number2;
    }
    else {
        min = number2;
        max = number1;
    }

    for (int num = min + 1; num < max; num++)
        for (int numb = 1; numb < num; numb++) {
            if (num % numb == 0)
                vsego += numb;
        }
            if (vsego == min+1)
                cout << vsego <<" "<<"Soversh";
            /* if(vsego== -number)
                 cout<<"Soversh";*/
            /*else
                cout << "NeSoversh";*/
        
}

/*void search_soversh_numbers(int number1, int number2)
{
    int vsego_chisel;
    int min;
    int max;
    int itog=0;
    int tmp_num1 = number1;
    int tmp_num2 = number2;
    if (tmp_num1 < 0)
        tmp_num1 * (-1);
    if (tmp_num2 < 0)
        tmp_num2 * (-1);
    if (tmp_num1<tmp_num2)
        vsego_chisel = tmp_num2-tmp_num1;
    else
        vsego_chisel = tmp_num1-tmp_num2;
    if(number1<number2)
    {
        min = number1;
        max = number2;
    }
    else
    {
        min = number2;
        max = number1;
    }

        int vsego = 0;
        for(int num = min+1; num < max; num++) {

            if (max % num == 0)
                vsego += num;
            if (vsego == num)
                itog++;
        }

    cout<<"Soversh chisel: " << itog;
}*/

int main()
{
    /*int number;
    int stepen;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter a stepen: ";
    cin>>stepen;

    cout<<step_en(number,stepen);*/

    /*int num1;
    int num2;

    cout<<"Enter a number_1: ";
    cin>>num1;
    cout<<"Enter a number_2: ";
    cin>>num2;

    cout<<zadan2(num1,num2);*/

    int num1;
    cout << "enter 1: ";
    cin >> num1;
    int num2;
    cout << "enter 2: ";
    cin >> num2;

    zadan3(num1, num2);

    return 0;
}
