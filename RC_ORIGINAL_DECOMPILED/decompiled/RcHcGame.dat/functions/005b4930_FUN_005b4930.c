/*
 * FUN_005b4930 at 005b4930
 * undefined FUN_005b4930(void)
 * Address ranges: 005b4930-005b4984
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005b4930(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_30 [36];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_005cf9a0(local_30);
  puVar2 = (undefined4 *)(param_1 + 0x3c);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  FUN_005d02c0(local_c,local_8,local_4);
  *param_3 = *(undefined4 *)(param_1 + 0x58);
  return 1;
}

