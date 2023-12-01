#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int> > matrix(3, std::vector<int>(4, 0));
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    getchar();
    return 0;
}