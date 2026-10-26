/*
 * FUN_004bfe04 at 004bfe04
 * undefined __register FUN_004bfe04(int * param_1)
 * Address ranges: 004bfe04-004bfe96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bfe04(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int local_14;
  int local_10;
  
  FUN_004b8fec(param_1[0x14]);
  iVar1 = FUN_004cfd80(param_1,extraout_EDX,extraout_ECX);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      piVar3 = (int *)FUN_004cfc68(param_1,local_10);
      iVar1 = FUN_00403224(piVar3,(int)&DAT_004bcb7c);
      if (*(char *)(iVar1 + 8) != '\0') {
        FUN_00403d94("Assertion failure");
      }
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_00403094(*(int **)(iVar1 + 4));
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

