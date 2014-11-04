#include <pyralis/StateMachine.h>
#include <pyralis/constants.h>

#include <pyralis/EngineAbortState.h>
#include <pyralis/EngineCutoffState.h>
#include <pyralis/EnginePassiveState.h>
#include <pyralis/EngineStartupState.h>
#include <pyralis/EngineThrustState.h>

#include <gtest/gtest.h>

#include <iostream>
#include <chrono>

using namespace pyralis;
using namespace std::chrono;

TEST( LoopTests, MainLoop ) {
  //uint32 hertz = 10000;
  duration<double, std::micro> freq( 10 );
  std::cout << "Frequency count: " << freq.count() << "\n";

  uint64 loopIterations = 0;

  high_resolution_clock::time_point loopStart = high_resolution_clock::now();
  high_resolution_clock::time_point loopStop = high_resolution_clock::now();
  duration<double> loopTime = duration_cast< duration<double> >( loopStop - loopStart );

  while( loopTime.count() < 1.0 ) {
    high_resolution_clock::time_point start = high_resolution_clock::now();

    // Do action
    ++loopIterations;

    // Spin until time point hit
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    duration<double, std::micro> iterationTime = duration_cast< duration<double, std::micro> >( stop - start );
    if( iterationTime.count() > freq.count() ) {
      ASSERT_TRUE( false ) << "Could not complete loop in required time";
    }
    while( iterationTime.count() < freq.count() ) {
      stop = high_resolution_clock::now();
      iterationTime = duration_cast< duration<double> >( stop - start );
      std::cout << loopIterations << ": " << iterationTime.count() << "\n";
    }

    loopStop = high_resolution_clock::now();
    loopTime = duration_cast< duration<double> >( loopStop - loopStart );
  }
  std::cout << loopIterations << " iterations in " << loopTime.count() << " seconds\n";
}