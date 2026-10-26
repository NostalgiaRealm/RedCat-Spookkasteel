/*
 * FUN_004132a4 at 004132a4
 * undefined __register FUN_004132a4(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004132a4-004132f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004132a4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_1c = &LAB_004132f9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = FUN_00406aa0((int *)&local_8);
  FUN_0041320c(param_1,piVar1);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0x10))(local_8,param_2,param_3);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00413300;
  puStack_1c = (undefined1 *)0x4132f8;
  FUN_00406aa0((int *)&local_8);
  return;
}

