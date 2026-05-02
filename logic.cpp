#include <iostream>
int main() {
    int x;
    std::cout << "Մուտքագրեք գաղտնի թիվը. ";
    std::cin >> x;
    if (x == 5) {
        std::cout << "Մուտքը թույլատրված է (Ճիշտ թիվ)!" << std::endl;
    } else {
        std::cout << "ՄՈՒՏՔԸ ՄԵՐԺՎԱԾ Է (Սխալ թիվ)!" << std::endl;
    }
    return 0;
}
