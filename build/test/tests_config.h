/*
 * Copyright (c) 2016, 2018, Oracle and/or its affiliates. All rights reserved.
 *               2020 MariaDB Corporation AB
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0, as
 * published by the Free Software Foundation.
 *
 * This program is also distributed with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms,
 * as designated in a particular file or component or in included license
 * documentation.  The authors of MySQL hereby grant you an
 * additional permission to link the program and your derivative works
 * with the separately licensed software that they have included with
 * MySQL.
 *
 * Without limiting anything contained in the foregoing, this file,
 * which is part of MySQL Connector/C++, is also subject to the
 * Universal FOSS Exception, version 1.0, a copy of which can be found at
 * http://oss.oracle.com/licenses/universal-foss-exception.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
 */

#ifndef _TESTS_CONFIG_IN_
#define _TESTS_CONFIG_IN_

#include <cstring>

#define TEST_DEFAULT_HOST   "tcp://localhost:3306"
#define TEST_HOST_ENV_KEY   "TEST_HOST"
#define TEST_DEFAULT_DB     "test"
#define TEST_SCHEMA_ENV_KEY "TEST_SCHEMA"
#define TEST_DEFAULT_LOGIN  "root"
#define TEST_UID_ENV_KEY    "TEST_UID"
#define TEST_DEFAULT_PASSWD "root"
#define TEST_PASSWD_ENV_KEY "TEST_PASSWORD"
#define TEST_USETLS         false
#define TEST_USETLS_ENV_KEY   "TEST_USETLS"
#define TEST_VERBOSE        false
#define TEST_VERBOSE_ENV_KEY   "TEST_VERBOSE"

#define ENV_OR_DEFAULT(_KEY, _DEFAULT_VALUE) (std::getenv(_KEY) != nullptr ? std::getenv(_KEY) : _DEFAULT_VALUE)

#define HOST_ENV_OR_DEFAULT ENV_OR_DEFAULT(TEST_HOST_ENV_KEY, TEST_DEFAULT_HOST)
#define SCHEMA_ENV_OR_DEFAULT ENV_OR_DEFAULT(TEST_SCHEMA_ENV_KEY, TEST_DEFAULT_DB)
#define UID_ENV_OR_DEFAULT ENV_OR_DEFAULT(TEST_UID_ENV_KEY, TEST_DEFAULT_LOGIN)
#define PASSWD_ENV_OR_DEFAULT ENV_OR_DEFAULT(TEST_PASSWD_ENV_KEY, TEST_DEFAULT_PASSWD)
#define USETLS_ENV_OR_DEFAULT (std::getenv(TEST_USETLS_ENV_KEY) != nullptr ? (strcmp(std::getenv(TEST_USETLS_ENV_KEY), "true") == 0 ? true : false) : TEST_USETLS)
#define VERBOSE_ENV_OR_DEFAULT (std::getenv(TEST_VERBOSE_ENV_KEY) != nullptr ? (strcmp(std::getenv(TEST_VERBOSE_ENV_KEY), "true") == 0 ? true : false) : TEST_VERBOSE)

#endif //_TESTS_CONFIG_IN_
