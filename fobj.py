import matplotlib.pyplot as plt
from matplotlib import cm
from matplotlib.ticker import LinearLocator
import numpy as np

fig, ax = plt.subplots(1,2,subplot_kw={"projection": "3d"})

# Subplot overview =============================================================
# Make data.
X = np.arange(-3.0, 12.1, 0.001)
Y = np.arange(4.1, 5.8, 0.001)
X, Y = np.meshgrid(X, Y)
Z = 21.5 + X*np.sin(4*np.pi*X) +Y*np.sin(20*np.pi*Y)

best = np.array([11.6294, 5.72518])
bestZ = 21.5 + best[0]*np.sin(4*np.pi*best[0]) +best[1]*np.sin(20*np.pi*best[1])

# Plot the surface.

surf = ax[0].plot_surface(X, Y, Z, cmap=cm.coolwarm,
                       linewidth=0, antialiased=False)

ax[0].scatter(best[0],best[1],bestZ, c='k',s=75)

# Customize the z axis.
ax[0].zaxis.set_major_locator(LinearLocator(10))
# A StrMethodFormatter is used automatically
ax[0].zaxis.set_major_formatter('{x:.02f}')

# Subplot zoom max region =======================================================
# Make data.
X = np.arange(10, 12.1, 0.001)
Y = np.arange(5.5, 5.8, 0.001)
X, Y = np.meshgrid(X, Y)
Z = 21.5 + X*np.sin(4*np.pi*X) +Y*np.sin(20*np.pi*Y)

best = np.array([11.6294, 5.72518])
bestZ = 21.5 + best[0]*np.sin(4*np.pi*best[0]) +best[1]*np.sin(20*np.pi*best[1])

# Plot the surface.

surf = ax[1].plot_surface(X, Y, Z, cmap=cm.coolwarm,
                       linewidth=0, antialiased=False)

ax[1].scatter(best[0],best[1],bestZ, c='k',s=75)

# Customize the z axis.
ax[1].zaxis.set_major_locator(LinearLocator(10))
# A StrMethodFormatter is used automatically
ax[1].zaxis.set_major_formatter('{x:.02f}')

# ==============================================================================

# Add a color bar which maps values to colors.
fig.colorbar(surf, shrink=0.5, aspect=5)

plt.show()