import cv2
import numpy as np

print(cv2.__version__)

im = cv2.imread('Vas_a_caer_Gege.jpg')

im[:,:,0] = 0
im[:,:,2] = 0

b , g , r = cv2.split(im)

cv2.imshow('Cochino_Gege', im)

cv2.waitKey(0)
cv2.destroyAllWindows()

