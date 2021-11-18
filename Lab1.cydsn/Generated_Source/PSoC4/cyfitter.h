/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.3
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2019 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* LED */
#define LED__0__DR CYREG_GPIO_PRT1_DR
#define LED__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LED__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LED__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LED__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define LED__0__HSIOM_MASK 0x0F000000u
#define LED__0__HSIOM_SHIFT 24u
#define LED__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LED__0__INTR CYREG_GPIO_PRT1_INTR
#define LED__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LED__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define LED__0__MASK 0x40u
#define LED__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED__0__PC CYREG_GPIO_PRT1_PC
#define LED__0__PC2 CYREG_GPIO_PRT1_PC2
#define LED__0__PORT 1u
#define LED__0__PS CYREG_GPIO_PRT1_PS
#define LED__0__SHIFT 6u
#define LED__DR CYREG_GPIO_PRT1_DR
#define LED__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LED__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LED__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LED__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LED__INTR CYREG_GPIO_PRT1_INTR
#define LED__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LED__INTSTAT CYREG_GPIO_PRT1_INTR
#define LED__MASK 0x40u
#define LED__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED__PC CYREG_GPIO_PRT1_PC
#define LED__PC2 CYREG_GPIO_PRT1_PC2
#define LED__PORT 1u
#define LED__PS CYREG_GPIO_PRT1_PS
#define LED__SHIFT 6u

/* Clock_1 */
#define Clock_1__DIV_ID 0x00000040u
#define Clock_1__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define Clock_1__PA_DIV_ID 0x000000FFu

/* Button_1 */
#define Button_1__0__DR CYREG_GPIO_PRT1_DR
#define Button_1__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Button_1__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Button_1__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Button_1__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Button_1__0__HSIOM_MASK 0x0000000Fu
#define Button_1__0__HSIOM_SHIFT 0u
#define Button_1__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_1__0__INTR CYREG_GPIO_PRT1_INTR
#define Button_1__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_1__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define Button_1__0__MASK 0x01u
#define Button_1__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Button_1__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Button_1__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Button_1__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Button_1__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Button_1__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Button_1__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Button_1__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Button_1__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Button_1__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Button_1__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Button_1__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Button_1__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Button_1__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Button_1__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Button_1__0__PC CYREG_GPIO_PRT1_PC
#define Button_1__0__PC2 CYREG_GPIO_PRT1_PC2
#define Button_1__0__PORT 1u
#define Button_1__0__PS CYREG_GPIO_PRT1_PS
#define Button_1__0__SHIFT 0u
#define Button_1__DR CYREG_GPIO_PRT1_DR
#define Button_1__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Button_1__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Button_1__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Button_1__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_1__INTR CYREG_GPIO_PRT1_INTR
#define Button_1__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_1__INTSTAT CYREG_GPIO_PRT1_INTR
#define Button_1__MASK 0x01u
#define Button_1__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Button_1__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Button_1__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Button_1__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Button_1__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Button_1__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Button_1__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Button_1__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Button_1__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Button_1__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Button_1__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Button_1__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Button_1__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Button_1__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Button_1__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Button_1__PC CYREG_GPIO_PRT1_PC
#define Button_1__PC2 CYREG_GPIO_PRT1_PC2
#define Button_1__PORT 1u
#define Button_1__PS CYREG_GPIO_PRT1_PS
#define Button_1__SHIFT 0u

/* Button_2 */
#define Button_2__0__DR CYREG_GPIO_PRT1_DR
#define Button_2__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Button_2__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Button_2__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Button_2__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Button_2__0__HSIOM_MASK 0x000000F0u
#define Button_2__0__HSIOM_SHIFT 4u
#define Button_2__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_2__0__INTR CYREG_GPIO_PRT1_INTR
#define Button_2__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_2__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define Button_2__0__MASK 0x02u
#define Button_2__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Button_2__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Button_2__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Button_2__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Button_2__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Button_2__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Button_2__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Button_2__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Button_2__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Button_2__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Button_2__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Button_2__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Button_2__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Button_2__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Button_2__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Button_2__0__PC CYREG_GPIO_PRT1_PC
#define Button_2__0__PC2 CYREG_GPIO_PRT1_PC2
#define Button_2__0__PORT 1u
#define Button_2__0__PS CYREG_GPIO_PRT1_PS
#define Button_2__0__SHIFT 1u
#define Button_2__DR CYREG_GPIO_PRT1_DR
#define Button_2__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Button_2__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Button_2__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Button_2__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_2__INTR CYREG_GPIO_PRT1_INTR
#define Button_2__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_2__INTSTAT CYREG_GPIO_PRT1_INTR
#define Button_2__MASK 0x02u
#define Button_2__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Button_2__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Button_2__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Button_2__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Button_2__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Button_2__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Button_2__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Button_2__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Button_2__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Button_2__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Button_2__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Button_2__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Button_2__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Button_2__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Button_2__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Button_2__PC CYREG_GPIO_PRT1_PC
#define Button_2__PC2 CYREG_GPIO_PRT1_PC2
#define Button_2__PORT 1u
#define Button_2__PS CYREG_GPIO_PRT1_PS
#define Button_2__SHIFT 1u

