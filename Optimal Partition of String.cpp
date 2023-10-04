#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int minSplit(string s) {
    int n = s.length();
    int count = 0;  // Количество подстрок
    unordered_set<char> uniqueChars;  // Уникальные символы в текущей подстроке

    for (int i = 0; i < n; ++i) {
        if (uniqueChars.count(s[i]) > 0) {
            // Если символ уже встречался, заканчиваем текущую подстроку
            count++;
            uniqueChars.clear();
        }
        uniqueChars.insert(s[i]);
    }

    // Добавляем последнюю подстроку (если она не пуста)
    if (!uniqueChars.empty()) {
        count++;
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "Russian");
    string s;
    cout << " Введите строку - ";
    cin >>  s;
    int result = minSplit(s);
    cout << "Минимальное количество подстрок: " << result << endl;

    return 0;
}




