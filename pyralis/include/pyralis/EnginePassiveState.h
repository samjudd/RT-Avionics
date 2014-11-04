#ifndef PYRALIS_ENGINEPASSIVESTATE_H
#define PYRALIS_ENGINEPASSIVESTATE_H

#include <pyralis/State.h>

namespace pyralis {

  class EnginePassiveState : public State {
    static EnginePassiveState *_instance;
    bool _shouldStartup;
  protected:
    EnginePassiveState();
    bool shouldStartup() const;
  public:
    ~EnginePassiveState();
    static State *instance();

    virtual void transition( StateMachine &stateMachine );
  };

} // namespace pyralis

#endif // PYRALIS_ENGINEPASSIVESTATE_H