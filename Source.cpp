#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Distance, km: ";
    double s;
    cin >> s;
    cout << "Time, hh mm: ";
    int hh, mm;
    cin >> hh >> mm;
    s *= 1000;
    const auto t = hh * 3600 + mm * 60;
    const auto v = s / t * 3.6;
    cout << fixed << setprecision(1) << v << " km/h\n";
    system("pause");
}




#include <iostream>

using namespace std;

int main() {
    int start_hours, start_minutes, start_seconds;
    int end_hours, end_minutes, end_seconds;

    cout << "Введите время начала аренды (часы минуты секунды): ";
    cin >> start_hours >> start_minutes >> start_seconds;

    cout << "Введите время окончания аренды (часы минуты секунды): ";
    cin >> end_hours >> end_minutes >> end_seconds;

    // Преобразование времени в общее количество секунд
    int start_total_seconds = start_hours * 3600 + start_minutes * 60 + start_seconds;
    int end_total_seconds = end_hours * 3600 + end_minutes * 60 + end_seconds;

    // Вычисление разницы во времени в секундах
    int total_seconds = end_total_seconds - start_total_seconds;

    // Преобразование разницы в секундах в минуты
    int total_minutes = total_seconds / 60;

    // Расчет стоимости
    const int cost_per_minute = 2;
    int total_cost = total_minutes * cost_per_minute;

    cout << "Общая стоимость аренды: " << total_cost << " гривны." << endl;

    return 0;
}








#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distance, consumptionPer100km;
    double price1, price2, price3;

    cout << "Введите расстояние поездки (км): ";
    cin >> distance;

    cout << "Введите расход бензина на 100 км: ";
    cin >> consumptionPer100km;

    cout << "Введите стоимость первого вида бензина: ";
    cin >> price1;

    cout << "Введите стоимость второго вида бензина: ";
    cin >> price2;

    cout << "Введите стоимость третьего вида бензина: ";
    cin >> price3;

    // Вычисляем общий расход бензина
    double totalConsumption = distance / 100 * consumptionPer100km;

    // Вычисляем стоимость поездки для каждого вида бензина
    double cost1 = totalConsumption * price1;
    double cost2 = totalConsumption * price2;
    double cost3 = totalConsumption * price3;

    // Выводим таблицу
    cout << fixed << setprecision(2); // Округляем до двух знаков после запятой
    cout << "+-----------------+----------------+" << endl;
    cout << "| Вид бензина    | Стоимость (руб.) |" << endl;
    cout << "+-----------------+----------------+" << endl;
    cout << "| Первый         | " << setw(15) << cost1 << " |" << endl;
    cout << "| Второй         | " << setw(15) << cost2 << " |" << endl;
    cout << "| Третий         | " << setw(15) << cost3 << " |" << endl;
    cout << "+-----------------+----------------+" << endl;

    return 0;
}








 
