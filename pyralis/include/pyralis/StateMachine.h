#ifndef PYRALIS_STATEMACHINE_H
#define PYRALIS_STATEMACHINE_H

namespace pyralis {

  class State;

  class StateMachine {
    friend class State;
    State *_state;

    void changeState( State *nextState );

    StateMachine( const StateMachine &other ) = delete;
    StateMachine& operator=( const StateMachine &other ) = delete;
  public:
  };

} // namespace pyralis

#endif // PYRALIS_STATEMACHINE_H