#interest.py
# principal=1000
# rate=0.05
# year=1
# numyears=5
# while(year<=numyears):
#     principal=principal*(1+rate)
#     # print(year,principal)
#     print(f'{year:>3d} {principal:0.2f}')
#     year+=1

#Operators
#Trying Module on floating point numbers

# print(9.25%2.5)
# print(abs(-5))
# print(divmod(5,2))
# print(round(5.56,0))
# a=10
# b=5
# if a>b:
#     pass
# else:
#     print("Computer says NO")
#Trying continue
# for i in range(0,10):
    # if i==5:
    #     continue
    # print(i)
# x=[1,2,3,4,5,6,7]
# x[0:2]=[3,2,4]
# print(len(x))
# x=" Hello"
# row=[
#     [1,2,3],[4,5,6]
# ]
# total = sum([ int(i) * float(j) for _,i,j in row ])
# print(total)
# tupl=([1,2],[2,4])
# tupl[1][1]=3
# print(tupl[1][1])
# se={[1,2],[1,2]} #Cant make set of lists
# print(se)
# x=True
# if x:
#     raise SystemExit("Baby says no")
# sete={'Yolo'} #you will have to make interpreter understands that its an set
# print(dir(sete))
# sete.add('Hello')
# print(sete)
# tupl=(1,2)
# tupl=tupl+tupl
# print(tupl)
s=[]

# class Stack:
#     def __init__(self):
#         self._item=[]
#     def push(self,item):
#         self._item.append(item)
#     def pop(self):
#         return self.pop()
#     def __repr__(self):
#         return f'<{type(self).__name__} at 0x{id(self):x},size={len(self)}>'
#     def __len__(self):
#         return (len(self._item)+1)
#     def lenx(self):
#         return len(self._item)
# s=Stack()
# s.push("Hello")
# s.push("Baby")
# print(s)
# print(len(s))
# print(s.lenx())
# Making Calculator Game
class calculator:
    def __init__(self):
        self._stack=[]
    def push(self,item):
        self._stack.append(item)
    def pop(self):
        return self._stack.pop()
    def add(self):
        self.push(self.pop()+self.pop())
    def mul(self):
        self.push(self.pop()*self.pop())
    def div(self):
        self.push(self.pop()/self.pop())
    def sub(self):
        self.push(self.pop()-self.pop())
s=calculator()
s.push(2)
s.push(3)
s.push(4)
s.mul()
s.add()
print(s.pop())
    