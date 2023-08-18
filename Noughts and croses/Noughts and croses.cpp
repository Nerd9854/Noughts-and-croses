
#include <iostream>
#include <string>
using namespace std;
char typenum;
int i = 0;
bool corectnum = false;
char turn = 'O'; char Item1 = '1'; char Item2 = '2'; char Item3 = '3'; char Item4 = '4'; char Item5 = '5'; char Item6 = '6'; char Item7 = '7'; char Item8 = '8'; char Item9 = '9';

void board() {
    std::cout << "\n     |     |\n";
    std::cout << "" << "  " << Item1 << "  |  " << Item2 << "  |  " << Item3 << "\n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |\n";
    std::cout << "  " << Item4 << "  |  " << Item5 << "  |  " << Item6 << "\n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |\n";
    std::cout << "  " << Item7 << "  |  " << Item8 << "  |  " << Item9 << "\n";
    std::cout << "     |     |\n";
}
void check(char iswin) {
    if ((Item1 == Item2 && Item2 == Item3) && Item1 == iswin || (Item4 == Item5 && Item5 == Item6) && Item4 == iswin || (Item7 == Item8 && Item8 == Item9) && Item7 == iswin || (Item1 == Item4 && Item4 == Item7) && Item1 == iswin || (Item2 == Item5 && Item5 == Item8) && Item2 == iswin || (Item3 == Item6 && Item6 == Item9) && Item3 == iswin || (Item1 == Item5 && Item5 == Item9) && Item1 == iswin || (Item3 == Item5 && Item5 == Item7) && Item3 == iswin) {
        board();
        std::cout << "\n\nEnd of game " << iswin << " Wins!\n\n";
        i = 10;
    }
}
void avl(int Item, int which_item) {
    if (Item == 'O' || Item == 'X') {
        std::cout << "That is not a avaliable place, try again\n\n";
    }
    else {
        switch (which_item) {
        case 1:
            Item1 = turn;
            break;
        case 2:
            Item2 = turn;
            break;
        case 3:
            Item3 = turn;
            break;
        case 4:
            Item4 = turn;
            break;
        case 5:
            Item5 = turn;
            break;
        case 6:
            Item6 = turn;
            break;
        case 7:
            Item7 = turn;
            break;
        case 8:
            Item8 = turn;
            break;
        case 9:
            Item9 = turn;
            break;
        default:
            break;
        }
        corectnum = true;
    }
}
void question() {
    board();
    while (!corectnum) {
        std::cout << "Type a number of the cell to place a " << turn << ": ";
        typenum = '0';
        std::cin >> typenum;
        switch (typenum) {
        case '1':
            avl(Item1, 1);
            break;
        case '2':
            avl(Item2, 2);
            break;
        case '3':
            avl(Item3, 3);
            break;
        case '4':
            avl(Item4, 4);
            break;
        case '5':
            avl(Item5, 5);
            break;
        case '6':
            avl(Item6, 6);
            break;
        case '7':
            avl(Item7, 7);
            break;
        case '8':
            avl(Item8, 8);
            break;
        case '9':
            avl(Item9, 9);
            break;
        default:
            std::cout << "That is not a option, try again\n";
            break;
        }
    }
    if (turn == 'O') {
        turn = 'X';
    }
    else {
        turn = 'O';
    }
    corectnum = false;
}
int main() {
    while (i < 9) {
        question();
        check('X');
        check('O');
        i++;
    }
}