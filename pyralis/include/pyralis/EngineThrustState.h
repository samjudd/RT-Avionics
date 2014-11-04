#ifndef PYRALIS_ENGINETHRUSTSTATE_H
#define PYRALIS_ENGINETHRUSTSTATE_H

#include <pyralis/State.h>
#include <pyralis/EngineStatus.h>

namespace pyralis {

  class EngineThrustState : public State {
    static EngineThrustState *_instance;
    EngineStatus _status;
  protected:
    EngineThrustState();
  public:
    ~EngineThrustState();
    static State *instance();

    const EngineStatus &status() const;
    virtual void transition( StateMachine &stateMachine );
  };

} // namespace pyralis

#endif // PYRALIS_ENGINETHRUSTSTATE_H