# '''
# protick kumer Dey
# Dept. of CSE
# Jahangirnagar University, Savar, Dhaka-1342

# '''

# if __name__=='__main__':

#     t=int(input())
#     for i in range(0,t):
#         a,b=map(int,input().split())
#         if a>b:
#             print('>')
#         elif a==b:
#             print('=')
#         else:
#             print('<')


# arr=[]
# p=0
# for i in range(2):
#     for j in range(2):
#         arr.append([])
#         arr[p]=i,j
#         p+=1
# print(arr)


n=int(input())
arr=[]
sum=0
for i in range(n):
    num=int(input().split())
    #arr.append(num)
    sum+=num
print(sum)
