def solve():
    stra = input()
    print(stra[0]+stra[1::2])


def main():
    t = int(input().strip())  # Number of test cases
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()