#include <iostream>
using namespace std;

int main()
{
    long n; 
    cin >> n;
    /* имеются числа 1, 2, ..., n - 1, n - последовательность натуральных чисел от 1 до n. 
    По формуле нахождения суммы элементов арифм прогрессии имеем:
    long sum_i = (1 + n) * n / 2; - сумма всех мисок
    однозначно делится на 2 тк это два послед числа
    полученная сумма sum_i должна делиться на 2 человек поровну, а значит должна делиться на 2
    тогда (1 + n) * n должно делиться на 4 */
    if (n % 4 != 0 && (n + 1) % 4 != 0) { cout << "NO\n"; }
    else {
        cout << "YES\n";
        if (n % 4 == 0) {
            cout << "For Petya: " << n / 2 << endl;
            for (long i = 1; i < n / 2; i += 2) { cout << i << " "; }
            for (long i = n / 2 + 2; i <= n; i += 2) { cout << i << " "; }
            cout << endl;
            cout << "For Masha: " << n / 2 << endl;
            for (long i = 2; i < n / 2 + 1; i += 2) { cout << i << " "; }
            for (long i = n / 2 + 1; i < n; i += 2) { cout << i << " "; }
            cout << endl;
        }
        else if ((n + 1) % 4 == 0) {
            cout << "For Petya: " << n / 2 + 1 << endl;
            for (long i = 1; i < n / 2 + 1; i += 2) { cout << i << " "; }
            for (long i = n / 2 + 1; i < n; i += 2) { cout << i << " "; }
            cout << endl;
            cout << "For Masha: " << n / 2 << endl; // нечетный int делится на 2 нацело
            for (long i = 2; i < n / 2; i += 2) { cout << i << " "; }
            for (long i = n / 2 + 2; i <= n; i += 2) { cout << i << " "; }
            cout << endl;
        }
    }
}
