#include <pyralis/EnginePassiveState.h>

namespace pyralis {

  EnginePassiveState::EnginePassiveState() {}

  EnginePassiveState::~EnginePassiveState() {}

  EnginePassiveState *EnginePassiveState::_instance = nullptr;

  // Singleton implementation
  State *EnginePassiveState::instance() {
    if( _instance != nullptr ) {
      return _instance;
    } else {
      return new EnginePassiveState();
    }
  }

  bool EnginePassiveState::shouldStartup() const {
    return _shouldStartup;
  }

  void EnginePassiveState::transition( StateMachine &stateMachine ) {
    if( shouldStartup() ) {
      changeState( stateMachine, EnginePassiveState::instance() );
    } else {
      // do nothing
    }
  }

} // namespace pyralis;
