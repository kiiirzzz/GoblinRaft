#include "Server.hpp"

int main(int argc, char *argv[]) {
    Server s(Role::Follower);
    s.Start();
    return 0;
}