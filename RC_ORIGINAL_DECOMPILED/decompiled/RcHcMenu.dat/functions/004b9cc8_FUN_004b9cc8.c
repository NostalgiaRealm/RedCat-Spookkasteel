/*
 * FUN_004b9cc8 at 004b9cc8
 * undefined __register FUN_004b9cc8(int param_1, undefined2 * param_2)
 * Address ranges: 004b9cc8-004b9d30;004b9d7f-004b9d94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b9cc8(int param_1,undefined2 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_10;
  int local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = &local_c;
  puStack_24 = &LAB_004b9d95;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  puStack_2c = (undefined1 *)0x4b9cfa;
  local_8 = param_1;
  FUN_004b743c(param_2,&local_c,(int *)&local_10);
  puStack_2c = (undefined1 *)0x4b9cff;
  FUN_004b6e60();
  puStack_30 = &LAB_004b9d31;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  piVar1 = *(int **)(local_8 + 0xc);
  puStack_2c = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  *in_FS_OFFSET = puStack_30;
  puStack_28 = &LAB_004b9d9c;
  puStack_2c = (undefined1 *)0x4b9d94;
  FUN_004b748c(&local_c);
  return;
}

