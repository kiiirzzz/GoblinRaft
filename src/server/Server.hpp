#ifndef _RAFT_SRC_SERVER_SERVER_
#define _RAFT_SRC_SERVER_SERVER_

#include <memory>
#include <mutex>
#include <vector>
#include <uuid/uuid.h>

#include "Role.hpp"
#include "Term.hpp"

class Server {
 public:
  Server() = delete;
  Server(Role role);

  ~Server() = default;

  void Start();
  void Stop();

 private:
  void StartAsLeader();
  void StartAsCandidate();
  void StartAsFollower();

  // Role changing
  Role GetRole() const { return _role; }
  void TransferToLeader() { _role = Role::Leader; }
  void TransferToCandidate() { _role = Role::Candidate; }
  void TransferToFollower() { _role = Role::Follower; }

  // Election
  void StartElection();
  void ResponseElection();

  // Leader
  void StartTerm();
  void HeartBeat();

  // Follower
  void ResponseTerm();

 private:
  std::mutex _role_mtx;
  Role _role;
  Term _term;

  std::vector<std::shared_ptr<Server>> _quorom;
  uuid_t _uuid;
};

#endif  // _RAFT_SRC_SERVER_SERVER_