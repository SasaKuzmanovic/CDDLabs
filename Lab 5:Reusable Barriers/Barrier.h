/* Barrier.h --- Barrier.h
 *
 * Filename: Barrier.h
 * Author: Sasa Kuzmanovic
 * Date: 31/03/2023
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Code: */

#ifndef BARRIER_H
#define BARRIER_H
#include "Semaphore.h"

class Barrier
{
    int numThreads;
    int count;
    Semaphore *mutex = new Semaphore(1);
    Semaphore *firstBarrier = new Semaphore(0);
    Semaphore *secondBarrier = new Semaphore(1);
public:
  Barrier(int numThreads);
  virtual ~Barrier();
  void wait();
};

#endif

/* Barrier.h ends here */
