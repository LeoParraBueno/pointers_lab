#include <iostream>
#include "main.h"

int main() {

    int lab_to_execute = 0;

    std::cout << "Enter the lab number to execute:\n";
    std::cout << "-> 1 = Lab 1: " << LAB_1 << std::endl;
    std::cout << "-> 2 = Lab 2: " << LAB_2 << std::endl;
    std::cout << "-> 3 = Lab 3: " << LAB_3 << std::endl;
    std::cout << "-> 4 = Lab 4: " << LAB_4 << std::endl;
    std::cout << "-> 5 = Lab 5: " << LAB_5 << std::endl;
    std::cin >> lab_to_execute;
    std::cout << std::endl << "LABORATORY " << lab_to_execute << ": ";

    switch (lab_to_execute) {
    case 1:
        std::cout << LAB_1 << std::endl << std::endl;
        lab1_basics_main();
        break;
    case 2:
        std::cout << LAB_2 << std::endl << std::endl;
        lab2_arrays_pointers_as_parameters_main();
        break;
    case 3:
        std::cout << LAB_3 << std::endl << std::endl;
        lab3_character_arrays_and_pointers_main();
        break;
    case 4:
        std::cout << LAB_4 << std::endl << std::endl;
        lab4_2D_arrays_main();
        break;
    case 5:
        std::cout << LAB_5 << std::endl << std::endl;
        lab5_multi_dim_arrays_main();
        break;
    default:
        std::cout << "NO LAB CHOOSEN";
    }

    std::cout << "\n\nEnter any key to finish the program";
    system("pause>0");
    return 0;
}

