/*
 * FUN_0049708c at 0049708c
 * undefined __register FUN_0049708c(int param_1, int param_2)
 * Address ranges: 0049708c-004970fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049708c(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  (**(code **)(**(int **)(param_1 + 0x10) + 8))
            (*(int **)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10));
  (**(code **)(**(int **)(param_1 + 0x14) + 8))
            (*(int **)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14));
  (**(code **)(**(int **)(param_1 + 0x18) + 8))
            (*(int **)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x18));
  FUN_0040407c((int *)(param_1 + 0xc),*(undefined4 **)(param_2 + 0xc),(undefined4 *)&DAT_00497108);
  return;
}

