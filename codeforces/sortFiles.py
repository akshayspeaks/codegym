import os
import shutil
def moveToDir(x):
	d=x[:5]
	if not os.path.exists(d):
		os.makedirs(d)
	shutil.move(x,d+'/')
def makeAndMove():
	for x in os.listdir():
		if os.path.isfile(x) and x[:2]=='cf':
			moveToDir(x)

makeAndMove()