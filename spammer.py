import sys
import time
import pyautogui as pag

m = str(sys.argv[1])
n = int(sys.argv[2])
time.sleep(3)

for i in range(n):
	pag.typewrite(m)
	pag.press("enter")

