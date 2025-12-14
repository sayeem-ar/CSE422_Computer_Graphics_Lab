import matplotlib.pyplot as plt
import numpy as np

# -----------------------------
# COMMON SETTINGS
# -----------------------------
plt.figure(figsize=(6,6))
plt.axis('equal')
plt.grid(True)

# -----------------------------
# 1️⃣ FULL CIRCLE (Midpoint style using parametric form)
# -----------------------------

theta = np.linspace(0, 2*np.pi, 300)
r = 5
x = r * np.cos(theta)
y = r * np.sin(theta)

plt.plot(x, y)
plt.title("Full Circle")


# -----------------------------
# 2️⃣ HALF CIRCLE
# -----------------------------
"""
theta = np.linspace(0, np.pi, 200)
r = 5
x = r * np.cos(theta)
y = r * np.sin(theta)

plt.plot(x, y)
plt.title("Half Circle")
"""

# -----------------------------
# 3️⃣ OVAL / ELLIPSE
# -----------------------------
"""
theta = np.linspace(0, 2*np.pi, 300)
rx = 6   # x radius
ry = 3   # y radius

x = rx * np.cos(theta)
y = ry * np.sin(theta)

plt.plot(x, y)
plt.title("Oval / Ellipse")
"""

# -----------------------------
# 4️⃣ HEXAGON (6-sided polygon circle type)
# -----------------------------
"""==--
sides = 6
theta = np.linspace(0, 2*np.pi, sides+1)
r = 5

x = r * np.cos(theta)
y = r * np.sin(theta)

plt.plot(x, y)
plt.fill(x, y, alpha=0.3)
plt.title("Hexagon (Polygon Circle)")
"""

# -----------------------------
# SHOW OUTPUT
# -----------------------------
plt.show()
