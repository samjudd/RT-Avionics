#ifndef PYRALIS_ENGINEABORTSTATE_H
#define PYRALIS_ENGINEABORTSTATE_H

#include <pyralis/State.h>

namespace pyralis {

  class EngineAbortState : public State {
    static EngineAbortState *_instance;
  protected:
    EngineAbortState();
  public:
    ~EngineAbortState();
    static State *instance();

    virtual void transition( StateMachine &stateMachine );
  };

} // namespace pyralis

#endif // PYRALIS_ENGINEABORTSTATE_H