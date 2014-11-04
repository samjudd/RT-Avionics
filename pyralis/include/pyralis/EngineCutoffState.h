#ifndef PYRALIS_ENGINECUTOFFSTATE_H
#define PYRALIS_ENGINECUTOFFSTATE_H

#include <pyralis/State.h>

namespace pyralis {

  class EngineCutoffState : public State {
    static EngineCutoffState *_instance;
  protected:
    EngineCutoffState();
  public:
    ~EngineCutoffState();
    static State *instance();

    virtual void transition( StateMachine &stateMachine );
  };

} // namespace pyralis

#endif // PYRALIS_ENGINECUTOFFSTATE_H