/* Button_3 */
#define Button_3__0__DR CYREG_GPIO_PRT1_DR
#define Button_3__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Button_3__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Button_3__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Button_3__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Button_3__0__HSIOM_MASK 0x00000F00u
#define Button_3__0__HSIOM_SHIFT 8u
#define Button_3__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_3__0__INTR CYREG_GPIO_PRT1_INTR
#define Button_3__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_3__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define Button_3__0__MASK 0x04u
#define Button_3__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Button_3__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Button_3__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Button_3__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Button_3__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Button_3__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Button_3__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Button_3__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Button_3__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Button_3__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Button_3__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Button_3__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Button_3__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Button_3__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Button_3__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Button_3__0__PC CYREG_GPIO_PRT1_PC
#define Button_3__0__PC2 CYREG_GPIO_PRT1_PC2
#define Button_3__0__PORT 1u
#define Button_3__0__PS CYREG_GPIO_PRT1_PS
#define Button_3__0__SHIFT 2u
#define Button_3__DR CYREG_GPIO_PRT1_DR
#define Button_3__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Button_3__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Button_3__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Button_3__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_3__INTR CYREG_GPIO_PRT1_INTR
#define Button_3__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_3__INTSTAT CYREG_GPIO_PRT1_INTR
#define Button_3__MASK 0x04u
#define Button_3__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Button_3__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Button_3__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Button_3__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Button_3__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Button_3__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Button_3__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Button_3__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Button_3__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Button_3__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Button_3__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Button_3__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Button_3__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Button_3__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Button_3__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Button_3__PC CYREG_GPIO_PRT1_PC
#define Button_3__PC2 CYREG_GPIO_PRT1_PC2
#define Button_3__PORT 1u
#define Button_3__PS CYREG_GPIO_PRT1_PS
#define Button_3__SHIFT 2u

/* Button_4 */
#define Button_4__0__DR CYREG_GPIO_PRT1_DR
#define Button_4__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Button_4__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Button_4__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Button_4__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Button_4__0__HSIOM_MASK 0x0000F000u
#define Button_4__0__HSIOM_SHIFT 12u
#define Button_4__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_4__0__INTR CYREG_GPIO_PRT1_INTR
#define Button_4__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_4__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define Button_4__0__MASK 0x08u
#define Button_4__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Button_4__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Button_4__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Button_4__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Button_4__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Button_4__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Button_4__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Button_4__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Button_4__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Button_4__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Button_4__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Button_4__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Button_4__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Button_4__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Button_4__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Button_4__0__PC CYREG_GPIO_PRT1_PC
#define Button_4__0__PC2 CYREG_GPIO_PRT1_PC2
#define Button_4__0__PORT 1u
#define Button_4__0__PS CYREG_GPIO_PRT1_PS
#define Button_4__0__SHIFT 3u
#define Button_4__DR CYREG_GPIO_PRT1_DR
#define Button_4__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Button_4__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Button_4__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Button_4__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_4__INTR CYREG_GPIO_PRT1_INTR
#define Button_4__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_4__INTSTAT CYREG_GPIO_PRT1_INTR
#define Button_4__MASK 0x08u
#define Button_4__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Button_4__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Button_4__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Button_4__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Button_4__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Button_4__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Button_4__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Button_4__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Button_4__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Button_4__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Button_4__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Button_4__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Button_4__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Button_4__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Button_4__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Button_4__PC CYREG_GPIO_PRT1_PC
#define Button_4__PC2 CYREG_GPIO_PRT1_PC2
#define Button_4__PORT 1u
#define Button_4__PS CYREG_GPIO_PRT1_PS
#define Button_4__SHIFT 3u

