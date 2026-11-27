#include <fstream>
#include <list>

using namespace std;

namespace utils {
    list<string> get_input_from_file(string path){
        string input_line;
        list<string> puzzle_data;

        ifstream PuzzleInput("puzzle_inputs/" + path);

        while (getline(PuzzleInput, input_line)) {
            puzzle_data.push_back(input_line);
        }

        PuzzleInput.close();

        return puzzle_data;
    }
}