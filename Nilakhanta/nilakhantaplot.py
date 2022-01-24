import matplotlib.pyplot as plt
import numpy as np
n = 5000
arr = np.zeros(n, dtype=float)
for i in range(0, n):
    arr[i] = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
plt.plot([], label="Nilakhanta")
plt.plot(arr, color="red", label="Pi")
plt.legend()
plt.xlabel('Nilakhanta - 5000 somas')
plt.show()
