# #If-else

# #Water Level Example
# water_level=50
# if water_level > 80:
#     print("Drain water")
# else:
#     print("Continue")

# #Roll-Coster Example
# Height=int(input("Enter Height(in cm): "))
# if Height > 120: #If this condition gets true the indented block will get executed
#     print("Can Ride")
# else:
#     print("Can't Ride")

# # "==" is for comparing / "=" is an assignment operator

# #Coding Exercise 1
# Number=int(input("Enter the Number: "))
# if (Number %2)==0:
#     print(f"{Number} is an even number!!")
# else:
#     print(f"{Number} is an odd number!!")

# # Nested If-else
# #Roller-Coster Example Extended
# Height=int(input("Enter Height(in cm): "))
# if Height > 120: #If this condition gets true the indented block will get executed
#     Age=int(input("Enter your Age: "))
#     if Age <=12:
#         print("Fare $5")
#     elif Age>12 and Age <=18:
#         print("Fare $7")
#     else:
#         print("Fare $12")
# else:
#     print("Can't Ride")

# #Coding Exercise 2
# height=float(input("Enter your height(in m)"))
# weight=int(input("Enter your weight(in kg)"))
# BMI=weight/height**2
# BMI=int(BMI)
# if BMI <18.5:
#     print(f" BMI: {BMI} you're are Underweight")
# elif BMI < 25:
#     print(f"BMI: {BMI}you're are normal")
# elif BMI <30:
#     print(f"BMI: {BMI} you're are overweight")
# elif BMI <35:
#     print(f" BMI: {BMI} you're are obese")
# else:
#     print(f"BMI: {BMI} you're are clinically obese")

# #Coding Exercise 3
# Year=int(input("Enter The Current Year"))
# if Year %4==0:
#     if Year %100==0:
#         if Year %400==0:
#             print("Leap!!")
#         else:
#             print("Not Leap!!")
#     else:   
#         print("Not Leap!!")
# else:
#     print("Not Leap")

#Roller-Coster Example Extended
# Height=int(input("Enter Height(in cm): "))
# if Height > 120: #If this condition gets true the indented block will get executed
#     Age=int(input("Enter your Age: "))
#     if Age <=12:
#         Total=5
#     elif Age>12 and Age <=18:
#         Total=7
#     else:
#         Total=12
#     Flag=True
# if Flag:
#     Qs=input("Want Photos [Yes/No] ")
#     if Qs=="Yes":
#         Total=Total+3
#         print(f"Fare: {Total}")
#     else:
#         print(f"Fare: {Total}")

# else:
#     print("Can't Ride")

# print("Welcome to Python Pizza Deliveries!!")
# print("Small Pizza: $15")
# print("Medium Pizza: $20")
# print("Large Pizza: $25")
# print()
# print("Pepperoni for Small Pizza: +$2")
# print("Pepperoni for medium or large Pizza: $3")
# print()
# print("Extra Cheese for any size pizza: +$1")
# print()

# size=input("Enter the size of Pizza S,M or L")
# add_pepperoni=input("Do you want extra pepperoni? Y or N")
# extra_cheese=input("Do you want extra cheese? Y or N")

# if size=="S":
#     Bill=15
#     if add_pepperoni=="Y":
#         Bill=Bill+2
#     if extra_cheese=="Y":
#         Bill=Bill+3
# elif size=="M":
#     Bill=20
#     if add_pepperoni=="Y":
#         Bill=Bill+3
#     if extra_cheese=="Y":
#         Bill=Bill+3
# elif size=="L":
#     Bill=25
#     if add_pepperoni=="Y":
#         Bill=Bill+3
#     if extra_cheese=="Y":
#         Bill=Bill+3
# else:
#     print("Incorrect Values Entered")

# print(f"Your Final Bill is {Bill}")

#Roller-Coster Example Extended
# Height=int(input("Enter Height(in cm): "))
# if Height > 120: #If this condition gets true the indented block will get executed
#     Age=int(input("Enter your Age: "))
#     if Age <=12:
#         Total=5
#     elif Age<= 18:
#         Total=7
#     elif Age >=45 and Age<=55:
#         Total=12
#     else: 
#         Total=0
#     Flag=True
# if Flag:
#     Qs=input("Want Photos [Yes/No] ")
#     if Qs=="Yes":
#         Total=Total+3
#         print(f"Fare: {Total}")
#     else:
#         print(f"Fare: {Total}")

# else:
#     print("Can't Ride")

#Love-Calculator
# name1=input("Enter the Girl's name!! ")
# name2=input("Enter the boy's name!! ")
# name1 = name1.upper()
# name2=name2.upper()
# Sum_True=name1.count("T")+name1.count("R")+name1.count("U")+name1.count("E")+name2.count("T")+name2.count("R")+name2.count("U")+name2.count("E")
# Sum_Love=name1.count("L")+name1.count("O")+name1.count("V")+name1.count("E")+name2.count("L")+name2.count("O")+name2.count("V")+name2.count("E")
# score=Sum_True*10+Sum_Love
# if score<=10 or score>=90:
#     print(f"Your Love score is {score}%, you are like coke and mentos!!")
# elif score>=40 and score<=50:
#     print(f"Your Love score is {score}%, you're are alright together!")
# else:
#     print(f"Your Love score is {score}%")

# Final Project
print("Welcome to Treasure Island \n Your Mission is to find the treasure.")
print('''
                                                                         
,-.----.                                                                 
\    /  \                                                                
|   :    \                                    ,---,                      
|   |  .\ :            __  ,-.              ,---.'|   ,---.              
.   :  |: |          ,' ,'/ /|              |   | :  '   ,'\ ,--,  ,--,  
|   |   \ : ,--.--.  '  | |' | ,--.--.      |   | | /   /   ||'. \/ .`|  
|   : .   //       \ |  |   ,'/       \   ,--.__| |.   ; ,. :'  \/  / ;  
;   | |`-'.--.  .-. |'  :  / .--.  .-. | /   ,'   |'   | |: : \  \.' /   
|   | ;    \__\/: . .|  | '   \__\/: . ..   '  /  |'   | .; :  \  ;  ;   
:   ' |    ," .--.; |;  : |   ," .--.; |'   ; |:  ||   :    | / \  \  \  
:   : :   /  /  ,.  ||  , ;  /  /  ,.  ||   | '/  ' \   \  /./__;   ;  \ 
|   | :  ;  :   .'   \---'  ;  :   .'   \   :    :|  `----' |   :/\  \ ; 
`---'.|  |  ,     .-./      |  ,     .-./\   \  /           `---'  `--`  
  `---`   `--`---'           `--`---'     `----'                         
                                                                         
'''
)
Director=input("left or right: ")
if Director.upper()=="RIGHT":
    print("Game Over!!")
elif Director.upper()=="LEFT":
    Director=input("Swim or wait: ")
    if Director.upper()=="SWIM":
        print("Game Over!!")
    elif Director.upper()=="WAIT":
        Director=input("Which Door!! [Red,Yellow,Blue]: ")
        if Director.upper()=="RED":
            print("Burned by fire.Game Over")
        elif Director.upper()=="BLUE":
            print("Eaten by beasts.Game Over")
        elif Director.upper()=="YELLOW":
            print("You Win")
        else:
            print("Game Over")
    else:
        print("Incorrect Data Entered")