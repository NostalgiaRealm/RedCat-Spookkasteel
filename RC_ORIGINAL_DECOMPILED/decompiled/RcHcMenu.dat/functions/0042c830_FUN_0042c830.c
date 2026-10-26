/*
 * FUN_0042c830 at 0042c830
 * undefined __register FUN_0042c830(int param_1, int param_2)
 * Address ranges: 0042c830-0042c847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c830(int param_1,int param_2)

{
  if ((param_2 != *(int *)(param_1 + 0x200)) && (0 < param_2)) {
    *(int *)(param_1 + 0x200) = param_2;
    FUN_00435de4(param_1);
  }
  return;
}

