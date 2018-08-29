def main():
    n=int(input())
    for i in range(n):
        input()
        a,b,c=list(map(int,input().split('/')))
        d,e,f=list(map(int,input().split('/')))
        if d>a:
            b=b-1
        if e>b:
            c=c-1
        res=c-f
        if res<0:
            print("Case #"+str(i+1)+": Invalid birth date")
        elif res>130:
            print("Case #"+str(i+1)+": Check birth date")
        else:
            print("Case #"+str(i+1)+": "+str(res))

if __name__=='__main__':
    main()