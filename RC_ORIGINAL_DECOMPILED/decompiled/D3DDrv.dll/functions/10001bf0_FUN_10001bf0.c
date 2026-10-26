/*
 * FUN_10001bf0 at 10001bf0
 * undefined4 __cdecl FUN_10001bf0(HWND param_1, char * param_2, int param_3, int param_4)
 * Address ranges: 10001bf0-10001f6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10001bf0(HWND param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  _SYSTEMTIME local_10;
  
  puVar2 = &DAT_10026fe8;
  for (iVar1 = 0x47ac; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  GetSystemTime(&local_10);
  FUN_100106b0(s_D3DDrv_Log_10013fe8);
  FUN_100020f0(s__________________________________10013fa4);
  FUN_100020f0(s_D3DDrv_v_i__i_10013f94);
  FUN_100020f0(s_Build_Date__Aug_22_2000__Time__1_10013f68);
  FUN_100020f0(s__________________________________10013f24);
  FUN_100020f0(s_Current_Time___2i__2i__2i_10013f08);
  FUN_100020f0(s_Current_Date___2i__2i__4i_10013eec);
  FUN_100020f0(s____D3D_Driver_Initializing____10013ec8);
  DAT_10026fe8 = param_1;
  iVar1 = FUN_10004520(param_2);
  if (((((iVar1 != 0) && (iVar1 = FUN_100031a0(), iVar1 != 0)) &&
       (iVar1 = FUN_100037f0(), iVar1 != 0)) &&
      ((iVar1 = FUN_10002150(), iVar1 != 0 && (iVar1 = FUN_10002290(), iVar1 != 0)))) &&
     (iVar1 = FUN_100022e0(), iVar1 != 0)) {
    if ((param_3 == -1) && (param_4 == -1)) {
      iVar1 = FUN_100038f0(param_1,DAT_10027080,DAT_10027084,DAT_10027070,0);
    }
    else {
      iVar1 = FUN_100038f0(param_1,param_3,param_4,0x10,1);
    }
    if ((((iVar1 != 0) && (iVar1 = FUN_10003ac0(), iVar1 != 0)) &&
        (iVar1 = FUN_10003c10(), iVar1 != 0)) &&
       (((iVar1 = FUN_10003f60(), iVar1 != 0 && (iVar1 = FUN_10003b40(), iVar1 != 0)) &&
        ((iVar1 = FUN_10002720(), iVar1 != 0 && (iVar1 = FUN_10002ef0(), iVar1 != 0)))))) {
      DAT_10038e74 = (uint)(1 < *(ushort *)(&DAT_1002b326 + DAT_10030624 * 0x938));
      FUN_100020f0(s_____D3DMain_SetRenderState_____10013ea4);
      iVar1 = (**(code **)(*DAT_100274c8 + 0x24))(DAT_100274c8);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*DAT_100274c8 + 0x30))(DAT_100274c8,DAT_100274cc);
        if (iVar1 == 0) {
          FUN_100036d0((void *)0x0,0.0,0.0,0.0,0,0);
          (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x17,4);
          (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,4,1);
          (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x1d,0);
          (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x1a,1);
          (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,9,2);
          (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x16,1);
          (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x29,1);
          (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x12,5);
          (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x11,2);
          iVar1 = (**(code **)(*DAT_100274c8 + 0x28))(DAT_100274c8);
          if (iVar1 == 0) {
            DAT_10038e64 = 1;
            iVar1 = FUN_10002b40();
            if ((iVar1 != 0) && (iVar1 = FUN_100031a0(), iVar1 != 0)) {
              iVar1 = FUN_10007170();
              if (iVar1 == 0) {
                return 0;
              }
              FUN_10001940();
              FUN_10001950();
              FUN_100020f0(s____Initialization_was_successful_10013dcc);
              return 1;
            }
          }
          else {
            FUN_10001000(iVar1);
            FUN_100020f0(s_D3DMain_InitD3D__EndScene_failed_10013e20);
          }
        }
        else {
          FUN_10001000(iVar1);
          FUN_100020f0(s_D3DMain_InitD3D__SetViewport_fai_10013e4c);
        }
      }
      else {
        FUN_10001000(iVar1);
        FUN_100020f0(s_D3DMain_InitD3D__BeginScene_fail_10013e78);
      }
    }
  }
  FUN_100020f0(s____Initialization_was_NOT_succes_10013df4);
  FUN_10001f70();
  return 0;
}

