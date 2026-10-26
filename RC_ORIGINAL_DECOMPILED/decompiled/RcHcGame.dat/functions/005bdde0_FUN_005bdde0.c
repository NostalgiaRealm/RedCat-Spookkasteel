/*
 * FUN_005bdde0 at 005bdde0
 * undefined FUN_005bdde0(void)
 * Address ranges: 005bdde0-005bde52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005bdde0(int param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 1) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar2 = 0;
      do {
        pfVar1 = (float *)(*(int *)(param_1 + 0x18) + iVar2);
        FUN_005bdde0((param_2 - pfVar1[1]) * *pfVar1,
                     (param_3 - *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar2)) * *pfVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x44;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else if ((*(int *)(param_1 + 0xc) == 2) && (*(int *)(param_1 + 0x18) != 0)) {
    FUN_005d77a0(param_2,param_3);
    return;
  }
  return;
}

