def main():
    n=int(input())
    for i in range(n):
        f=int(input())
        sum=0
        for j in range(f):
            a,b,c=list(map(int,input().split()))
            sum+=(a*c)
        print(sum)

if __name__=='__main__':
    main()