#ifndef PYRALIS_STATE_H
#define PYRALIS_STATE_H

namespace pyralis {

  class StateMachine;

  class State {
  protected:
    void changeState( StateMachine &stateMachine, State *nextState );
  public:
    virtual void execute( StateMachine *stateMachine );
  };

} // namespace pyralis

#endif // PYRALIS_STATE_H