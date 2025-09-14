# No-slip particle

## 1) Increase the energy of interaction

The main file to modify and make the particle no-slip is
parameters.inc, and to use the following energy of interaction
between the fluid and the particle:

```bash
pair_coeff 1 3 2.0 2.7     # Wall-Oxygen sigma and epsilon
```

instead of 

```bash
pair_coeff 1 3 0.02 2.7     # Wall-Oxygen sigma and epsilon
```

for the slip-particle.

## 2) Increase the box size

To avoid simulation instability when the particle rotates,
increase the box size as follows:

```bash
region box prism -6 6 -3 3 -10 10 0 0 0
```