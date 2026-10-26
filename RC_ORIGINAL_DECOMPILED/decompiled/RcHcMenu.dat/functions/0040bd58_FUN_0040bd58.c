/*
 * FUN_0040bd58 at 0040bd58
 * undefined __register FUN_0040bd58(int param_1, int * param_2)
 * Address ranges: 0040bd58-0040bd7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040bd58(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  while( true ) {
    iVar1 = FUN_00404030(param_1);
    if ((iVar1 < iVar2) || (*(char *)(param_1 + -1 + iVar2) != ' ')) break;
    iVar2 = iVar2 + 1;
  }
  *param_2 = iVar2;
  return;
}

