/*The Class header file for main.cpp*/
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

class Board
{//the class tracks the game and the winner
    char positionsSelected[16];
    char winner;
    
public:
    /*This is another way of doing methods in classes. 
    Instead of listing the methods in the class, 
    Then defining them afterwards, the methods are 
    defined within the class definition. 
    The downside of this method is: it is not immediately
    clear what methods are in the class. 
    */
    Board()
    {//sets the board to blanks and the winner to 'z'
        //std::cout<<"Creating a board\n";
        winner = 'z'; //not determined or tie
        
        for(int i = 0; i < 16; i++)
        {
            positionsSelected[i] = '_';
        }
    }
    
    
    char* getPositions(void)
    {//return all the positions on the board
        return positionsSelected;
    }
    
    
    int setPosition(int gridNumber, char user)
    {//set a given position to x or o
        {
            if(positionsSelected[gridNumber] == '_')
            {
                positionsSelected[gridNumber] = user;
                return 0;
            }
            else
            {
                //cout<<"That position is taken\n";
                return -1;
            }
        }
        return 0;
    }
    
    char checkRows()
    {//check the rows for a winner
        int rows = 0;
        int columns = 0;
        int fourInRowX = 0;
        int fourInRowO = 0;
        
        //Check rows for a winner
        for(int rows = 0; rows<16; rows=rows+4)
        {
            for(int i = 0; i < 4; i++)
            {
                if(positionsSelected[i + rows] == 'x')
                    fourInRowX++;
                if(positionsSelected[i + rows] == 'o')
                    fourInRowO++;
            }
            if(fourInRowX == 4)
            {
                //cout<<"ROWS X won\n";
                winner = 'x';
                return 'x';
            }
            if(fourInRowO == 4)
            {
                //cout<<"ROWS O won\n";
                winner = 'o';
                return 'o';
            }
            fourInRowX = 0;
            fourInRowO = 0;
        }
        return 'z';
    }
    
    char checkColumns()
    {//check the columns for a winner
        int rows = 0;
        int columns = 0;
        int fourInRowX = 0;
        int fourInRowO = 0;
        
        //Check columns for a winner
        for(int columns = 0; columns<4; columns++)
        {
            for(int i = 0; i < 16; i= i + 4)
            {
                if(positionsSelected[i + columns] == 'x')
                    fourInRowX++;
                if(positionsSelected[i + columns] == 'o')
                    fourInRowO++;
            }
            if(fourInRowX == 4)
            {
                //cout<<"COLUMNS X won\n";
                winner = 'x';
                return 'x';
            }
            if(fourInRowO == 4)
            {
                //cout<<"COLUMNs O won\n";
                winner = 'o';
                return 'o';
            }
            fourInRowX = 0;
            fourInRowO = 0;
        }
        return 'z';
    }
    
    char checkDiagonals()
    {//check the diagonals for a winner
        char winner = 'z';
        int fourInRowX = 0;
        int fourInRowO = 0;
        
        //check left to right diagonal
        for(int i = 0; i < 16; i=i+5)
        {
            if(positionsSelected[i] == 'x')
                fourInRowX++;
            if(positionsSelected[i] == 'o')
                fourInRowO++;
        }
        
        //check right to left diagonal
        if(fourInRowO != 4 and fourInRowX != 4)
        {
            fourInRowX = 0;
            fourInRowO = 0;
            for(int i = 3; i < 15; i= i+3)
            {
                if(positionsSelected[i] == 'x')
                    fourInRowX++;
                if(positionsSelected[i] == 'o')
                    fourInRowO++;
            }
        }

        if(fourInRowX == 4)
        {
            //cout<<"DIAGONALS X won\n";
            winner = 'x';
            return winner;
        }
        if(fourInRowO == 4)
        {
            //cout<<"DIAGONALS O won\n";
            winner = 'o';
            return winner;
        }
        fourInRowX = 0;
        fourInRowO = 0;
        return winner;
    }

    char determineWinner()
    {//if 4 in a row, then there is a winner
        char winner = 'z';
        winner =  checkRows();
        if(winner == 'z')
            winner = checkColumns();
        if(winner =='z')
            winner = checkDiagonals();
        return winner;
    }
    
};
