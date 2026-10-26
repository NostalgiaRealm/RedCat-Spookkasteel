/*
 * Unwind@006471a0 at 006471a0
 * undefined Unwind@006471a0(void)
 * Address ranges: 006471a0-006471c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Unwind_006471a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_00514430();
  return;
}

