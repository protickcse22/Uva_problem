def main():
    while True:
        try:
            n=int(input())
            if n<0:
                break
            if n==0:
                print(n,end="")
            arr=[1]*10000
            i=0
            
            while(n>0):
                x=n%3
                arr[i]=x
                n=n//3
                i+=1
            #for j in range(i-1,-1,-1):
            for j in reversed(range(i)):
                print(arr[j],end="")
            print()
        except EOFError:
            pass
    
if __name__=='__main__':
    main()