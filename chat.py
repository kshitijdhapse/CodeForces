def find_combinations(n, num_variables):
    def backtrack(target, k, current_combination):
        if target == 0 and k == 0:
            combinations.append(list(current_combination))
            return
        if target < 0 or k == 0:
            return

        start = 1 if not current_combination else current_combination[-1]
        for i in range(start, target + 1):
            current_combination.append(i)
            backtrack(target - i, k - 1, current_combination)
            current_combination.pop()

    combinations = []
    backtrack(n, num_variables, [])
    return combinations

no = 4
num_variables = 5
results = {}

for i in range(1, no + 1):
    n = i
    if n <= num_variables:
        result = [[n - j if j < n else 0 for j in range(num_variables)]]
    else:
        result = find_combinations(n, num_variables)
    results[n] = result

# Print the results
# print(results)
for n, combinations in results.items():
    print(f"n = {n}")
    for combination in combinations:
        print(combination)
