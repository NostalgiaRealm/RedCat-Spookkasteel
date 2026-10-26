/*
 * FUN_005e7510 at 005e7510
 * undefined FUN_005e7510(void)
 * Address ranges: 005e7510-005e7560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_005e7510(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(byte *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) + 0x2c))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar2;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_005fe7e4(uVar2,0);
  }
  return param_1;
}

