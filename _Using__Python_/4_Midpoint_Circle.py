import matplotlib.pyplot as plt

r = 8
x, y = 0, r
p = 1 - r

xs, ys = [], []

while x <= y:
    pts = [(x,y),(y,x),(-x,y),(-y,x),(x,-y),(y,-x),(-x,-y),(-y,-x)]
    for px, py in pts:
        xs.append(px)
        ys.append(py)
    x += 1
    if p < 0:
        p += 2*x + 1
    else:
        y -= 1
        p += 2*(x - y) + 1

plt.scatter(xs, ys)
plt.title("Midpoint Circle")
plt.axis('equal')
plt.show()
