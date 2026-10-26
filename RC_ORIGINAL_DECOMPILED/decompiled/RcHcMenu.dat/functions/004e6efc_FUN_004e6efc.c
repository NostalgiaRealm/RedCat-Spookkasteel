/*
 * FUN_004e6efc at 004e6efc
 * undefined __register FUN_004e6efc(int * param_1)
 * Address ranges: 004e6efc-004e6f5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e6efc(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = (undefined1 *)0x4e6f11;
  local_8 = param_1;
  FUN_00406b00(param_1);
  puStack_18 = &LAB_004e6f5b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (DAT_00574648 != (code *)0x0) {
    puStack_14 = &stack0xfffffffc;
    (*DAT_00574648)();
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004e6f62;
  puStack_18 = (undefined1 *)0x4e6f5a;
  FUN_00406aa0((int *)&local_8);
  return;
}

