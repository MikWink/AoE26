from utils import get_puzzle_input
import days.day_1 



def main():
    run_day(days.day_1, 1, True)
    

def run_day(f, n, debug=False):
    print(f"========= DAY {n} =========\n")
    puzzle_input = get_puzzle_input(f"days/day_{n}_input.txt")
    print("PART 1:")
    print(f.part1(puzzle_input, debug))
    print("\nPART 2:")
    print(f.part2(puzzle_input, debug))
    print("")
    
    
if __name__ == "__main__":
    main()