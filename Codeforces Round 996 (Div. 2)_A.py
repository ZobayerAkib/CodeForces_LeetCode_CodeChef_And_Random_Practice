def solve():
    n,a,b=map(int,input().split())

    if (abs(b-a)-1) % 2 != 0:
        print("Yes")
    else:
        print("No")


def main():
    t = int(input())  # Number of test cases
    for _ in range(t):
        solve()
        # print()  # Move to the next line after each test case

if __name__ == "__main__":
    main()