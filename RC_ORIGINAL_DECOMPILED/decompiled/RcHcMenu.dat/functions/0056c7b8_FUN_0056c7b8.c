/*
 * FUN_0056c7b8 at 0056c7b8
 * undefined __register FUN_0056c7b8(int param_1)
 * Address ranges: 0056c7b8-0056c7e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056c7b8(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  pcVar1 = (char *)(**(code **)(**(int **)(*(int *)(param_1 + 0x2e4) + 0x208) + 0x4c))();
  iVar2 = FUN_0042d7bc(pcVar1,extraout_EDX,extraout_ECX);
  FUN_0042d464(iVar2,pcVar1);
  return;
}

