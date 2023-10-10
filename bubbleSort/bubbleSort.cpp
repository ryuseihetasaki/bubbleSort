// bubbleSort.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int empty = 0;
    int size = 0;
    int* array = 0;

    cout << "配列の数の値を入力せよ >" << flush;
    cin >> size;

    array = new int[size];

    for (int i = 0; i < size; ++i)
    {
        array[i] = rand() % 99 + 1;
    }

    cout << "選択された配列の数は" << size << "で中身を表示します。" << endl;

    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "バブルソートされた配列はこのようになりました。" << endl;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j + 1] < array[j])
            {
                empty = array[j];
                array[j] = array[j + 1];
                array[j + 1] = empty;
            }
        }
    }

    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }

    delete[] array;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
