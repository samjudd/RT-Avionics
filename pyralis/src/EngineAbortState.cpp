#include <pyralis/EngineAbortState.h>
#include <pyralis/EngineCutoffState.h>

namespace pyralis {

  EngineAbortState::EngineAbortState() {}

  EngineAbortState::~EngineAbortState() {}

  EngineAbortState *EngineAbortState::_instance = nullptr;

  // Singleton implementation
  State *EngineAbortState::instance() {
    if( _instance != nullptr ) {
      return _instance;
    } else {
      return new EngineAbortState();
    }
  }

  void EngineAbortState::transition( StateMachine &stateMachine ) {
    changeState( stateMachine, EngineCutoffState::instance() );
  }

} // namespace pyralis