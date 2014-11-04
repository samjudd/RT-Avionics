#include <pyralis/EngineCutoffState.h>
#include <pyralis/EnginePassiveState.h>

namespace pyralis {

  EngineCutoffState::EngineCutoffState() {}

  EngineCutoffState::~EngineCutoffState() {}

  EngineCutoffState *EngineCutoffState::_instance = nullptr;

  // Singleton implementation
  State *EngineCutoffState::instance() {
    if( _instance != nullptr ) {
      return _instance;
    } else {
      return new EngineCutoffState();
    }
  }

  void EngineCutoffState::transition( StateMachine &stateMachine ) {
    changeState( stateMachine, EnginePassiveState::instance() );
  }

} // namespace pyralis