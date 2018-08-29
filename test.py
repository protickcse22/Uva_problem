def main():
    def search(A,key):
        n=len(A)
        left,rigth=0,n-1
        found=False
        while left<=rigth:
            mid=left+rigth//2
            if A[mid]==key:
                found=True
                break
            if A[mid]>key:
                rigth=mid-1
            else:
                left=mid+1
            found=False
        return found
    arr=[10,20,30,40,50,60,70]
    key=1
    print(search(arr,key))
if __name__=='__main__':
    main()