from gpiozero import TrafficLights, Button
from time import sleep

button = Button(21)
lights = TrafficLights(25, 28, 27)

while True:
    button.wait_for_press()
    lights.on()
    button.wait_for_release()
    lights.off()
