import RPi.GPIO as GPIO
import time

GPIO.setwarnings(False)

green=11
yellow=10
red=9

GPIO.setmode(GPIO.BCM)
GPIO.setup(red,GPIO.OUT)
GPIO.setup(green,GPIO.OUT)
GPIO.setup(yellow,GPIO.OUT)

GPIO.output(red,False)
GPIO.output(green,False)
GPIO.output(yellow,False)


GPIO.output(green,True)
time.sleep(3)

GPIO.output(green,False)
GPIO.output(yellow,True)
time.sleep(3)

GPIO.output(yellow,False)
GPIO.output(red,True)
time.sleep(10)













