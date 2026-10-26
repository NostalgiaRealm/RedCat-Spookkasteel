/*
 * FUN_004ea5ac at 004ea5ac
 * undefined1 __register FUN_004ea5ac(int param_1)
 * Address ranges: 004ea5ac-004ea609;004ea618-004ea621
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_004ea5ac(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 local_9;
  
  puStack_1c = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0x91) == '\0') || (*(char *)(param_1 + 0x90) == '\0')) {
    puStack_20 = &LAB_004ea60a;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    piVar1 = (int *)FUN_00468730(*(int *)(param_1 + 0x24),0);
    (**(code **)(*piVar1 + 0x7c))();
    local_9 = FUN_004ea598();
    *in_FS_OFFSET = uStack_24;
  }
  else {
    local_9 = 0;
  }
  return local_9;
}

