/*
 * FUN_005bc3a0 at 005bc3a0
 * undefined FUN_005bc3a0(void)
 * Address ranges: 005bc3a0-005bc3d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005bc3a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x35028)) {
    piVar3 = (int *)(param_1 + 0x3502c);
    do {
      iVar1 = *piVar3;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      *(undefined4 *)(iVar1 + 0xc54) = param_2;
    } while (iVar2 < *(int *)(param_1 + 0x35028));
  }
  return;
}

