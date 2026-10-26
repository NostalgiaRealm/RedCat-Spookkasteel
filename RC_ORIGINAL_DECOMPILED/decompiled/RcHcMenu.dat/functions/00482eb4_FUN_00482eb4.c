/*
 * FUN_00482eb4 at 00482eb4
 * undefined __register FUN_00482eb4(int * param_1)
 * Address ranges: 00482eb4-00482ede
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482eb4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 0x40))();
    if (iVar2 == 0) break;
    iVar2 = (**(code **)(*param_1 + 0x40))();
    piVar1 = (int *)FUN_00482f44((int)param_1,iVar2 + -1);
    (**(code **)(*piVar1 + 0x264))();
  }
  return;
}

