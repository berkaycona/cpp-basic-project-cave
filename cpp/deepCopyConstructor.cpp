#include <iostream>


int main()
{
    {
        std::cout << "SHALLOW COPY" << "---------" << std::endl;
        // Shallow Copy
        int array[5] = { 1, 2, 3, 4, 5 };

        int* shallow = array;

        for (int i = 0; i < 5; i++)
        {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
        shallow[2] = 100;

        for (int i = 0; i < 5; i++)
        {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;

        // Deep Copy
        std::cout << std::endl << "DEEP COPY" << "---------" << std::endl;
        int* deep = (int*)malloc(sizeof(int) * 5);
        for (int i = 0; i < 5; i++)
        {
            deep[i] = array[i];
        }

        deep[4] = 500;

        for (int i = 0; i < 5; i++)
        {
            std::cout << array[i] << " ";//Even after we changed the 3rd indexes value, our initial array's value didn't change.
        }
        std::cout << std::endl;
    }
    
    

}