/*
 * FUN_0052b638 at 0052b638
 * undefined __register FUN_0052b638(int * param_1, char param_2)
 * Address ranges: 0052b638-0052b669
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052b638(int *param_1,char param_2)

{
  if ((char)param_1[0x20] != param_2) {
    *(char *)(param_1 + 0x20) = param_2;
    FUN_0054a2b0(param_1);
  }
  return;
}

