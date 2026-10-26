/*
 * FUN_0045138c at 0045138c
 * undefined __register FUN_0045138c(int param_1)
 * Address ranges: 0045138c-00451435
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045138c(int param_1)

{
  int *piVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar2;
  uint extraout_ECX_03;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x95) = 1;
  puStack_10 = &LAB_00451436;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_00409658(FUN_0044818c);
  piVar1 = *(int **)(local_8 + 0x38);
  if (piVar1 != (int *)0x0) {
    if (*(int *)PTR_DAT_00572398 == 3) {
      FUN_0044b9c4(piVar1,2);
      uVar2 = extraout_ECX_00;
      iVar3 = extraout_EDX;
    }
    else {
      iVar3 = *(int *)PTR_DAT_00572398 + -7;
      uVar2 = extraout_ECX;
      if (iVar3 == 0) {
        *(undefined1 *)((int)piVar1 + 0x213) = 1;
      }
    }
    if (*(char *)(local_8 + 0x4b) != '\0') {
      if (*(char *)((int)*(int **)(local_8 + 0x38) + 0x213) == '\x01') {
        FUN_00450ce4(local_8);
        uVar2 = extraout_ECX_01;
        iVar3 = extraout_EDX_00;
      }
      else {
        FUN_0044aa98(*(int **)(local_8 + 0x38),CONCAT31((int3)((uint)iVar3 >> 8),1),uVar2);
        uVar2 = extraout_ECX_02;
        iVar3 = extraout_EDX_01;
      }
    }
    do {
      FUN_004511f8(local_8,iVar3,uVar2);
      uVar2 = extraout_ECX_03;
      iVar3 = extraout_EDX_02;
    } while (*(char *)(local_8 + 0x8c) == '\0');
  }
  *in_FS_OFFSET = uStack_14;
  *(undefined1 *)(local_8 + 0x95) = 0;
  return;
}

