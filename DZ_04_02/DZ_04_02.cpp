// DZ_04_02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>

using namespace std;



int main()
{
   
	setlocale(LC_ALL, "ru");


    string price[7] = { "Пеперони       ", "Четыре сыра    ", "Вегатарианская ", "Гавайская     ", "Газировка 0,5 л", "Чай 0,3 л.     ", "Кофе 0,3 л.    " }; // Наименования
    double how_price[7] = { 8.5, 7, 9, 6.9, 1, 2.5, 3 }; // Цены


    //МАССИВ ДЛЯ ЧЕКА (записывает максимум 15 позиций, можно увеличить, при необходимости)
    string check[15]; //пустой массив для конечного чека(наименование)
    int check_how[15]; //пустой массив для конечного чека (кол-во)
    double check_price[15]; //пустой массив для конечного чека (цена товара)
    double check_sum[15]; //пустой массив для конечного чека (итог)


    // c --- Переменная для массивов и кол-ва выбранных позиций
    // how --- сколько штук
    // x --- !переменная только для чековых массивов!

    // double sum, sum_kofe, sum_tea --- Отдельно сумма пицц, чая и кофе. Чтобы скидки были раздельны и не суммировались.
    // Например если будет 2 чая и 4 кофе - скидка будеет только на кофе
    int c = 0, how = 0, x = 0;
    double sum = 0, sum_kofe = 0, sum_tea = 0, sum_tea_dis, sum_kofe_dis;
    int pizza_sum = 0; // сколько пицц в шт. (для 5-ой в подарок)
    int napitki_sumKofe = 0; // счетчик стаканов кофе
    int napitki_sumTea = 0; // счетчик стаканов чая
    int pizza_podarok = 0; // счетчик стаканов подарочных пицц)

    cout << "Действует скидка 15% на весь ассортимент напитков выше 2$\n"
        << "Так же действует скидка 20% на весь чек, при покупке от 50$\n"
        << "Внимание! Скидки не суммируются!\n\n";
    cout << "Код\t\tНазвание\t\tЦена\nтовара\t\tтовара\t\t\tтовара\n\n"
        << "\t\tПицца\t\n\n";

    for (int i = 0; i < 4; i++) {

        cout << i << "\t-\t" << price[i] << "\t-\t" << how_price[i] << " $" << "\n";

    }

    cout << "\n\t\tНапитки\t\n\n";

    for (int i = 4; i < 7; i++) {

        cout << i << "\t-\t" << price[i] << "\t-\t" << how_price[i] << " $" << "\n";
    }

    cout << "\n7\t-\tЗакончить выбор и выдать чек.\n"
        << "\nВыберете товар по коду.\n";


    while (c != 7) {

        cout << "\n\nВаш выбор - ", cin >> c;

        switch (c)
        {
        case 0: {
            cout << price[c] << " - " << how_price[c] << " $"
                << "\nСколько штук?   - ", cin >> how;
            if (how > 0) {
                cout << "\n" << price[c] << " - " << how << " шт. - " << how_price[c] * how << " $";
                sum = sum + how_price[c] * how; // суммируем итог, БЕЗ скидок, БЕЗ подарочных пицц
                pizza_sum = how + pizza_sum; // здесь считаем кол-во пицц для деления на 5, сразу после кейса

                check[x] = price[c]; // заполняем пустой массив наименованием
                check_how[x] = how; // другой пустой массив - заполняем кол-вом товаров
                check_price[x] = how_price[c]; // этот - заполняем ценой на товар
                check_sum[x] = how_price[c] * how; // а этот - цена * кол-во
                x++; // переходим на следующий (пустой) элемент чековых массивов

            }
            else if (how == 0) {
                break;
            }
            else {
                cout << "Пожалуйста, введите корректные данные!";
            }
            break;
        }

        case 1: {
            cout << price[c] << " - " << how_price[c] << " $"
                << "\nСколько штук?   - ", cin >> how;
            if (how > 0) {
                cout << "\n" << price[c] << " - " << how << " шт. - " << how_price[c] * how << " $";
                sum = sum + how_price[c] * how;
                pizza_sum = how + pizza_sum;

                check[x] = price[c];
                check_how[x] = how;
                check_price[x] = how_price[c];
                check_sum[x] = how_price[c] * how;
                x++;

            }
            else if (how == 0) {
                break;
            }
            else {
                cout << "Пожалуйста, введите корректные данные!";
            }
            break;
        }

        case 2: {
            cout << price[c] << " - " << how_price[c] << " $"
                << "\nСколько штук?   - ", cin >> how;
            if (how > 0) {
                cout << "\n" << price[c] << " - " << how << " шт. - " << how_price[c] * how << " $";
                sum = sum + how_price[c] * how;
                pizza_sum = how + pizza_sum;

                check[x] = price[c];
                check_how[x] = how;
                check_price[x] = how_price[c];
                check_sum[x] = how_price[c] * how;
                x++;

            }
            else if (how == 0) {
                break;
            }
            else {
                cout << "Пожалуйста, введите корректные данные!";
            }
            break;
        }

        case 3: {
            cout << price[c] << " - " << how_price[c] << " $"
                << "\nСколько штук?   - ", cin >> how;
            if (how > 0) {
                cout << "\n" << price[c] << " - " << how << " шт. - " << how_price[c] * how << " $";
                sum = sum + how_price[c] * how;
                pizza_sum = how + pizza_sum;

                check[x] = price[c];
                check_how[x] = how;
                check_price[x] = how_price[c];
                check_sum[x] = how_price[c] * how;
                x++;

            }
            else if (how == 0) {
                break;
            }
            else {
                cout << "Пожалуйста, введите корректные данные!";
            }
            break;
        }

        case 4: {
            cout << price[c] << " - " << how_price[c] << " $"
                << "\nСколько штук?   - ", cin >> how;
            if (how > 0) {
                cout << "\n" << price[c] << " - " << how << " шт.  - " << how_price[c] * how << " $";
                sum = sum + how_price[c] * how;

                check[x] = price[c];
                check_how[x] = how;
                check_price[x] = how_price[c];
                check_sum[x] = how_price[c] * how;
                x++;

            }
            else if (how == 0) {
                break;
            }
            else {
                cout << "Пожалуйста, введите корректные данные!";
            }
            break;
        }

        case 5: {
            cout << price[c] << " - " << how_price[c] << " $"
                << "\nСколько штук?   - ", cin >> how;
            if (how > 0) {
                cout << "\n" << price[c] << " - " << how << " шт. - " << how_price[c] * how << " $";
                sum_tea = sum_tea + how_price[c] * how;
                napitki_sumTea = how + napitki_sumTea;

                check[x] = price[c];
                check_how[x] = how;
                check_price[x] = how_price[c];
                check_sum[x] = how_price[c] * how;
                x++;

            }
            else if (how == 0) {
                break;
            }
            else {
                cout << "Пожалуйста, введите корректные данные!";
            }
            break;
        }
        case 6: {
            cout << price[c] << " - " << how_price[c] << " $"
                << "\nСколько штук?   - ", cin >> how;
            if (how > 0) {
                cout << "\n" << price[c] << " - " << how << " шт. - " << how_price[c] * how << " $";
                sum_kofe = sum_kofe + how_price[c] * how;
                napitki_sumKofe = how + napitki_sumKofe;

                check[x] = price[c];
                check_how[x] = how;
                check_price[x] = how_price[c];
                check_sum[x] = how_price[c] * how;
                x++;

            }
            else if (how == 0) {
                break;
            }
            else {
                cout << "Пожалуйста, введите корректные данные!";
            }
            break;
        }
        default: {
            cout << "Пожалуйста, введите корректные данные!";
        }


        }
        if (pizza_sum >= 5) {

            pizza_podarok = pizza_podarok + pizza_sum / 5;

            cout << "\n\nНормально ты так понабрал)\nУ нас каждая пятая пицца в подарок! У вас " << pizza_podarok << " шт. в подарок!";

            sum = sum - pizza_sum / 5 * how_price[c];

            pizza_sum = pizza_sum % 5;

        }

    }

    

    cout << "\n" << sum << "\n" << sum_kofe << "\n" << sum + sum_kofe + sum_tea << "\n";


    // Вывод чека и итогов
    cout << "\t\t\t\t   ЧЕК\n\n"
         << "Наименование\t\t|  Колличество  |      Цена     |\tИтог\t|\n\n";

    for (int i = 0; i < x; i++) {


        cout << i+1 << ". " << check[i] << "\t-\t" << check_how[i] << "\t-\t" << check_price[i] << " $\t-\t" << check_sum[i] << " $\n";

    }

     // скидон на чай
    if (napitki_sumTea > 3) {

        sum_tea = sum_tea * 0.85;
        cout << "\nДействует скидка 15% на весь ваш чай!";

    }
    // если НЕТ скидона на чай
    else if (napitki_sumTea <= 3) {

        sum = sum_tea + sum;
        sum_tea = 0;
    }

    // скидон на кофе
    if (napitki_sumKofe > 3) {

        sum_kofe = sum_kofe * 0.85;
        cout << "\nДействует скидка 15% на весь ваш кофе!";
    }
    // если НЕТ скидона на кофе
    else if (napitki_sumKofe <= 3) {

        sum = sum_kofe + sum;
        sum_kofe = 0;

    }

    // общий скидон если больше 50
    if (sum >= 50) {

        cout << "\nДействет скидка - 20% на весь чек!";

        sum = sum * 0.8;
    }

    cout << "\n\nИТОГО - " << sum + sum_kofe + sum_tea << " $";

    if (pizza_podarok > 0) {
        cout << "\nИ пицца, в колличестве - " << pizza_podarok << " шт. в подарок!)\n";
    }
        
    return 0;

}

