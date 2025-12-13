import matplotlib.pyplot as plt

r = int(input("Enter radius: "))

x = 0
y = r
pk = 1 - r

px = []
py = []

while x <= y:
    px.extend([ x, -x,  x, -x,  y, -y,  y, -y ])
    py.extend([ y,  y, -y, -y,  x,  x, -x, -x ])

    x += 1
    if pk < 0:
        pk = pk + 2*x + 1
    else:
        y -= 1
        pk = pk + 2*(x - y) + 1

plt.scatter(px, py)
plt.gca().set_aspect('equal', adjustable='box')
plt.title("Midpoint Circle Algorithm")
plt.xlabel("X-axis")
plt.ylabel("Y-axis")
plt.grid(True)
plt.show()
