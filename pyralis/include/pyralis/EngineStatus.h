#ifndef PYRALIS_ENGINESTATUS_H
#define PYRALIS_ENGINESTATUS_H

namespace pyralis {

  enum EngineStatusValue {
    ENGINE_STATUS_NOMINAL,
    ENGINE_STATUS_DEPLETED,
    ENGINE_STATUS_ABORT
  };

  class EngineStatus {
    EngineStatusValue _value;
  public:
    bool isNominal() const;
    bool isDepleted() const;
    bool isAbortScenario() const;
    bool isUnknown() const;
  };

} // namespace pyralis

#endif // PYRALIS_ENGINESTATUS_H