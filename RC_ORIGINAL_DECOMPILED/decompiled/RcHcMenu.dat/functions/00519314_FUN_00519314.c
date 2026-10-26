/*
 * FUN_00519314 at 00519314
 * undefined __register FUN_00519314(int param_1)
 * Address ranges: 00519314-00519363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00519314(int param_1)

{
  bool bVar1;
  LONG LVar2;
  
  bVar1 = FUN_00438c84(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x204) == '\0')) {
    FUN_0041ce68(*(int *)(param_1 + 0x1f8));
    LVar2 = FUN_0041cdc4(*(int **)(param_1 + 0x1f8),&LAB_0051936c);
    *(LONG *)(param_1 + 0x23c) = LVar2;
    FUN_00433700(param_1,0x1a0,0,LVar2);
  }
  return;
}

