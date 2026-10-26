/*
 * FUN_10002af0 at 10002af0
 * undefined4 __stdcall FUN_10002af0(void)
 * Address ranges: 10002af0-10002b30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002af0(void)

{
  int iVar1;
  
  DAT_10030a50 = 0;
  iVar1 = (**(code **)(*DAT_100274a8 + 0x24))(DAT_100274a8,0x11,0,0,&LAB_10002a10);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_100020f0(s_Main_EnumSurfaceFormats__Enumera_10014208);
    return 0;
  }
  return 1;
}

