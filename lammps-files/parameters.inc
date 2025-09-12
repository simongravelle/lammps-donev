# Masses
mass 1 15.9994     # Mass of oxygen atom, water (g/mol)
mass 2 1.008       # Mass of hydrogen atom, water (g/mol)
mass 3 10          # Mass of wall atoms (g/mol)

# Lennard-Jones parameters
pair_coeff 1 1 0.155 3.165  # Oxygen-Oxygen sigma and epsilon
pair_coeff 2 2 0 0          # Hydrogen-Hydrogen sigma and epsilon
pair_coeff 3 3 20 1.9       # Wall-Wall sigma and epsilon
pair_coeff 1 3 0.02 2.7     # Wall-Oxygen sigma and epsilon

# Bond and angle parameters
bond_coeff 1 529.581 1.012  # Bond coefficients, water
angle_coeff 1 37.95 113.24  # Angle coefficients, water
