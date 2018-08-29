def even(n):
    return n%2==0
def main():
    n=int(input())
    for i in range(n):
        sum,diff=list(map(int,input().split()))
        if sum<diff:
            print('impossible')
        elif (even(sum) and even(diff)) or (not even(sum) and not even(diff)):
            print((sum+diff)//2,(sum-diff)//2 )
        elif ((even(sum)) and (not even(diff)) or (even(diff)) and (not even(sum)) ):
            print('impossible')

if __name__=='__main__':
    main()
