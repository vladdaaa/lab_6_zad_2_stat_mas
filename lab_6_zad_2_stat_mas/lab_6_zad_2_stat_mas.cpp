//поменять местами левую и правую части матрицы
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int N, M;

    const size_t MAX_N = 10;
    const size_t MAX_M = 10;
    int array[MAX_M][MAX_N];

    cout << "Введите размер матрицы M*N:\n";
    cin >> M;
    if (M == 0 || M > MAX_M) {
        cerr << "Ошибка: количество должно находиться в диапазоне [1;" << MAX_M << " ]" << endl;
        return 1;
    }

    cin >> N;
    if (N == 0 || N > MAX_N) {
        cerr << "Ошибка: количество должно находиться в диапазоне [1;" << MAX_N << " ]" << endl;
        return 1;
    }
    cout << "Введите набор из " << N << " чисел: ";
    // выводим
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> array[i][j];
        }
        cout << endl;
    }


    // меняем местами
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N / 2; j++)
        {
            int temp = array[i][j];//сщхраняем изначальное значение
            array[i][j] = array[i][j + N / 2];
            array[i][j + N / 2] = temp;
        }
    }



    // опять выводим
    cout << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << array[i][j];
        }
        cout << endl;
    }


}