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
    cout << "3 3 3 = 200 монет" << endl
    << "1 1 1 = 250 монет" << endl 
    << "5 5 5 = 500 монет" << endl
    << "2 2 2 = 700 монет" << endl
    << "7 7 7 = 2700 монет" << endl
    << "4 4 4 = 1000 монет" << endl << endl;
    while (balance >= 19)
    {
        cout << "Ваш баланс: " << balance << endl;
        cout << "Что-бы продалжить игру нажмите 'y' что-бы закотнчить игру нажмите 'n': ";
        cin >> enter;
        if (enter == 'y' || enter == 'Y')
        {
            balance -= 20;
            symbol1 = symbol[rand() % 6];
            symbol2 = symbol[rand() % 6];
            symbol3 = symbol[rand() % 6];
            cout << "******************" << endl;
            cout << symbol1 << " " << symbol2 << " " << symbol3 << endl;
            cout << "******************" << endl;
            if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[0])
            {
                cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено 200 монет" << endl << endl;
                balance += 200;
            }
            else if  (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[1])
            {
                cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено 250 монет" << endl << endl;
                balance += 250;
            }
            else if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[2])
            {
                cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено 500 монет" << endl << endl;
                balance += 500;
            }
            else if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[3])
            {
                cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено 700 монет" << endl << endl;
                balance += 700;
            }
            else if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[4])
            {
                cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено 2700 монет" << endl << endl;
                balance += 2700;
            }
            else if (symbol1 == symbol2 && symbol2 == symbol3 && symbol1 == symbol[5])
            {
                cout << "Поздравляю! Вы поймали 3 одинаковых вам зачислено 1000 монет" << endl << endl;
                balance += 1000;
            }
            else
            {
                cout << "Увы вы проиграли" << endl << endl;
            }
        }
        else if(enter == 'n' || enter == 'N')
        {
            cout << endl  << "Вы забрали " << balance << " монет" ;
            break;
        }
        else
        {
            cout << endl << "Error" <<
                endl;
        }
    }
    if (balance <= 19)
    cout << "У вас заночились монеты для прокрута" ;
}

