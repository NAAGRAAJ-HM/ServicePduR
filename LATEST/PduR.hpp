#pragma once
/******************************************************************************/
/* File   : PduR.hpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgPduR.hpp"
#include "PduR_core.hpp"
#include "infPduR_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_PduR:
      INTERFACES_EXPORTED_PDUR
      public abstract_module
   ,  public class_PduR_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, PDUR_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, PDUR_CONFIG_DATA, PDUR_APPL_CONST) lptrCfgModule
      );
      FUNC(void, PDUR_CODE) DeInitFunction (void);
      FUNC(void, PDUR_CODE) MainFunction   (void);
      PDUR_CORE_FUNCTIONALITIES
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
extern VAR(module_PduR, PDUR_VAR) PduR;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

