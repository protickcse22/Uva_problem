def main():
    n=int(input())
    for i in range(n):
        a = int(input())
        b = int(input())
        sum=0
        for j in range(a,b+1):
            if j%2!=0:
                sum+=j
        print("Case "+str(i+1)+": "+str(sum))    
if __name__=='__main__':
    main()
