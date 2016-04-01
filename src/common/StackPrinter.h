/********************************************************************
 * Copyright (c) 2013 - 2014, Pivotal Inc.
 * All rights reserved.
 *
 * Author: Zhanwei Wang
 ********************************************************************/
/********************************************************************
 * 2014 -
 * open source under Apache License Version 2.0
 ********************************************************************/
/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _HDFS_LIBHDFS3_COMMON_STACK_PRINTER_H_
#define _HDFS_LIBHDFS3_COMMON_STACK_PRINTER_H_

#include "platform.h"

#include <string>

#ifndef DEFAULT_STACK_PREFIX
#define DEFAULT_STACK_PREFIX "\t@\t"
#endif

namespace Hdfs {
namespace Internal {

extern const std::string PrintStack(int skip, int maxDepth);

}
}

#endif /* _HDFS_LIBHDFS3_COMMON_STACK_PRINTER_H_ */
