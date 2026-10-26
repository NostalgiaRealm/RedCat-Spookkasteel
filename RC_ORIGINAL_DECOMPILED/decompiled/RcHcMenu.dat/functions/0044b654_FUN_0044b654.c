/*
 * FUN_0044b654 at 0044b654
 * undefined __register FUN_0044b654(int param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0044b654-0044b674
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044b654(int param_1,int *param_2,undefined4 param_3)

{
  *(int **)(param_1 + 0x248) = param_2;
  if (param_2 != (int *)0x0) {
    FUN_00418fe0((int)param_2,param_1,param_3);
    FUN_00442f18(param_2,0);
  }
  return;
}

