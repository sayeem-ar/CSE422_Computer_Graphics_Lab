import matplotlib.pyplot as plt

x1, y1 = 2, 3
x2, y2 = 10, 8

dx = x2 - x1
dy = y2 - y1
steps = max(abs(dx), abs(dy))

x_inc = dx / steps
y_inc = dy / steps

x, y = x1, y1
xs, ys = [], []

for _ in range(int(steps)+1):
    xs.append(round(x))
    ys.append(round(y))
    x += x_inc
    y += y_inc

plt.scatter(xs, ys)
plt.plot(xs, ys)
plt.title("DDA Algorithm")
plt.grid()
plt.show()
