#include <iostream>

enum class months {

    January = 1,
    Feruary,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};


int main(int argc, char** argv)
{

    setlocale(LC_ALL, "Russian");

    int in = 1;

    do
    {

        std::cout << "Введите номер месяца: ";

        std::cin >> in;

        months month = static_cast<months>(in);

        switch (static_cast<int>(month))
        {
        case 0:

            std::cout << "До свидания!";
            break;

        case 1:

            std::cout << "Январь";
            break;

        case 2:

            std::cout << "Февраль";
            break;
        case 3:

            std::cout << "Март";
            break;

        case 4:

            std::cout << "Апрель";
            break;

        case 5:

            std::cout << "Май";
            break;

        case 6:

            std::cout << "Июнь";
            break;

        case 7:

            std::cout << "Июль";
            break;

        case 8:

            std::cout << "Август";
            break;

        case 9:

            std::cout << "Сентябрь";
            break;

        case 10:

            std::cout << "Октябрь";
            break;
        case 11:

            std::cout << "Ноябрь";
            break;

        case 12:

            std::cout << "Декабрь";
            break;

        default:
            break;
        };

        std::cout << std::endl;

    } while (in != 0);




}
