import matplotlib.pyplot as plt
from matplotlib import cm
from matplotlib.ticker import LinearLocator
import numpy as np
import pandas as pd

def f_obj(X,Y):
    return 21.5 + X*np.sin(4*np.pi*X) +Y*np.sin(20*np.pi*Y)

def get_maxFOBJ(Z,X,Y):
    maxInd = np.argmax(Z)
    return [Z.flatten()[maxInd],[X.flatten()[maxInd],Y.flatten()[maxInd]]]

# ==============================================================================
# C++ results
resPop = pd.read_csv('./Post_proc/pop.csv',header=None)
print(resPop.head())
print(resPop.info())

resFobj = pd.read_csv('./Post_proc/pop_Fobj.csv',header=None)
print(resFobj.head())
print(resFobj.info())

resBestInd = resFobj.idxmin(axis=0, skipna=True)[0]
resBest_pop = resPop.iloc[resBestInd]

print("\n\nC++ results:")
print((-1)*resFobj.iloc[resBestInd])
print(resBest_pop)

fig, ax = plt.subplots(1,2,subplot_kw={"projection": "3d"}, figsize = (15,8))

# Subplot overview =============================================================
# Make data.
X = np.arange(-3.0, 12.1, 0.001)
Y = np.arange(4.1, 5.8, 0.001)
X, Y = np.meshgrid(X, Y)
Z = f_obj(X,Y)

best = get_maxFOBJ(Z,X,Y)

# Plot the surface.
surf = ax[0].plot_surface(X, Y, Z, cmap=cm.coolwarm,
                       linewidth=0, antialiased=False)

ax[0].scatter(best[1][0],best[1][1],best[0], c='k',s=75)

# Customize the z axis.
ax[0].zaxis.set_major_locator(LinearLocator(10))
# A StrMethodFormatter is used automatically
ax[0].zaxis.set_major_formatter('{x:.02f}')

# Subplot zoom max region =======================================================
# Make data.
X = np.arange(10, 12.1, 0.001)
Y = np.arange(5.5, 5.8, 0.001)
X, Y = np.meshgrid(X, Y)
Z = f_obj(X,Y)

best = get_maxFOBJ(Z,X,Y)
print(f"\n\nMax value: {best[0]}. indexes: x = {best[1][0]}, y = {best[1][1]}")

# Plot the surface.
surf = ax[1].plot_surface(X, Y, Z, cmap=cm.coolwarm,
                       linewidth=0, antialiased=False)

ax[1].scatter(best[1][0],best[1][1],best[0], c='k',s=75)

# Customize the z axis.
ax[1].zaxis.set_major_locator(LinearLocator(10))
# A StrMethodFormatter is used automatically
ax[1].zaxis.set_major_formatter('{x:.02f}')

# ==============================================================================

# Add a color bar which maps values to colors.
fig.colorbar(surf, shrink=0.5, aspect=5)

plt.show()