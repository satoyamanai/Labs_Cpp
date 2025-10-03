#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main() {
    // Задаём количество наблюдений и количество признаков
    const int n_samples = 100;      // число обучающих примеров
    const int n_features = 3;       // число признаков (без учета свободного члена)

    // Создаем матрицу X размером (n_samples x (n_features+1))
    // +1 для учета столбца единиц (свободного члена)
    vector<vector<double>> X(n_samples, vector<double>(n_features + 1));

    // Вектор целевой переменной y
    vector<double> y(n_samples);

    // Настройка генератора случайных чисел
    random_device rd;
    mt19937 generator(rd());
    uniform_real_distribution<double> dist(-10.0, 10.0);

    // Заполнение матрицы X и вектора y случайными значениями
    for (int i = 0; i < n_samples; ++i) {
        // Первый столбец (константа для свободного члена)
        X[i][0] = 1.0;
        // Остальные признаки
        for (int j = 1; j < n_features + 1; ++j) {
            X[i][j] = dist(generator);
        }
        // Генерируем целевую переменную
        y[i] = dist(generator);
    }

    // Вывод сгенерированной матрицы X
    cout << "Матрица X:" << endl;
    for (int i = 0; i < n_samples; ++i) {
        for (int j = 0; j < n_features + 1; ++j) {
            cout << X[i][j] << " ";
        }
        cout << "\n";
    }

    // Вывод вектора y
    cout << "\nВектор y:" << endl;
    for (int i = 0; i < n_samples; ++i) {
        cout << y[i] << "\n";
    }

    return 0;
}