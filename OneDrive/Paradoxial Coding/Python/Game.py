import operator
import random
class Calculator():
    def __init__(self):
        self._stack=[]
    def push(self,item):
        self._stack.append(item)
    def pop(self):
        return self._stack.pop()
    def mul(self):
        return (self.pop()*self.pop())
    def add(self):
        return (self.pop()+self.pop())
    def sub(self):
        return (self.pop()-self.pop())
    def div(self):
        return (self.pop()/self.pop())
    
Calc=Calculator()
print("Expression:","2+3*5")
print(int("2*3*5"))

def Expression():
    operators={
        '+':operator.add,
        '-':operator.sub,
        '*':operator.mul,
        '/':operator.truediv
    }
    
    num=int(input())

    for i in range(num-1):



