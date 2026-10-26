/*
 * FUN_00488d30 at 00488d30
 * bool __register FUN_00488d30(undefined * param_1, int param_2, int * param_3)
 * Address ranges: 00488d30-00488d50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00488d30(undefined *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00472108(param_2,param_1);
  if (iVar1 != 0) {
    FUN_004121d8(param_3,iVar1);
  }
  return iVar1 != 0;
}

