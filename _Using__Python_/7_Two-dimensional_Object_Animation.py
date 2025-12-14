import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

fig, ax = plt.subplots()

# Rectangle (2D object)
rect = plt.Rectangle((-5, -1), 2, 2, color='green')
ax.add_patch(rect)

# Start & End markers
ax.scatter(-5, 0, color='blue', s=80)
ax.text(-5, 0.8, "START", color='blue', ha='center')

ax.scatter(5, 0, color='red', s=80)
ax.text(5, 0.8, "END", color='red', ha='center')

ax.set_xlim(-10, 10)
ax.set_ylim(-10, 10)
ax.grid(True)

# Animation function
def animate(i):
    x_pos = -5 + (10 * i / 99)   # Move from -5 → +5
    rect.set_x(x_pos)
    return rect,

ani = FuncAnimation(fig, animate, frames=100, interval=50)

plt.title("2D Object Animation (Start → End)")
plt.show()
