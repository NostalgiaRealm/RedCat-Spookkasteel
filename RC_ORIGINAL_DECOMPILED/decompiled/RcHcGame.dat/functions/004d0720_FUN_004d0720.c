/*
 * FUN_004d0720 at 004d0720
 * undefined FUN_004d0720(void)
 * Address ranges: 004d0720-004d0760
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d0720(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30 [12];
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    FUN_005b30c0();
  }
  else {
    FUN_005c5560(param_3);
  }
  puVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

