/*
 * FUN_004010c0 at 004010c0
 * int __stdcall FUN_004010c0(void)
 * Address ranges: 004010c0-00401126
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004010c0(void)

{
  int iVar1;
  CHAR local_40 [64];
  
  FUN_00401020(s___Settings_Menu_ini_004070bc);
  iVar1 = FUN_00401000(s_General_004070a8,s_ExitCode_004070b0);
  if (iVar1 == 0) {
    FUN_00401500(local_40,(byte *)s__s___d__No_value_specified_for_m_0040703c);
    MessageBoxA((HWND)0x0,local_40,s_MOTOR_00407034,0);
  }
  return iVar1;
}

