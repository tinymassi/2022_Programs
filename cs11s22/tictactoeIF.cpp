//Massimo Ginella
//massimoginella12@gmail.com
//CS-11-02 Introduction to C++
//Assignment #5
//12/3/22
//The purpose of this program is to play a game of tictactoe

#include <iostream> 

using namespace std;

class TicTacToe
{
	public:
		TicTacToe();
		void play();
	private:
		char sigil[3];
		int board[9];
		int winner();
		bool isGameOver();
		void drawBoard();
		bool isMoveLegal(int row, int column);
		
};


// board[9] = [0, 0, 0, 0, 0, 0, 0, 0, 0];
// sigil[3] = [., X, O];
TicTacToe::TicTacToe()
{

	for(int i = 0; i < 9; i++){
		board[i] = 0;
	}
	
	sigil[0] = '.';
	sigil[1] = 'X';
	sigil[2] = 'O';
	

}

//CHECKS IF THERE IS A WINNER OR NOT
bool TicTacToe::isGameOver()
{

	if (winner() > 0) return true; // if winner function returns 1, then theres a winner
								   // and the game is over hence return true
								  
	for(int i = 0; i < 9; i++){   // if there is a zero in the array board[9], then there 
		if (board[i] == 0){		  // still isnt a winner
			return false;
		}
	}

	return true;
}

// 0 signifies nothing
// 1 signifies X
// 2 signifies O
bool TicTacToe::isMoveLegal(int row, int column){
	if (row <= 2 && row >= 0 && column <= 2 && column >= 0){
		if (board[row * 3 + column] == 0){
			return true;
		}
	}
	return false;
}



int TicTacToe::winner()
{
	for (int i = 0; i <= 8; i++){
		if ((i == 0 || i == 3 || i == 6) && board[i] == board[i+1] && board[i] == board[i+2]){ // Checks rows
			if (board[i] == 1) return 1;
			else if (board[i] == 2) return 2;
		}
		if ((i == 0 || i == 1 || i == 2) && board[i] == board[i+3] && board[i] == board[i+6]){ //Checks columns
			if (board[i] == 1) return 1;
			else if (board[i] == 2) return 2;
		}
		if (i == 0 && board[i] == board[i + 4] && board[i] == board[i + 8]){ //Checks left to right diag
			if (board[i] == 1) return 1;
			else if (board[i] == 2) return 2;
		}
		if (i == 2 && board[i] == board[i + 2] && board[i] == board[i + 4]){ //Checks right to left diag
			if (board[i] == 1) return 1;
			else if (board[i] == 2) return 2;
		}
	}
	return -1;
}

//starter stub for drawBoard function
//using this board as a guide
//draw the board using "." for empty squares
//or 'X' or 'O' for player 1 or player 2
void TicTacToe::drawBoard()
{

	cout << "  0 1 2" << endl;
	cout << "0 " << sigil[board[0]] << " " << sigil[board[1]] << " " << sigil[board[2]] << endl;
	cout << "1 " << sigil[board[3]] << " " << sigil[board[4]] << " " << sigil[board[5]] << endl;
	cout << "2 " << sigil[board[6]] << " " << sigil[board[7]] << " " << sigil[board[8]] << endl;

}



//Function that utilizes while loop to keep game going while the game is not over
//When the game is over, the while loop is exited and the winner message is output to terminal
void TicTacToe::play()
{
	int player = 1;
	while(!isGameOver()) // if the game is not over do this
	{
		int row;
		int column;
		
		cout << "Player " << player << "(" << sigil[player] << "), your move? "; //Outputs players turn based on if they
		cin >> row >> column;													 //are 'O' or 'X'
		bool legalMove = isMoveLegal(row, column);								 //Calls isMoveLegal funct to see if the
																				 //player's move is valid based on their 
		while(!legalMove)														 //input of row and column
		{
			
			cout << "Move invalid due to overlapping on the board or out of bound input." << endl; 
			cout << "Please try again." << endl;
			cout << "Player " << player << "(" << sigil[player] << "), your move? "; //If the move of player #? is still invalid
			cin >> row >> column;													 //it asks the player to input their row and column once again
			legalMove = isMoveLegal(row, column);									 //isMoveLegal checks if move is valid
		}		
		
		board[row * 3 + column] = player; //Puts the players input in the 1D array board[]
		drawBoard();					  //Player gets sent to drawBoard() funct to put input in area of board?
		player = 3 - player;			  
	}
	
	if (winner() > 0){
		cout << "Player " << winner() << " wins!" << endl;
	} else {
		cout << "Tie game." << endl;
	}

}


int main()
{
	TicTacToe game;
	game.play();
	
	return 0;
}
