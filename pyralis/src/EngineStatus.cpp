#include <pyralis/EngineStatus.h>

namespace pyralis {

  bool EngineStatus::isNominal() const {
    return _value == ENGINE_STATUS_NOMINAL;
  }

  bool EngineStatus::isAbortScenario() const {
    return _value == ENGINE_STATUS_ABORT;
  }

  bool EngineStatus::isDepleted() const {
    return _value == ENGINE_STATUS_DEPLETED;
  }

  bool EngineStatus::isUnknown() const {
    return !isNominal() && !isAbortScenario() && !isDepleted();
  }

} // namespace pyralis
