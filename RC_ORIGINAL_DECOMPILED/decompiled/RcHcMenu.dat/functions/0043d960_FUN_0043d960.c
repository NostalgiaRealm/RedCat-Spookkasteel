/*
 * FUN_0043d960 at 0043d960
 * undefined __register FUN_0043d960(int param_1, int param_2)
 * Address ranges: 0043d960-0043d97b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043d960(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041251c(*(int **)(param_1 + 0x24),param_2);
  if (-1 < iVar1) {
    *(undefined4 *)(param_2 + 0x4c) = 0;
  }
  return;
}

