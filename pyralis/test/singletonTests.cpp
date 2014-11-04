#include <pyralis/EngineAbortState.h>
#include <pyralis/EngineCutoffState.h>
#include <pyralis/EnginePassiveState.h>
#include <pyralis/EngineStartupState.h>
#include <pyralis/EngineThrustState.h>

#include <gtest/gtest.h>

TEST( SingletonTest, EngineAbortState ) {
  ASSERT_NE( nullptr, pyralis::EngineAbortState::instance() );
}

TEST( SingletonTest, EngineCutoffState ) {
  ASSERT_NE( nullptr, pyralis::EngineCutoffState::instance() );
}

TEST( SingletonTest, EnginePassiveState ) {
  ASSERT_NE( nullptr, pyralis::EnginePassiveState::instance() );
}

TEST( SingletonTest, EngineStartupState ) {
  ASSERT_NE( nullptr, pyralis::EngineStartupState::instance() );
}

TEST( SingletonTest, EngineThrustState ) {
  ASSERT_NE( nullptr, pyralis::EngineThrustState::instance() );
}