/* Button_5 */
#define Button_5__0__DR CYREG_GPIO_PRT1_DR
#define Button_5__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Button_5__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Button_5__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Button_5__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Button_5__0__HSIOM_MASK 0x00F00000u
#define Button_5__0__HSIOM_SHIFT 20u
#define Button_5__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_5__0__INTR CYREG_GPIO_PRT1_INTR
#define Button_5__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_5__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define Button_5__0__MASK 0x20u
#define Button_5__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Button_5__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Button_5__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Button_5__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Button_5__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Button_5__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Button_5__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Button_5__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Button_5__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Button_5__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Button_5__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Button_5__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Button_5__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Button_5__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Button_5__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Button_5__0__PC CYREG_GPIO_PRT1_PC
#define Button_5__0__PC2 CYREG_GPIO_PRT1_PC2
#define Button_5__0__PORT 1u
#define Button_5__0__PS CYREG_GPIO_PRT1_PS
#define Button_5__0__SHIFT 5u
#define Button_5__DR CYREG_GPIO_PRT1_DR
#define Button_5__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Button_5__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Button_5__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Button_5__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_5__INTR CYREG_GPIO_PRT1_INTR
#define Button_5__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Button_5__INTSTAT CYREG_GPIO_PRT1_INTR
#define Button_5__MASK 0x20u
#define Button_5__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Button_5__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Button_5__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Button_5__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Button_5__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Button_5__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Button_5__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Button_5__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Button_5__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Button_5__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Button_5__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Button_5__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Button_5__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Button_5__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Button_5__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Button_5__PC CYREG_GPIO_PRT1_PC
#define Button_5__PC2 CYREG_GPIO_PRT1_PC2
#define Button_5__PORT 1u
#define Button_5__PS CYREG_GPIO_PRT1_PS
#define Button_5__SHIFT 5u

/* Input_Buttons */
#define Input_Buttons_sts_sts_reg__0__MASK 0x01u
#define Input_Buttons_sts_sts_reg__0__POS 0
#define Input_Buttons_sts_sts_reg__1__MASK 0x02u
#define Input_Buttons_sts_sts_reg__1__POS 1
#define Input_Buttons_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL2
#define Input_Buttons_sts_sts_reg__16BIT_STATUS_REG CYREG_UDB_W16_ST2
#define Input_Buttons_sts_sts_reg__2__MASK 0x04u
#define Input_Buttons_sts_sts_reg__2__POS 2
#define Input_Buttons_sts_sts_reg__3__MASK 0x08u
#define Input_Buttons_sts_sts_reg__3__POS 3
#define Input_Buttons_sts_sts_reg__4__MASK 0x10u
#define Input_Buttons_sts_sts_reg__4__POS 4
#define Input_Buttons_sts_sts_reg__MASK 0x1Fu
#define Input_Buttons_sts_sts_reg__MASK_REG CYREG_UDB_W8_MSK2
#define Input_Buttons_sts_sts_reg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL2
#define Input_Buttons_sts_sts_reg__STATUS_REG CYREG_UDB_W8_ST2

/* Miscellaneous */
#define CY_PROJECT_NAME "Lab1"
#define CY_VERSION "PSoC Creator  4.3"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 24u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x112D11A1u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 24u
#define CYDEV_CHIP_MEMBER_4AA 23u
#define CYDEV_CHIP_MEMBER_4AB 28u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4D 18u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 25u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 22u
#define CYDEV_CHIP_MEMBER_4I 30u
#define CYDEV_CHIP_MEMBER_4J 19u
#define CYDEV_CHIP_MEMBER_4K 20u
#define CYDEV_CHIP_MEMBER_4L 29u
#define CYDEV_CHIP_MEMBER_4M 27u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 26u
#define CYDEV_CHIP_MEMBER_4Q 15u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 21u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 16u
#define CYDEV_CHIP_MEMBER_4Z 17u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 31u
#define CYDEV_CHIP_MEMBER_FM3 35u
#define CYDEV_CHIP_MEMBER_FM4 36u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 32u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 33u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 34u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4M
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4M_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 10u
#define CYDEV_DFT_SELECT_CLK1 11u
#define CYDEV_DMA_CHANNELS_AVAILABLE 8
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_INTR_NUMBER_DMA 13u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDIO 3.3
#define CYDEV_VDDIO_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_m0s8can_VERSION 1
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_m0s8wco_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define DMA_CHANNELS_USED__MASK 0u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
