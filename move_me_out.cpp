#include <iostream>
#include "move_me_out.h"

void todo_move_me_out() {
	std::cout << "This function should be located in the separated source file" << std::endl;
	std::cout << "function in"<<__FILE__ << std::endl;
}
