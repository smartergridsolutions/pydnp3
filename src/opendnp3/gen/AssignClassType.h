/*
 * -*- coding: utf-8 -*- {{{
 * vim: set fenc=utf-8 ft=python sw=4 ts=4 sts=4 et:
 *
 * Copyright 2018, Kisensum.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Neither Kisensum, nor any of its employees, nor any jurisdiction or
 * organization that has cooperated in the development of these materials,
 * makes any warranty, express or implied, or assumes any legal liability
 * or responsibility for the accuracy, completeness, or usefulness or any
 * information, apparatus, product, software, or process disclosed, or
 * represents that its use would not infringe privately owned rights.
 * Reference herein to any specific commercial product, process, or service
 * by trade name, trademark, manufacturer, or otherwise does not necessarily
 * constitute or imply its endorsement, recommendation, or favoring by Kisensum.
 * }}}
 */

#ifndef PYDNP3_OPENDNP3_GEN_ASSIGNCLASSTYPE_H
#define PYDNP3_OPENDNP3_GEN_ASSIGNCLASSTYPE_H

#include <pybind11/pybind11.h>
#include <Python.h>

#include <opendnp3/gen/AssignClassType.h>

#ifdef PYDNP3_OPENDNP3

namespace py = pybind11;
using namespace std;

void bind_AssignClassType(py::module &m)
{
    // ----- enum class: opendnp3::AssignClassType -----
    py::enum_<opendnp3::AssignClassType>(m, "AssignClassType",
        "Groups that can be used inconjunction with the ASSIGN_CLASS function code.")

        .value("BinaryInput", opendnp3::AssignClassType::BinaryInput)
		.value("DoubleBinaryInput", opendnp3::AssignClassType::DoubleBinaryInput)
		.value("Counter", opendnp3::AssignClassType::Counter)
		.value("FrozenCounter", opendnp3::AssignClassType::FrozenCounter)
		.value("AnalogInput", opendnp3::AssignClassType::AnalogInput)
		.value("BinaryOutputStatus", opendnp3::AssignClassType::BinaryOutputStatus)
		.value("AnalogOutputStatus", opendnp3::AssignClassType::AnalogOutputStatus);
}

#endif // PYDNP3_OPENDNP3
#endif
