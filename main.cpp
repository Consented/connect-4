#include <iostream>
#include <vector>
#include <unordered_map>

// 2d grid, use pointers for free slot, take input 1-7

void display(const std::vector<std::vector<int>> &board, const std::unordered_map<int, char> &symbols){

	for (int i = 0; i < board.size(); i++){
		for (int j = 0; j < board[i].size(); j++){
			std::cout << symbols.at(board[i][j]);
		}
		std::cout << "\n";
	}


}

int main(){

	std::vector<std::vector<int>> board (7, std::vector<int> (7, 0));
	const std::unordered_map<int, char> symbols {{0,'.'}, {1, 'X'}, {2, 'O'}};
	

	display(board, symbols);
}