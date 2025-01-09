def solve():
    n = input().strip()
    n1 = n[::-1]
    result = []

    for i in n1:
        if i == 'p':
            result.append('q')
        elif i == 'q':
            result.append('p')
        else:
            result.append(i)


    print(''.join(result))


def main():
    t = int(input().strip())  # Number of test cases
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
