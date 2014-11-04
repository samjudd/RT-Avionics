#include <pyralis/EngineStartupState.h>
#include <pyralis/EngineThrustState.h>
#include <pyralis/EngineAbortState.h>

namespace pyralis {

  EngineStartupState::EngineStartupState() {}

  EngineStartupState::~EngineStartupState() {}

  EngineStartupState *EngineStartupState::_instance = nullptr;

  // Singleton implementation
  State *EngineStartupState::instance() {
    if( _instance != nullptr ) {
      return _instance;
    } else {
      return new EngineStartupState();
    }
  }

  bool EngineStartupState::shouldStartup() const {
    return _shouldStartup;
  }

  void EngineStartupState::transition( StateMachine &stateMachine ) {
    if( shouldStartup() ) {
      changeState( stateMachine, EngineThrustState::instance() );
    } else { // is abort scenario
      changeState( stateMachine, EngineAbortState::instance() );
    }
  }

} // namespace pyralis