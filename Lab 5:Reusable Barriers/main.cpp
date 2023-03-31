// Barrier.cpp ---
//
// Filename: main.cpp
// Author: Sasa Kuzmanovic
// Date: 31/03/2023
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.
//
//

#include "Barrier.h"
#include <iostream>
#include <thread>
#include <vector>


static const int num_threads = 10;
int sharedVariable=0;


/*! \fn barrierTask
    \brief An example of using a reusable barrier
*/
/*! displays a message that is split in to 2 sections to show how a rendezvous works*/
void barrierTask(std::shared_ptr<Barrier> theBarrier, int numLoops)
{
  for(int i= 0 ;i< numLoops; ++i){
    //Do first bit of task
    std::cout << "A"<< i;
    //Barrier
    theBarrier->wait();
    //Do second half of task
    std::cout<< "B" << i;
    theBarrier->wait();
  }
}


int main(void)
{
  std::vector<std::thread> vt(num_threads);
  std::shared_ptr<Barrier> aBarrier( new Barrier(num_threads));
  /**< Launch the threads  */
  for(std::thread& t: vt)
  {
    t=std::thread(barrierTask,aBarrier,10);
  }
  /**< Join the threads with the main thread */
  for (auto& v :vt)
  { 
      v.join();
  }

  std::cout << sharedVariable << std::endl;
  return 0;
}

