/*
 * FUN_004fe75c at 004fe75c
 * undefined __register FUN_004fe75c(int param_1, uint param_2)
 * Address ranges: 004fe75c-004fe785
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fe75c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = FUN_00438c84(param_1);
  if (bVar3) {
    piVar1 = (int *)(param_2 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar2,1)) {
      thunk_FUN_00402874(param_2);
    }
  }
  return;
}

