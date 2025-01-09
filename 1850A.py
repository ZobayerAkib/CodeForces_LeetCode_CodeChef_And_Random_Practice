def solve():
    a, b, c = map(int, input().split())

    print("Yes" if (a + b >= 10) or (b + c >= 10) or (a + c >= 10) else "No")


def main():
    t = int(input())  # Number of test cases
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
