/*
 * FUN_00494340 at 00494340
 * undefined __register FUN_00494340(int * param_1)
 * Address ranges: 00494340-0049438a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00494340(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x49434f;
  local_8 = param_1;
  FUN_0045f830((int)param_1);
  puStack_c = (undefined1 *)0x494357;
  FUN_0045f864((int)local_8);
  puStack_10 = &LAB_0049438b;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x20))();
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00494392;
  puStack_10 = (undefined1 *)0x494382;
  FUN_0045f898(local_8);
  puStack_10 = (undefined1 *)0x49438a;
  FUN_0045f938(local_8);
  return;
}

