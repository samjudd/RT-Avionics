#include <pyralis/State.h>
#include <pyralis/StateMachine.h>

namespace pyralis {

  void StateMachine::changeState( State *nextState ) {
    _state = nextState;
  }

} // namespace pyralis