/*
 * FUN_004491a8 at 004491a8
 * undefined __register FUN_004491a8(void)
 * Address ranges: 004491a8-004492ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004491a8(void)

{
  int *piVar1;
  int in_stack_00000004;
  
  piVar1 = (int *)(in_stack_00000004 + -4);
  FUN_00438988(*(int **)(*piVar1 + 4));
  FUN_00424360();
  if (0 < *(int *)(*piVar1 + 0x24)) {
    FUN_00438988(*(int **)(*piVar1 + 4));
    FUN_00424360();
  }
  if (0 < *(int *)(*piVar1 + 0x38)) {
    FUN_00438988(*(int **)(*piVar1 + 4));
    FUN_00424360();
  }
  if (0 < *(int *)(*piVar1 + 0x30)) {
    FUN_00438988(*(int **)(*piVar1 + 4));
    FUN_00424360();
  }
  FUN_0041b688(*(uint *)(*piVar1 + 0x28));
  FUN_00438988(*(int **)(*piVar1 + 4));
  FUN_00424360();
  return;
}

