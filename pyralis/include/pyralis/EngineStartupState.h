#ifndef PYRALIS_ENGINESTARTUPSTATE_H
#define PYRALIS_ENGINESTARTUPSTATE_H

#include <pyralis/State.h>

namespace pyralis {

  class EngineStartupState : public State {
    static EngineStartupState *_instance;
    bool _shouldStartup;
  protected:
    EngineStartupState();
    bool shouldStartup() const;
  public:
    ~EngineStartupState();
    static State *instance();

    virtual void transition( StateMachine &stateMachine );
  };

} // namespace pyralis

#endif // PYRALIS_ENGINESTARTUPSTATE_H