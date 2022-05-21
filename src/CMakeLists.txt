aux_source_directory(common COMMON_SRCS)
aux_source_directory(proto PROTO_SRCS)
aux_source_directory(rpc RPC_SRCS)
aux_source_directory(server SERVER_SRCS)

add_executable(raft
    ${COMMON_SRCS}
    ${PROTO_SRCS}
    ${RPC_SRCS}
    ${SERVER_SRCS}
)

target_include_directories(raft PRIVATE .)