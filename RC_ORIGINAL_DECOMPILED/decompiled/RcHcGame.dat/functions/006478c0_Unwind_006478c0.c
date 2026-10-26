/*
 * Unwind@006478c0 at 006478c0
 * undefined Unwind@006478c0(void)
 * Address ranges: 006478c0-006478e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Unwind_006478c0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_00514430();
  return;
}

