#include <iostream>

using namespace std;
int arr(int n){
//Создадим массив
    int mas [n];
    
//Заполним массив "рандомными" числами от 0 до 99 и выведем на экран каждый элемент
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 400;
        cout << i << " элемент массива: " << mas[i] << endl;
    }
    
}
int main()
{
    int n;
    setlocale(LC_ALL,"Russian");
    cout << "Укажите количество элементов в массиве" << endl;
    cout << "Хм.. Пускай будет ";
    cin >> n;
    cout << endl;
    arr(n);
    cout << endl;
    cout << "Готово! Массив создан." << endl;    
    return 0;
}
