/* Cable: CMake Bootstrap Library.
 * Copyright 2018 Pawel Bylica.
 * Licensed under the Apache License, Version 2.0. See the LICENSE file.
 */

/* Generated by Cable Build Info on 2018-12-21T11:22:37. Do not modify directly. */

#include "buildinfo.h"

const struct buildinfo* aleth_get_buildinfo()
{
    static const struct buildinfo buildinfo = {
        .project_name = "aleth",
        .project_version = "1.5.0-alpha.7+commit.0b303345",
        .project_name_with_version = "aleth-1.5.0-alpha.7+commit.0b303345",
        .git_commit_hash = "0b303345127e4ab4ccdf90d2e40e380231db16a8",
        .system_name = "linux",
        .system_processor = "x86_64",
        .compiler_id = "gnu",
        .compiler_version = "7.3.0",
        .build_type = "relwithdebinfo",
    };
    return &buildinfo;
}
