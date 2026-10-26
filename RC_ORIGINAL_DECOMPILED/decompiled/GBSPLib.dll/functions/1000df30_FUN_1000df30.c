/*
 * FUN_1000df30 at 1000df30
 * undefined FUN_1000df30(void)
 * Address ranges: 1000df30-1000df60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000df30(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_1000d8e0(0);
  puVar3 = puVar1;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[2] = 0;
  return;
}

