import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
import matplotlib.transforms as mtransforms
import winsound
import numpy as np

fig, ax = plt.subplots()
ax.set_xlim(-5, 5)
ax.set_ylim(-5, 5)
ax.set_aspect('equal')

# Rectangle center and size
cx, cy = 0, 0
width, height = 2, 2
rect = plt.Rectangle((cx - width/2, cy - height/2), width, height, color='red')
ax.add_patch(rect)

# Rotation state
spin_angle = 0      # Current rotation angle in degrees
spin_speed = 0      # Degrees per frame, positive = left, negative = right

# Function to update rectangle transform
def animate(_):
    global spin_angle
    spin_angle += spin_speed

    # Reset transform each frame to avoid stretching
    rect.set_transform(mtransforms.Affine2D().rotate_deg_around(cx, cy, spin_angle) + ax.transData)

    if spin_speed != 0:
        winsound.Beep(800, 100)  # Beep while spinning

    return rect,

# Keyboard events
def on_key(event):
    global spin_speed
    if event.key == 'l':
        spin_speed = 5       # Spin left
    elif event.key == 'r':
        spin_speed = -5      # Spin right
    elif event.key == 'x':
        spin_speed = 0       # Stop rotation

fig.canvas.mpl_connect('key_press_event', on_key)

ani = FuncAnimation(fig, animate, frames=360, interval=50)
plt.title("Keyboard-Controlled Spinning + Sound")
plt.show()
