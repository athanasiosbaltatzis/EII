#include <iostream>
#include <string>
using namespace std;

std::string get_input_string()
{
    std::cout << "Geben Sie die Zeichenfolge ein: ";
    std::string input_string;
    std::getline(std::cin, input_string);
    return input_string;
}

// Teil 1
int main() {
    std::string input_string = get_input_string();
    int n = input_string.size();

    for(int i = 0; i < n /2; i++){
        std::swap(input_string[i], input_string[n - i - 1]);
    }

    std::cout << "\n\n" << input_string << "\n\n";
    return 0;
}

// Teil 2

/*
int main(){
    std::string input_string = get_input_string();
    int n = input_string.size();

    int number_of_spaces;
    for(int i = 0; i < n, i++){
        if(input_string[i] == " "){
            number_of_spaces++;
        }
    }

    std::string[number_of_spaces] words;
    for(int i = 0; i < number_of_spaces){

    }
}
*/

 //Teil 3
/*

int main(){
	
}

*/


// Teil 4
/*
int main() {
	
	
}
*/
