/*
 * FUN_004cb6dc at 004cb6dc
 * undefined __register FUN_004cb6dc(int * param_1)
 * Address ranges: 004cb6dc-004cb705
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cb6dc(int *param_1)

{
  char cVar1;
  
  FUN_0043442c(param_1);
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_004ca844(param_1[0x4b],cVar1 == '\0');
  return;
}

