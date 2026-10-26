/*
 * FUN_004b0fcc at 004b0fcc
 * undefined __register FUN_004b0fcc(uint param_1, int * param_2)
 * Address ranges: 004b0fcc-004b10a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b0fcc(uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  int *local_c;
  uint local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_004b10a2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_2;
  local_8 = param_1;
  FUN_004b0d64(param_1,param_2,&local_10);
  iVar1 = (**(code **)(**(int **)(local_8 + 4) + 0x50))(*(int **)(local_8 + 4),local_10);
  if (-1 < iVar1) {
    FUN_004b1238(local_8,iVar1);
  }
  if (0 < *(int *)(local_8 + 8)) {
    iVar1 = (**(code **)(**(int **)(local_8 + 4) + 0x14))();
    if (iVar1 == *(int *)(local_8 + 8)) {
      FUN_004b1238(local_8,0);
    }
    piVar2 = FUN_004935a0(local_c);
    (**(code **)(**(int **)(local_8 + 4) + 0x38))(*(int **)(local_8 + 4),local_10,piVar2);
    piVar2 = (int *)(local_8 + 0x10);
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402874(local_8);
    }
    iVar1 = (**(code **)(**(int **)(local_8 + 4) + 0x14))();
    if (*(int *)(local_8 + 0xc) < iVar1) {
      uVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x14))();
      *(undefined4 *)(local_8 + 0xc) = uVar3;
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004b10a9;
  puStack_20 = (undefined1 *)0x4b10a1;
  FUN_00403db0(&local_10);
  return;
}

