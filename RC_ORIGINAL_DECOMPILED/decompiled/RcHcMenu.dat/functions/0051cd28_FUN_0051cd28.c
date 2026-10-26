/*
 * FUN_0051cd28 at 0051cd28
 * undefined __register FUN_0051cd28(uint param_1, int param_2)
 * Address ranges: 0051cd28-0051cd80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051cd28(uint param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x34) != param_2) && (*(char *)(param_1 + 6) != '\0')) {
    *(int *)(param_1 + 0x34) = param_2;
    if (*(int *)(param_1 + 0x34) < 0xf) {
      *(undefined4 *)(param_1 + 0x34) = 0xf;
    }
    FUN_0051eb30(*(int **)(param_1 + 0x3c),param_1);
    FUN_0051f124(*(int **)(param_1 + 0x3c));
  }
  return;
}

