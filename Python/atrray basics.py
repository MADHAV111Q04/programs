import numpy as np
arr=np.array([[10,25,8],
             [15,5,30],
             [20,35,12]])
print("Array:\n",arr)
print("\ncoloumn-wise:")
print("index of max values:",np.argmax(arr,axis=0))
print("index of min values:",np.argmin(arr,axis=0))
print("\nRow-wise:")
print("index of max values:",np.argmax(arr,axis=1))
print("index of min values:",np.argmin(arr,axis=1))
