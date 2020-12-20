from array import*

def split_arr(a,n):
    b=a[:2]
    a=a[2:]+b[::]
    return a


n=int(input("size of array"))
a=array('i',[])
for i in range(0,n):
    x=int(input("enter element of array"))
    a.append(x)

a=split_arr(a,n)
for i in range(0,n):
    print(a[i],end=" ")