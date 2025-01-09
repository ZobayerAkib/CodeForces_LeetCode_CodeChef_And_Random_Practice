def solve():
    s = input()
    s2 = s.replace("WUB", " ")
    s2 = " ".join(s2.split())
    print(s2)



def main():
    #t = int(input().strip())  # Number of test cases
    #for _ in range(t):
        solve()

if __name__ == "__main__":
    main()