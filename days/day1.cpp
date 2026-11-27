#include <list>
#include <string>
#include <iostream>

#include <utils.h>

using namespace std;

namespace day1 {
    int part1(){
        list<string> input = utils::get_input_from_file("day1.txt");

        int clicks;
        char direction;
        int dial_position = 50;
        int zero_count = 0;

        for (const auto& line : input) {
            cout << line << endl;

            direction = line[0];
            clicks = stoi(line.substr(1));

            bool flipped = false;

            if (direction == 'L'){
                dial_position -= clicks;

                while (dial_position < 0){
                    dial_position += 100;
                    zero_count++;
                    flipped = true;
                }

            } else if (direction == 'R'){
                dial_position += clicks;

                while (dial_position >= 100){
                    dial_position -= 100;
                    zero_count++;
                    flipped = true;
                }
            }

            if (flipped == false && dial_position == 0){
                zero_count++;
            }
            
            cout << dial_position << " zero_count: " << zero_count << endl;

        }

        return zero_count;
    }
}