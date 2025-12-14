import matplotlib.pyplot as plt

# Initial translation values
tx, ty = 0, 0

fig, ax = plt.subplots()

# Rectangle centered at origin
rect = plt.Rectangle((-25, -25), 50, 50, color='red')
ax.add_patch(rect)

ax.set_xlim(-100, 100)
ax.set_ylim(-100, 100)
ax.set_aspect('equal')
ax.grid(True)

plt.title("2D Object Translation (Arrow Keys)")

# Key press handler
def on_key(event):
    global tx, ty

    if event.key == 'up':
        ty += 5
    elif event.key == 'down':
        ty -= 5
    elif event.key == 'right':
        tx += 5
    elif event.key == 'left':
        tx -= 5

    rect.set_xy((tx - 25, ty - 25))
    fig.canvas.draw_idle()

# Connect keyboard event
fig.canvas.mpl_connect('key_press_event', on_key)

plt.show()
