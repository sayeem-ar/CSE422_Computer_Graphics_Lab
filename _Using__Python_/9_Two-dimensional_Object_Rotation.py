import matplotlib.pyplot as plt
import math

spin = 0

# ORIGINAL rectangle (never modify these)
x0 = [-25, 25, 25, -25]
y0 = [-25, -25, 25, 25]

fig, ax = plt.subplots()
ax.set_xlim(-60, 60)
ax.set_ylim(-60, 60)
ax.set_aspect('equal')
ax.axis('off')

polygon = ax.fill(x0, y0, color='red')[0]

def rotate(angle):
    theta = math.radians(angle)
    xr = []
    yr = []
    for i in range(4):
        xr.append(x0[i]*math.cos(theta) - y0[i]*math.sin(theta))
        yr.append(x0[i]*math.sin(theta) + y0[i]*math.cos(theta))
    polygon.set_xy(list(zip(xr, yr)))
    fig.canvas.draw_idle()

def on_key(event):
    global spin
    if event.key == 'l':
        spin += 10
        rotate(spin)
    elif event.key == 'r':
        spin -= 10
        rotate(spin)

fig.canvas.mpl_connect('key_press_event', on_key)

plt.title("2D Object Rotation (Press l / r)")
plt.show()
