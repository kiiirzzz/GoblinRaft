#ifndef _RAFT_SRC_SERVER_ROLE_
#define _RAFT_SRC_SERVER_ROLE_

enum class Role {
  Leader = 0,
  Candidate = 1,
  Follower = 2,
};

#endif  // _RAFT_SRC_SERVER_ROLE_
