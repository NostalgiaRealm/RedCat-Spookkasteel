/*
 * Unwind@006476e0 at 006476e0
 * undefined Unwind@006476e0(void)
 * Address ranges: 006476e0-00647706
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Unwind_006476e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_00514430();
  return;
}

