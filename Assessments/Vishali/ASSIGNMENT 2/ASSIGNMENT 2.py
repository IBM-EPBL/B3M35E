import random

T=int(input("enter the temperature(celsius): "))
H=int(input("enter the humidity(%): "))
T=random.randint(30,100)
H=random.randint(30,100)
 
if (T > 60 and H > 48):
  print("Clear the area\n")
elif (T > 60 or H > 48):

 if( T <60 or H >48):
  print("\nHumidity is high\n")
elif(T > 60 or H <48):
         
 print("\nTemp is high\n")
elif(T < 58 and H < 50):
  print("\neverything is fine\n")
