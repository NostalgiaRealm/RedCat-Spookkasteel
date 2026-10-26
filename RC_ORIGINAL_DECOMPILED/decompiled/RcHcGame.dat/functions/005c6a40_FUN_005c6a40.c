/*
 * FUN_005c6a40 at 005c6a40
 * undefined FUN_005c6a40(void)
 * Address ranges: 005c6a40-005c6a64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * __fastcall FUN_005c6a40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c6b50();
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  return PTR_DAT_006a9908 + param_1 * 0x54;
}

