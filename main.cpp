#include<iostream>
#include<cstdlib>
#include<ctime>
#include "function.h"
#include "grid.h"
#include<string>



int main(){

    Life game;
    std::string choice;
    do{   
        print_grid(game);
        updateGrid(game);
        std::cout<<"Do you want to continue? (y/n): ";
        std::cin>>choice;

} while (choice =="y" || choice == "Y");

}
