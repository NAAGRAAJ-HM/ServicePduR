#pragma once
/******************************************************************************/
/* File   : ServicePduR_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServicePduR.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEPDUR_CORE_FUNCTIONALITIES                                                                         \
              FUNC(uint16, SERVICEPDUR_CODE) GetConfigurationId (void);                                          \
              FUNC(void,   SERVICEPDUR_CODE) DisableRouting     (TypeIdRoutingPathGroup IdRoutingPathGroup);     \
              FUNC(void,   SERVICEPDUR_CODE) EnableRouting      (TypeIdRoutingPathGroup IdRoutingPathGroup);     \

#define SERVICEPDUR_CORE_FUNCTIONALITIES_VIRTUAL                                                                 \
      virtual FUNC(uint16, SERVICEPDUR_CODE) GetConfigurationId (void) = 0;                                      \
      virtual FUNC(void,   SERVICEPDUR_CODE) DisableRouting     (TypeIdRoutingPathGroup IdRoutingPathGroup) = 0; \
      virtual FUNC(void,   SERVICEPDUR_CODE) EnableRouting      (TypeIdRoutingPathGroup IdRoutingPathGroup) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServicePduR_Functionality{
   public:
      SERVICEPDUR_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

