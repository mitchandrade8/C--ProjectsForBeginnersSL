
#include <iostream>

int main() {

    int quantity;
    int choice;

    // Quanity of these items:
    int QuantRooms = 0, QuantPasta = 0, QuantBurgers = 0, QuantNoodles = 0, QuantShakes = 0, QuantChicken = 0;

    // Sold Number of the items:
    int SoldRooms = 0, SoldPasta = 0, SoldBurgers = 0, SoldNoodles = 0, SoldShakes = 0, SoldChicken = 0;

    // Total price for items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    std::cout << "\n\t Quantity of items we have";
    std::cout << "\n Rooms available: ";
    std::cin >> QuantRooms;
    std::cout << "\n Quantity of pasta: ";
    std::cin >> QuantPasta;
    std::cout << "\n Quantity of burger: ";
    std::cin >> QuantBurgers;
    std::cout << "\n Quantity of noodles: ";
    std::cin >> QuantNoodles;
    std::cout << "\n Quantity of shakes: ";
    std::cin >> QuantShakes;
    std::cout << "\n Quantity of chicken-roll: ";
    std::cin >> QuantChicken;

    // MARK: - Creating a Menu 

    std::cout << "\n\t\t\t Please select from the menu options ";
    std::cout << "\n\n1) Rooms";
    std::cout << "\n2) Pasta";
    std::cout << "\n3) Burgers";
    std::cout << "\n4) Noodles";
    std::cout << "\n5) Shake";
    std::cout << "\n6) Chicken-roll";
    std::cout << "\n7) Information regarding sales and collection ";
    std::cout << "\n8) Exit";

    std::cout << "\n\n Please Enter your choice! ";
    std::cin >> choice;

    switch (choice) {
        case1:
            std::cout << "\n\n Enter the number of rooms you want: ";

            std::cin >> quantity;
            if (QuantRooms - SoldRooms >= quantity) {
                SoldRooms = SoldRooms + quantity;
                Total_rooms = Total_rooms + (quantity * 1200);
                std::cout << "\n\n\t\t" << quantity << "room/rooms have been alloted to you!";
            } else {
                std::cout << "\n\tOnly" << QuantRooms - SoldRooms << "Rooms remaining in hotel ";
                break;
            }
            
        case2:
            std::cout << "\n\n Enter Pasta Quantity: ";

            std::cin >> quantity;
            if (QuantPasta - SoldPasta >= quantity) {
                SoldPasta = SoldPasta + quantity;
                Total_pasta = Total_pasta + (quantity * 25);
                std::cout << "\n\n\t\t" << quantity << "pasta/pastas have been ordered!";
            } else {
                std::cout << "\n\tOnly" << QuantPasta - SoldPasta << "Pasta remaining in hotel ";
                break;
            }

        case3:
            std::cout << "\n\n Enter Burger Quantity: ";

            std::cin >> quantity;
            if (QuantBurgers - SoldBurgers >= quantity) {
                SoldBurgers = SoldBurgers + quantity;
                Total_burger = Total_burger + (quantity * 40);
                std::cout << "\n\n\t\t" << quantity << "burger/burgers have been ordered!";
            } else {
                std::cout << "\n\tOnly" << QuantBurgers - SoldBurgers << "Burgers remaining in hotel ";
                break;
            }

        case4:
            std::cout << "\n\n Enter Noodle Quantity: ";

            std::cin >> quantity;
            if (QuantNoodles - SoldNoodles >= quantity) {
                SoldNoodles = SoldNoodles + quantity;
                Total_noodles = Total_noodles + (quantity * 22);
                std::cout << "\n\n\t\t" << quantity << "noodle/noodles have been ordered!";
            } else {
                std::cout << "\n\tOnly" << QuantNoodles - SoldNoodles << "Noodles remaining in hotel ";
                break;
            }

        case5:
            std::cout << "\n\n Enter Shake Quantity: ";

            std::cin >> quantity;
            if (QuantShakes - SoldShakes >= quantity) {
                SoldShakes = SoldShakes + quantity;
                Total_shake = Total_shake + (quantity * 40);
                std::cout << "\n\n\t\t" << quantity << "shake/shakes have been ordered!";
            } else {
                std::cout << "\n\tOnly" << QuantShakes - SoldShakes << "Shakes remaining in hotel ";
                break;
            }

        case6:
            std::cout << "\n\n Enter Chicken-roll Quantity: ";

            std::cin >> quantity;
            if (QuantChicken - SoldChicken >= quantity) {
                SoldChicken = SoldChicken + quantity;
                Total_chicken = Total_chicken + (quantity * 50);
                std::cout << "\n\n\t\t" << quantity << "chicken-rolls have been ordered!";
            } else {
                std::cout << "\n\tOnly" << QuantChicken - SoldChicken << "Chicken-roll remaining in hotel ";
                break;
            }
        
        case7:
            

        case8:

    }

    return 0;
}