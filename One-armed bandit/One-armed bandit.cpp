#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "ru");
    char symbol[6]{ '3', '1', '5', '2', '7', '4'};
    int balance = 1000;
    char symbol1;
    char symbol2;
    char symbol3;
    char enter;
    int bid = 20;
    int g;
    cout << "При ставке 20" << endl;
    cout << "3 3 3 = 200 монет" << endl
    << "1 1 1 = 250 монет" << endl 
    << "5 5 5 = 500 монет" << endl
    << "2 2 2 = 700 монет" << endl
    << "7 7 7 = 2700 монет" << endl
    << "4 4 4 = 1000 монет" << endl << endl;
    while (balance >= bid)
    {
        cout << "Ваш баланс: " << balance << endl << endl;
        cout << "Что-бы продалжить игру нажмите 'y' \nЧто-бы закотнчить игру нажмите 'n'\nЧто-бы повысить ставку игры на 20 нажмите 'p'\nЧто-бы повысить ставку игры на 20 нажмите 'l': ";
        cin >> enter;
        if (enter == 'y' || enter == 'Y')
        {
            if (bid != 0)
            {
                balance -= bid;
                g = bid / 20;
                symbol1 = symbol[rand() % 6];
                symbol2 = symbol[rand() % 6];
                symbol3 = symbol[rand() % 6];
                cout << "*********************" << endl;
                cout << "\t" << symbol1 << " " << symbol2 << " " << symbol3 << endl;
                cout << "*********************" << endl;
                if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[0])
                {
                    cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено " << 200 * g << " монет" << endl << endl;
                    balance += 200 * g;
                }
                else if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[1])
                {
                    cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено " << 250 * g << " монет" << endl << endl;
                    balance += 250 * g;
                }
                else if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[2])
                {
                    cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено " << 500 * g << " монет" << endl << endl;
                    balance += 500 * g;
                }
                else if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[3])
                {
                    cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено " << 700 * g << " монет" << endl << endl;
                    balance += 700 * g;
                }
                else if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[4])
                {
                    cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено " << 2700 * g << " монет" << endl << endl;
                    balance += 2700 * g;
                }
                else if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[5])
                {
                    cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено " << 1000 * g << " монет" << endl << endl;
                    balance += 1000 * g;
                }
                else
                {
                    cout << "Увы вы проиграли" << endl << endl;
                }
            }
            else
            {
                cout << "Ваша ставка равна 0 повысть ставку" << endl;
            }
        }
        else if(enter == 'n' || enter == 'N')
        {
            cout << endl  << "Вы забрали " << balance << " монет" ;
            break;
        }
        else if (enter == 'p' || enter == 'P')
        {
            if (bid == 100)
            {
                cout << "Вы достиглм максимальной ставки" << endl;
            }
            else
            {
                bid += 20;
            }
            cout << endl << "Cтавка равна " << bid << " монет" << endl;
        }
        else if (enter == 'l' || enter == 'L')
        {
            if (bid == 0)
            {
                cout << "Ваша ставка равна 0 повысть ставку" << endl;
            }
            else
            {
                bid -= 20;
            }
            cout << endl << "Cтавка равна " << bid << " монет" << endl;
        }
        else
        {
            cout << endl << "Error" <<
                endl;
        }
    }
    if (balance <= bid)
    cout << "У вас заночились монеты для прокрута" ;
}


