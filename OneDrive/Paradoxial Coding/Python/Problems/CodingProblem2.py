str1="Helo"
str2="lleloui"
L=[]
str1=list(str1)
str2=list(str2)
str3=str2.copy()
for i in range(len(str1)):
    for j in range(len(str2)):
        if str1[i]==str2[j]:
            L.append(str1[i])   
            str3.remove(str1[i])    
result=''.join(L+str3)
print(result)


        
                