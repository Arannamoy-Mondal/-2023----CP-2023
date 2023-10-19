
def yes_or_no(t, test_cases):
    results = []
    for s in test_cases:
        if s.lower() == 'yes':
            results.append('YES')
        else:
            results.append('NO')
    return results

t = int(input().strip())
test_cases = [input().strip() for _ in range(t)]
print('\n'.join(yes_or_no(t, test_cases)))
