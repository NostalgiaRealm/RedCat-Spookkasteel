/*
 * FUN_004b1190 at 004b1190
 * bool __register FUN_004b1190(uint param_1, int * param_2)
 * Address ranges: 004b1190-004b11ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004b1190(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_004b112c(param_1,param_2);
  if (-1 < iVar2) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),iVar2);
    piVar3 = (int *)FUN_00403224(piVar3,(int)&PTR_FUN_0048e834);
    FUN_00493768(param_2,piVar3);
    piVar3 = (int *)(param_1 + 0x14);
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402874(param_1);
    }
  }
  else {
    piVar3 = (int *)(param_1 + 0x18);
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402874(param_1);
    }
  }
  return -1 < iVar2;
}

