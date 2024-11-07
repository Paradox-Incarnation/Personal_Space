# int has no attribute len
# print(len(12345)) 
#Corrected Version
print(len(str(12345))) 

#Data Types

#String
print("Hello"[4]) #Subscripting
print("123"+"345") #Concatenation

#Integers
print(123+345)
print(123_32345_542) #Method to write long integers ("_" are ignored)

#Float
# 3.14159 #Decimal can float between numbers

# Boolean
# True 
# False

num_char=len(input("Enter your name:"))
# print("Your name has "+ num_char+"characters") #int cant be concaternated with strings

#For knowing the datatype
print(type(num_char))
#Typecasting: changing from one datatype to another datatype
new_num_char=str(num_char)
print("Your name has "+ new_num_char+" characters") 
a=str(232)
print(type(a))
x=70 +float(100.5) #70 will turn to floating point number
print(x)
print(type(x))


#Coding Exercise 1
Number=input("Enter a two digt number")
print(int(Number[0])+int(Number[1]))

#Mathematical Operations
3+5
7-5
3*2
# 6/2  This will always result in floating point value
# 2**3 ==> 2^3
# #PEMDAS
# ()
# **
# * /
# + - 
# The operator which is most to the left will be given priority
print( 3*3 + 3/3 -3)
# 7

#Coding Exercise 2
height=float(input("Enter your height(in m)"))
weight=int(input("Enter your weight(in kg)"))
BMI=weight/height**2
BMI=int(BMI)
print(BMI)


print(round((8/3),2)) # Up to 2 Decimal precision
print(8//3) #Floor Division
result = 4/2
result /=2 #result=result/2
scores=0
scores +=1 #augmented operation

# f-strings
print(f"your score is {scores}") #Instead of converting datatype of scores, you can use fstring scores will retain original datatype

#Coding Exercise 3
Age=int(input("Enter your age"))
print(f"You have {90*365-Age*365} days, {90*52-Age*52} weeks, {(90-Age)*12} months left until 90 years")

#Final Project
Bill=float(input("Enter Total Bill: $"))
Tip=int(input("How much tip you want to give 10,12 or 15: "))
No_of_people=int(input("In how many people you want to split"))
# print(f"Each persion will have to pay ${round(Bill/No_of_people*(Tip/100 +1),2)}") 
Final_Amount="{:.2f}".format(Bill/No_of_people*(Tip/100 +1))
print(f"Each persion will have to pay ${Final_Amount}") 


