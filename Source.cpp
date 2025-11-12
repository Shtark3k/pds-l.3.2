#include <iostream>
#include <vector>
#include <iomanip>
#include <clocale>
#include <cstdlib> // Для system()

using namespace std;

void обчислити_розміщення() {
    

    int n;
    int r;

    // 2) Ввести значення n та r; (OUTPUT IN ENGLISH)
    cout << "2) Enter n (Total number of items): ";
    cin >> n;
    cout << "   Enter r (Items selected for placement): ";
    cin >> r;

    // Перевірка вхідних даних (Error message in English)
    if (n < 0 || r < 0 || r > n) {
        cerr << "\nError: Invalid input. Must be 0 <= r <= n.\n";
        return;
    }

    // Використовуємо 'long long' для факторіалів.
    long long P1; // Чисельник: n!
    long long P2; // Знаменник: (n-r)!
    double A;     // Кількість розміщень: A = P1 / P2

    // --- 3) Обчислити значення чисельника (P1 = n!) ---
    P1 = 1;
    for (int i = 1; i <= n; i++) {
        P1 *= i;
    }

    // --- 4) Обчислити значення знаменника (P2 = (n-r)!) ---
    P2 = 1;
    int diff = n - r;

    for (int i = 1; i <= diff; i++) {
        P2 *= i;
    }

    // --- 5) Обчислюємо кількість усіх розміщень без повторень A:= P1 / P2 ---
    A = (double)P1 / P2;

    // --- 6) Вивести на екран результат (ALL OUTPUT IN ENGLISH/LATIN) ---
    cout << "\n=================================================\n";
    cout << "Permutations without Repetition (A_n^r) Calculation\n";
    cout << "=================================================\n";

    cout << "Input Parameters: \n";
    cout << "  n (Total items) = " << n << "\n";
    cout << "  r (Items selected) = " << r << "\n";
    cout << "  (n-r) = " << diff << "\n";

    cout << "\nIntermediate Results: \n";
    cout << "  Numerator P1 (n!) = " << P1 << "\n";
    cout << "  Denominator P2 ((n-r)!) = " << P2 << "\n";

    cout << "\nFinal Result:\n";
    cout << "  A_" << n << "^" << r << " = P1 / P2 = " << fixed << setprecision(0) << A << "\n";
}

int main() {
 
    system("chcp 65001 > nul");

    cout << "1) Start of A_n^r Permutation calculation program.\n";

    обчислити_розміщення();

    cout << "\n7) End of program.\n";

    return 0;
}