/*
 * FUN_004c6cf0 at 004c6cf0
 * uint __register FUN_004c6cf0(int * param_1, int * param_2, int param_3)
 * Address ranges: 004c6cf0-004c6d30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004c6cf0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = FUN_004c6c8c(param_1);
  FUN_0043e910(param_1,uVar3,param_2,param_3);
  piVar1 = param_1 + 0x1f;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874((uint)param_1);
  }
  return uVar3;
}

