/*
 * FUN_100022e0 at 100022e0
 * undefined4 __stdcall FUN_100022e0(void)
 * Address ranges: 100022e0-10002333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100022e0(void)

{
  int iVar1;
  
  FUN_100020f0(s_____D3DMain_EnumDevices_____100140e8);
  DAT_1002a9f0 = 0;
  iVar1 = (**(code **)(*DAT_100274ac + 0xc))(DAT_100274ac,&LAB_10002340,0);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_100020f0(s_Enumeration_of_drivers_failed____100140c0);
    return 0;
  }
  DAT_10030624 = 0;
  return 1;
}

