import random
a=True
b=True
while(a,b):
 a=int(input("enter the temperature(celsius): "))
 b=int(input("enter the humidity(%): "))
 a=random.randint(40,100)
 b=random.randint(30,100)
 if (a > 54 and b > 50):
  print("Clear the area\n")
 elif (a > 54 or b > 50):
    
     if( a <54 or b >50):
       print("\nHumidity is high\n")
    
     elif(a > 54 or b <50):
       print("\nTemp is high\n")
 elif(a < 54 and b < 50):
  print("\neverything is fine\n")
  