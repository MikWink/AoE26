def get_puzzle_input(puzzle_input):
    data = []
    with open(puzzle_input, "r") as f:
        for l in f:
            data.append(l.strip())
            
    return data