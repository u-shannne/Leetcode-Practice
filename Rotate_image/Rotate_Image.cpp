#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    int temp;
    int s = 0;
    int b = matrix.size() - 1;
    while (b > matrix)
    {
        for (int i = s; i < b; i++)
        {
            temp = matrix[s][i];
            matrix[s][i] = matrix[b - (i - s)][s];
            matrix[b - (i - s)][s] = matrix[b][b - (i - s)];
            matrix[b][b - (i - s)] = matrix[i][b];
            matrix[i][b] = temp;
        }
        s++;
        b--;
    }
    for (auto row : matrix)
    {
        for (auto ele : row)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}