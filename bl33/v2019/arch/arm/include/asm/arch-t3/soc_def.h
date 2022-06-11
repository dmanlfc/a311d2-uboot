/*
 * Copyright (C) 2015 Amlogic, Inc. All rights reserved.
 *
 * All information contained herein is Amlogic confidential.
 *
 * This software is provided to you pursuant to Software License
 * Agreement (SLA) with Amlogic Inc ("Amlogic"). This software may be
 * used only in accordance with the terms of this agreement.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification is strictly prohibited without prior written permission
 * from Amlogic.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __SC2_DEF_H__
#define __SC2_DEF_H__

#include "secure_apb.h"


#define SEC_SYS_CPU_CFG2		CPUCTRL_SYS_CPU_CFG2

#define SEC_AO_SEC_GP_CFG0	SYSCTRL_SEC_STATUS_REG4
#define SEC_AO_SEC_GP_CFG2	SYSCTRL_SEC_STATUS_REG6
#define SEC_AO_SEC_GP_CFG3	SYSCTRL_SEC_STATUS_REG15
#define SEC_AO_SEC_GP_CFG4	SYSCTRL_SEC_STATUS_REG16
#define SEC_AO_SEC_GP_CFG5	SYSCTRL_SEC_STATUS_REG17
#define SEC_AO_SEC_GP_CFG7	SYSCTRL_SEC_STATUS_REG2
#define SEC_AO_SEC_GP_CFG8	SYSCTRL_SEC_STATUS_REG10
#define SEC_AO_SEC_GP_CFG9	SYSCTRL_SEC_STATUS_REG11


#define AO_SEC_GP_CFG8	SYSCTRL_SEC_STATUS_REG10
#define AO_SEC_GP_CFG9	SYSCTRL_SEC_STATUS_REG11
#define SEC_AO_SEC_SD_CFG15	SYSCTRL_SEC_STATUS_REG31

#define SEC_AO_RTI_STATUS_REG3		SYSCTRL_SEC_STICKY_REG1


#define AO_SEC_SD_CFG15 SEC_AO_SEC_SD_CFG15

#endif /* __SC2_DEF_H__ */
