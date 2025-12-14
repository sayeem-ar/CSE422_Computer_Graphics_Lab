import matplotlib.pyplot as plt

x = [0, 4, 4, 0, 0]
y = [0, 0, 3, 3, 0]

plt.plot(x, y)
plt.fill(x, y, color='magenta')
plt.axis('equal')
plt.title("Colored Rectangle")
plt.show()
