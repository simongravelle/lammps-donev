# Friction Coefficient & Slip Length from LAMMPS

Example input files and analysis scripts for calculating the liquid–solid
friction coefficient ($\lambda$) and the associated slip length ($b$) from
the Green–Kubo method.

   - LAMMPS input script to extract the tangential forces exerted by the
     fluid on a solid wall.  
   - Python notebook to compute the force autocorrelation function and
     apply the Green–Kubo relation to obtain $\lambda$.  

## Important Note

- The default parameters here correspond to a no-slip case (very small slip
  length).  
- When investigating systems with large slip, the Green–Kubo correlations
  decay more slowly and are noisier. This means you will need longer
  simulation times and/or larger systems to obtain statistically reliable
  results.
