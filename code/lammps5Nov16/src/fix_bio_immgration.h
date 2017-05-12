/* ----------------------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under 
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef FIX_CLASS

FixStyle(immigration,FixImmigration)

#else

#ifndef LMP_FIX_IMMIGRATION_H
#define LMP_FIX_IMMIGRATION_H

#include "fix.h"

namespace LAMMPS_NS {

class FixImmigration : public Fix {
 public:
	FixImmigration(class LAMMPS *, int, char **);
 ~FixImmigration();
  int setmask();
  void init();
  virtual void post_force(int);

 private:
  char **var;
  int *ivar;

  int seed;
  double divMass, density;
  double xlo,xhi,ylo,yhi,zlo,zhi;

  double* gamfit(double*, int, double*);
  void immgration();

  class RanPark *random;

};

}

#endif
#endif


