# read a picture use python

import cv2
import sys

if __name__ == "__main__":
    if len(sys.argv) > 1:
        # 输入图像
        image = cv2.imread(sys.argv[1], cv2.IMREAD_ANYCOLOR)
        # 显示图像
        cv2.imshow('image', image)
        cv2.waitKey(0)
        cv2.destroyAllWindows()
    else:
        print("Usage: python firstOpencv2.py imageFile")    