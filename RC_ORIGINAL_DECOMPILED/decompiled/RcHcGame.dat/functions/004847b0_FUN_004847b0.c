/*
 * FUN_004847b0 at 004847b0
 * undefined FUN_004847b0(void)
 * Address ranges: 004847b0-00484846
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004847b0(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  DVar2 = timeGetTime();
  *(DWORD *)(param_1 + 0x3c) = DVar2;
  *(DWORD *)(param_1 + 0x48) = DVar2;
  uVar3 = FUN_00484d70(DVar2,*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  uVar3 = FUN_00484d70(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  if (*(int *)(param_1 + 0x4c) == -1) {
    *(DWORD *)(param_1 + 0x4c) = DVar2;
    return;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  uVar3 = FUN_00484d70(DVar2,*(int *)(param_1 + 0x4c));
  fVar4 = (float10)FUN_00409e30(uVar3);
  if ((float10)*(int *)(param_1 + 0x58) <= fVar4) {
    uVar1 = *(uint *)(param_1 + 0x50);
    *(DWORD *)(param_1 + 0x4c) = DVar2;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(float *)(param_1 + 0x54) = (float)((float10)uVar1 / fVar4);
    return;
  }
  return;
}

