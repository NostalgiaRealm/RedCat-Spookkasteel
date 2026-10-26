/*
 * FUN_005e0600 at 005e0600
 * undefined FUN_005e0600(void)
 * Address ranges: 005e0600-005e0656
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005e0600(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0070f8b0;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_0070f8c8 = param_1;
  DAT_0070f8c4 = *(undefined4 *)(param_1 + 0x33678);
  DAT_0070f8b0 = param_2;
  DAT_0070f8b4 = param_3;
  DAT_0070f8b8 = param_4;
  DAT_0070f8bc = param_5;
  DAT_0070f8c0 = param_6;
  return;
}

