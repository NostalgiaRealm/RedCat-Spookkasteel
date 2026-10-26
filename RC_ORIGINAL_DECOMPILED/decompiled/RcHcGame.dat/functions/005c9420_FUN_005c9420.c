/*
 * FUN_005c9420 at 005c9420
 * undefined FUN_005c9420(void)
 * Address ranges: 005c9420-005c9464
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c9420(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(param_1 + 0xd0);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_005b3690();
  *(undefined4 *)(param_1 + 0x100) = param_2[9];
  *(undefined4 *)(param_1 + 0x104) = param_2[10];
  *(undefined4 *)(param_1 + 0x108) = param_2[0xb];
  return 1;
}

