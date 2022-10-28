from gpiozero import led
from time import sleep

gpio.setmode(GPIO.BCM)
gpio.setup(9,GPIO.OUT)
gpio.setup(10,GPIO.OUT)
gpio.setup(11,GPIO.OUT)
while True:
#red    
gpio.output(9,True)
gpio.output(10,False)
gpio.output(11,False)
time.sleep(1)
#red and amber
gpio.output(9,False)
gpio.output(10,True)
gpio.output(11,False)
time.sleep(1)
#green
gpio.output(9,False)
gpio.output(10,False)
gpio.output(11,True)
time.sleep(1)

#Amber 
gpio.output(11,false)
gpio.output(10,true)
time.sleep(1)
GPIO.output(10,False)
