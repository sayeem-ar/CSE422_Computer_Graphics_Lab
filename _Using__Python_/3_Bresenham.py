import matplotlib.pyplot as plt

x1, y1 = 2, 2
x2, y2 = 10, 6

dx = x2 - x1
dy = y2 - y1
p = 2*dy - dx

x, y = x1, y1
xs, ys = [x], [y]

while x < x2:
    x += 1
    if p >= 0:
        y += 1
        p += 2*(dy - dx)
    else:
        p += 2*dy
    xs.append(x)
    ys.append(y)

plt.scatter(xs, ys)
plt.plot(xs, ys)
plt.title("Bresenham Algorithm")
plt.grid()
plt.show()
