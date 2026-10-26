/*
 * FUN_00483aa4 at 00483aa4
 * undefined __register FUN_00483aa4(int * param_1, int param_2)
 * Address ranges: 00483aa4-00483b68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483aa4(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_00483b69;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 != '\0') {
    FUN_00467184(local_8);
  }
  if (param_2 != 0) {
    uVar2 = thunk_FUN_00478fa1(&local_c);
    FUN_0047fe48(uVar2);
    FUN_00482cb8((int)local_8);
    FUN_00482d18(local_8,'\x01');
    iVar3 = FUN_0048115c(local_8[0x1e]);
    if (iVar3 != local_c) {
      FUN_00406a48((undefined4 *)PTR_PTR_00572024,(int *)&local_10);
      FUN_00466d84(local_10,(int)local_8);
    }
    local_8[0x1c] = param_2;
    FUN_00482f8c((int)local_8);
    FUN_004830a8((int)local_8);
    FUN_00480a24(local_8[0x1e]);
    *(undefined1 *)((int)local_8 + 0x67) = 1;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00483b70;
  puStack_1c = (undefined1 *)0x483b68;
  FUN_00403db0((int *)&local_10);
  return;
}

