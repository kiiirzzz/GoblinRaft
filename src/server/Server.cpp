#include "Server.hpp"

Server::Server(Role role) : _role(role), _term(0) {}

void Server::Start() {
  while (true) {

    switch (_role) {
      case Role::Leader:
        break;
      case Role::Candidate:
        break;
      case Role::Follower:
        break;
    }
  }
}

void Server::StartAsLeader() {

}