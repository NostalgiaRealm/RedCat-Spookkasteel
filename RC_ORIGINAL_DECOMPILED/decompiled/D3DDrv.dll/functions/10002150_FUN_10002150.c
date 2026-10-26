/*
 * FUN_10002150 at 10002150
 * undefined4 __stdcall FUN_10002150(void)
 * Address ranges: 10002150-100021c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002150(void)

{
  int iVar1;
  
  FUN_100020f0(s_____D3DMain_EnumDisplayModes_____1001405c);
  DAT_1002a6cc = (undefined4 *)0x0;
  iVar1 = (**(code **)(*DAT_100274a8 + 0x20))(DAT_100274a8,0,0,0,&LAB_10002230);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_100020f0(s_EnumDisplayModes_failed___s_1001403c);
    DAT_1002a6cc = (undefined4 *)0x0;
    return 0;
  }
  FUN_10007d59(&DAT_1002a6d0,DAT_1002a6cc,0x10,&LAB_100021d0);
  return 1;
}

