#pragma once
#include<vector>

class Life
{   
    public:
        static constexpr int Grid_Width = 10;
        static constexpr int Grid_Height = 10;
        //int Grid [Grid_Width][Grid_Height]; //2-D array to hold the grids
        std::vector<std::vector<bool>>  Grid; //2-D vector  to hold boolean values
    
    public:
        Life();
        void initializegrid();
};