/*
 * FUN_005cf5f0 at 005cf5f0
 * undefined FUN_005cf5f0(void)
 * Address ranges: 005cf5f0-005cf696
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005cf5f0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = param_2;
  if (param_3 == (undefined4 *)0x0) {
    FUN_005b5fd0();
    FUN_005b30c0();
    param_1[6] = param_1[0x16];
    param_1[7] = param_1[0x17];
    param_1[8] = param_1[0x18];
  }
  else {
    FUN_005b55e0();
    puVar2 = param_1 + 0xd;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1[6] = param_1[0x16];
    param_1[7] = param_1[0x17];
    param_1[8] = param_1[0x18];
  }
  FUN_005b5fd0();
  FUN_005b30c0();
  FUN_005b5fd0();
  FUN_005b2e20(0,0,0);
  FUN_005b5fd0();
  param_1[0x20] = 1;
  FUN_005cf6a0();
  return;
}

