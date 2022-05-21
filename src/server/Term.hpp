#ifndef _RAFT_SRC_SERVER_TERM_
#define _RAFT_SRC_SERVER_TERM_

#include <mutex>

class Term {
 public:
  Term() = delete;
  Term(unsigned int term_id) : _term_id(term_id) {}
  ~Term() = default;

 private:
  std::mutex _term_id_mtx;
  unsigned int _term_id;
};

#endif  // _RAFT_SRC_SERVER_TERM_