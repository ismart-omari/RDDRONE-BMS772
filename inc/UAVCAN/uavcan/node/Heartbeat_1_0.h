/*
 *
 * BSD 3-Clause License
 * 
 * Copyright 2020 NXP 
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
 * /home/cis/drones/s32k-bms/software/rddrone-bms772/src/nxp_bms/BMS_v1/public_regulated_data_types/uavcan/node/32085.Heartbeat.1.0.uavcan
 *
 * Template:
 * StructureType.j2
 *
 * Generated at:  2020-11-06 10:23:21.764463 UTC
 * Is deprecated: no
 * Fixed port ID: 32085
 * Full name:     uavcan.node.Heartbeat
 * Version:       1.0
 *
 */

#ifndef UAVCAN_NODE_HEARTBEAT
#define UAVCAN_NODE_HEARTBEAT
#include <canard_dsdl.h>


#define UAVCAN_NODE_HEARTBEAT_PORT_ID 32085

#define UAVCAN_NODE_HEARTBEAT_MSG_SIZE 7

#define MAX_PUBLICATION_PERIOD 0x1
#define OFFLINE_TIMEOUT 0x3
#define HEALTH_NOMINAL 0x0
#define HEALTH_ADVISORY 0x1
#define HEALTH_CAUTION 0x2
#define HEALTH_WARNING 0x3
#define MODE_OPERATIONAL 0x0
#define MODE_INITIALIZATION 0x1
#define MODE_MAINTENANCE 0x2
#define MODE_SOFTWARE_UPDATE 0x3
#define MODE_OFFLINE 0x7


typedef struct uavcan_node_heartbeatType
{
	uint32_t uptime;
	uint8_t health;
	uint8_t mode;
	uint32_t vendor_specific_status_code;
} uavcan_node_heartbeat;

void uavcan_node_heartbeat_serializeToBuffer(uavcan_node_heartbeat* msg, uint8_t* const buffer, const size_t starting_bit)
{
	canardDSDLSetUxx(buffer, starting_bit + 0, msg->uptime, 32);
	canardDSDLSetUxx(buffer, starting_bit + 32, msg->health, 2);
	canardDSDLSetUxx(buffer, starting_bit + 34, msg->mode, 3);
	canardDSDLSetUxx(buffer, starting_bit + 37, msg->vendor_specific_status_code, 19);
}

void uavcan_node_heartbeat_deserializeFromBuffer(uavcan_node_heartbeat* msg, const uint8_t* const buffer, const size_t buf_size, const size_t starting_bit)
{

	msg->uptime = canardDSDLGetU32(buffer, buf_size, starting_bit + 0, 32);
	msg->health = canardDSDLGetU8(buffer, buf_size, starting_bit + 32, 2);
	msg->mode = canardDSDLGetU8(buffer, buf_size, starting_bit + 34, 3);
	msg->vendor_specific_status_code = canardDSDLGetU32(buffer, buf_size, starting_bit + 37, 19);

    return msg;
}

#endif // UAVCAN_NODE_HEARTBEAT
