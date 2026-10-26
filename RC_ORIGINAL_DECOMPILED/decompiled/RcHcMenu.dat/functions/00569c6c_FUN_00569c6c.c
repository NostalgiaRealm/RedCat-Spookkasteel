/*
 * FUN_00569c6c at 00569c6c
 * undefined __register FUN_00569c6c(int param_1, undefined4 * param_2)
 * Address ranges: 00569c6c-00569cc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00569c6c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x569c80;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_14 = &LAB_00569cc1;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar2 = 1;
  puStack_10 = &stack0xfffffffc;
  iVar1 = FUN_00569c28(local_8);
  FUN_0054f958(*(int **)(local_8 + 0x108),local_c,iVar1,(char)uVar2);
  *in_FS_OFFSET = uVar2;
  puStack_14 = &LAB_00569cc8;
  uStack_18 = 0x569cc0;
  FUN_00403db0((int *)&local_c);
  return;
}

