def find_combinations(target_sum, num_variables):
    def find_combinations_helper(target, num_vars, current_combination, all_combinations):
        if num_vars == 0:
            if target == 0:
                all_combinations.append(current_combination)
            return

        for i in range(target + 1):
            new_combination = current_combination + [i]
            find_combinations_helper(target - i, num_vars - 1, new_combination, all_combinations)

    combinations = []
    find_combinations_helper(target_sum, num_variables, [], combinations)
    return combinations

def generate_combinations_array(max_n, num_vars):
    all_combinations_array = []

    for n in range(max_n + 1):
        combinations = find_combinations(n, num_vars)
        all_combinations_array.append(combinations)

    return all_combinations_array

def main():
    try:
        max_n = int(input("Enter the maximum value of n: "))
        num_vars = int(input("Enter the number of variables (1 to 10): "))

        if num_vars < 1 or num_vars > 10:
            raise ValueError("Number of variables should be between 1 and 10.")

        all_combinations_array = generate_combinations_array(max_n, num_vars)

        print("\nAll combinations for varying n:")
        for n, combinations in enumerate(all_combinations_array):
            print(f"n = {n}:")
            for combination in combinations:
                print(combination)

    except ValueError as e:
        print("Error:", e)
    except Exception as e:
        print("An error occurred:", e)

if __name__ == "__main__":
    main()
