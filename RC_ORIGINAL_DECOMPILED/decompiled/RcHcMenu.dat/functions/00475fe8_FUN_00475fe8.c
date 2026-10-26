/*
 * FUN_00475fe8 at 00475fe8
 * undefined __register FUN_00475fe8(int param_1, byte param_2, VARIANTARG * param_3)
 * Address ranges: 00475fe8-004760c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475fe8(int param_1,byte param_2,VARIANTARG *param_3)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  byte local_5;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_24 = &LAB_004760c7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_5 = param_2;
  uVar1 = FUN_00405bf8((undefined2 *)param_3);
  if (CONCAT22(extraout_var,uVar1) == 0x100) {
    local_c = FUN_00409c44(*(byte **)((int)&param_3->n1 + 8));
  }
  else {
    local_c = FUN_0040514c(param_3);
  }
  uVar2 = 2;
  if (local_5 == 2) {
    if (((int)local_c < -0x8000) || (0x7fff < (int)local_c)) {
      FUN_00406a48((undefined4 *)PTR_PTR_005722f8,(int *)&local_10);
      FUN_00466d84(local_10,0);
    }
  }
  else if (local_5 == 4) {
    if (((int)local_c < 0) || (0xffff < (int)local_c)) {
      FUN_00406a48((undefined4 *)PTR_PTR_005722f8,(int *)&local_14);
      FUN_00466d84(local_14,0);
    }
  }
  else {
    uVar2 = 4;
  }
  FUN_004760d8(param_1,local_5,&local_c,uVar2);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004760ce;
  puStack_24 = (undefined1 *)0x4760c6;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

