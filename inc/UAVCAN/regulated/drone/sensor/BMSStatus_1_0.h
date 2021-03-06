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
 * /home/cis/drones/s32k-bms/software/rddrone-bms772/src/nxp_bms/BMS_v1/public_regulated_data_types/regulated/drone/sensor/BMSStatus.1.0.uavcan
 *
 * Template:
 * StructureType.j2
 *
 * Generated at:  2020-11-06 10:23:23.936636 UTC
 * Is deprecated: no
 * Fixed port ID: None
 * Full name:     regulated.drone.sensor.BMSStatus
 * Version:       1.0
 *
 */

#ifndef REGULATED_DRONE_SENSOR_BMSSTATUS
#define REGULATED_DRONE_SENSOR_BMSSTATUS
#include <canard_dsdl.h>

#include <regulated/drone/sensor/BMSStatusValue_1_0.h>

#define REGULATED_DRONE_SENSOR_BMSSTATUS_MSG_SIZE 11



typedef struct regulated_drone_sensor_bmsstatusType
{
	float temperature;
	float voltage;
	float current;
	float energy_consumed;
	uint8_t battery_id;
	uint8_t state_of_charge;
	bool output_status;
	regulated_drone_sensor_bmsstatus_value status;
} regulated_drone_sensor_bmsstatus;

void regulated_drone_sensor_bmsstatus_serializeToBuffer(regulated_drone_sensor_bmsstatus* msg, uint8_t* const buffer, const size_t starting_bit)
{
	canardDSDLSetF16(buffer, starting_bit + 0, msg->temperature);
	canardDSDLSetF16(buffer, starting_bit + 16, msg->voltage);
	canardDSDLSetF16(buffer, starting_bit + 32, msg->current);
	canardDSDLSetF16(buffer, starting_bit + 48, msg->energy_consumed);
	canardDSDLSetUxx(buffer, starting_bit + 64, msg->battery_id, 8);
	canardDSDLSetUxx(buffer, starting_bit + 72, msg->state_of_charge, 7);
	canardDSDLSetBit(buffer, starting_bit + 79, msg->output_status);
    regulated_drone_sensor_bmsstatus_value_serializeToBuffer(&msg->status, buffer, starting_bit + 80);
}

void regulated_drone_sensor_bmsstatus_deserializeFromBuffer(regulated_drone_sensor_bmsstatus* msg, const uint8_t* const buffer, const size_t buf_size, const size_t starting_bit)
{

	msg->temperature = canardDSDLGetF16(buffer, buf_size, starting_bit + 0);
	msg->voltage = canardDSDLGetF16(buffer, buf_size, starting_bit + 16);
	msg->current = canardDSDLGetF16(buffer, buf_size, starting_bit + 32);
	msg->energy_consumed = canardDSDLGetF16(buffer, buf_size, starting_bit + 48);
	msg->battery_id = canardDSDLGetU8(buffer, buf_size, starting_bit + 64, 8);
	msg->state_of_charge = canardDSDLGetU8(buffer, buf_size, starting_bit + 72, 7);
	msg->output_status = canardDSDLGetBit(buffer, buf_size, starting_bit + 79);
        
        regulated_drone_sensor_bmsstatus_value_deserializeFromBuffer(&msg->status, buffer, buf_size, starting_bit + 80);

    return msg;
}

#endif // REGULATED_DRONE_SENSOR_BMSSTATUS
