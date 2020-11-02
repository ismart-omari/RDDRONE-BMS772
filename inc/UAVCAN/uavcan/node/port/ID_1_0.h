/*
 *
 * BSD 3-Clause License
 * 
 * Copyright (c) 2020, NXP Drone and Rover Team
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * UAVCAN data structure definition.
 *
 * AUTOGENERATED, DO NOT EDIT.
 *
 * Source File:
 * /home/cis/drones/s32k-bms/software/rddrone-bms772/src/nxp_bms/BMS_v1/public_regulated_data_types/uavcan/node/port/ID.1.0.uavcan
 *
 * Template:
 * UnionType.j2
 *
 * Generated at:  2020-11-02 13:23:09.226553 UTC
 * Is deprecated: no
 * Fixed port ID: None
 * Full name:     uavcan.node.port.ID
 * Version:       1.0
 *
 */

#ifndef UAVCAN_NODE_PORT_ID
#define UAVCAN_NODE_PORT_ID
#include <canard_dsdl.h>

#include <uavcan/node/port/SubjectID_1_0.h>
#include <uavcan/node/port/ServiceID_1_0.h>

#define UAVCAN_NODE_PORT_ID_MSG_SIZE 4



typedef struct uavcan_node_port_idType
{
#error "TODO: UnionType
} uavcan_node_port_id;

void uavcan_node_port_id_serializeToBuffer(uavcan_node_port_id* msg, uint8_t* const buffer, const size_t starting_bit)
{
    uavcan_node_port_subject_id_serializeToBuffer(&msg->subject_id, buffer, starting_bit + 0);
    uavcan_node_port_service_id_serializeToBuffer(&msg->service_id, buffer, starting_bit + 16);
}

void uavcan_node_port_id_deserializeFromBuffer(uavcan_node_port_id* msg, const uint8_t* const buffer, const size_t buf_size, const size_t starting_bit)
{

        
        uavcan_node_port_subject_id_deserializeFromBuffer(&msg->subject_id, buffer, buf_size, starting_bit + 0);
        
        uavcan_node_port_service_id_deserializeFromBuffer(&msg->service_id, buffer, buf_size, starting_bit + 16);

    return msg;
}

#endif // UAVCAN_NODE_PORT_ID