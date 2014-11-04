#include <pyralis/EngineThrustState.h>
#include <pyralis/EngineAbortState.h>
#include <pyralis/EngineCutoffState.h>

#include <stdexcept>

namespace pyralis {

  EngineThrustState::EngineThrustState() {}

  EngineThrustState::~EngineThrustState() {}

  EngineThrustState *EngineThrustState::_instance = nullptr;

  // Singleton implementation
  State *EngineThrustState::instance() {
    if( _instance != nullptr ) {
      return _instance;
    } else {
      return new EngineThrustState();
    }
  }

  const EngineStatus &EngineThrustState::status() const {
    return _status;
  }

  void EngineThrustState::transition( StateMachine &stateMachine ) {
    if( status().isNominal() ) {
      changeState( stateMachine, EngineThrustState::instance() );
    } else if( status().isDepleted() ) { // is abort scenario
      changeState( stateMachine, EngineCutoffState::instance() );
    } else if( status().isAbortScenario() ) {
      changeState( stateMachine, EngineAbortState::instance() );
    } else {
      throw std::invalid_argument( "Unknown engine thrust status" );
    }
  }

} // namespace pyralis