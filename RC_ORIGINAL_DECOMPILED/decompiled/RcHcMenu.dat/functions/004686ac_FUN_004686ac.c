/*
 * FUN_004686ac at 004686ac
 * undefined __register FUN_004686ac(int param_1, int param_2)
 * Address ranges: 004686ac-004686d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004686ac(int param_1,int param_2)

{
  FUN_0046864c(param_1,CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)(param_2 + 0x36)),param_2)
  ;
  FUN_004121d8(*(int **)(param_1 + 4),param_2);
  *(int *)(param_2 + 0x30) = param_1;
  FUN_00468618(param_1);
  return;
}

