import time
from vex import *

brain = Brain()

left_motor = Motor(Ports.PORT1, GearSetting.RATIO_18_1, False)
right_motor = Motor(Ports.PORT2, GearSetting.RATIO_18_1, False)

while True:
    left_motor.spin(FORWARD, 50, PERCENT)
    right_motor.spin(FORWARD, 50, PERCENT)
    time.sleep(2)

    left_motor.stop()
    right_motor.stop()
    time.sleep(1)

    left_motor.spin(FORWARD, 100, PERCENT)
    right_motor.stop()
    time.sleep(1)

    left_motor.stop()
    right_motor.stop()
    time.sleep(1)

    time.sleep(0.02)
