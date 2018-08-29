def main():
    try:
        while True:
            a=int(input())
            if a<0:
                break
            b=int((a*(a+1))//2)+1
            print(b)
    except EOFError:
        pass
   
if __name__=='__main__':
    main()