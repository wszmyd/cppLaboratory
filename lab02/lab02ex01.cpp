#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using std::cin, std::cout, std::endl, std::vector;

int calculate_sum(const vector<vector<int>>& matrix);

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int rows {}, cols {};

    cout << "Enter a number of rows: ";
    cin >> rows;
    cout << "Enter a number of columns: ";
    cin >> cols;

    vector <vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            matrix [i] [j] = rand() % 10;
        }
    }

    cout << "Generated matrix:\n";

    for (auto& row : matrix)
    {
        for (auto& element : row)
        {
            cout << element << " ";
        }
        cout << "\n";
    }

    cout << "Sum of elements in even columns or odd rows: " << calculate_sum(matrix) << endl;

    
    return 0;
}

int calculate_sum(const vector<vector<int>>& matrix)
{
    int sum = 0;

    for (int i = 0; i < matrix.size(); ++i)
    {
        for (int j = 0; j < matrix[0].size(); ++j)
        {
            if (i % 2 != 0 || j % 2 == 0)
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}