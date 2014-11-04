#include <pyralis/State.h>
#include <pyralis/StateMachine.h>

namespace pyralis {

  void State::execute( StateMachine * /*stateMachine*/ ) {
    // do nothing for now
  }

  void State::changeState( StateMachine &stateMachine, State *nextState ) {
    stateMachine.changeState( nextState );
  }

} // namespace pyralis
