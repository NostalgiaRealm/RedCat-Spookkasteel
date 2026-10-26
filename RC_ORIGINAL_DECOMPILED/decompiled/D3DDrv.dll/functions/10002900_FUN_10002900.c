/*
 * FUN_10002900 at 10002900
 * undefined4 __stdcall FUN_10002900(void)
 * Address ranges: 10002900-1000293c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002900(void)

{
  int iVar1;
  
  DAT_10034c54 = 0;
  iVar1 = (**(code **)(*DAT_100274c8 + 0x20))(DAT_100274c8,&LAB_10002940,0);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_100020f0(s_Main_EnumTextureFormats__Enumera_100141c0);
    return 0;
  }
  return 1;
}

