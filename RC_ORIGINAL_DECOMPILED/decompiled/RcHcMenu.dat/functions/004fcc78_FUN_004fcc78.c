/*
 * FUN_004fcc78 at 004fcc78
 * undefined __register FUN_004fcc78(undefined4 param_1, int param_2)
 * Address ranges: 004fcc78-004fccca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fcc78(undefined4 param_1,int param_2)

{
  int iVar1;
  int extraout_EDX;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 local_d;
  int local_c;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x4fcc8c;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_18 = &LAB_004fcccb;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = 0;
  iVar2 = local_c;
  if (*(int *)(local_c + -4) == 0) {
    puStack_14 = &stack0xfffffffc;
    iVar1 = thunk_FUN_00402874(0);
    iVar2 = extraout_EDX;
  }
  local_d = *(undefined1 *)(iVar2 + iVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004fccd2;
  puStack_18 = (undefined1 *)0x4fccca;
  FUN_00403db0(&local_c);
  return;
}

