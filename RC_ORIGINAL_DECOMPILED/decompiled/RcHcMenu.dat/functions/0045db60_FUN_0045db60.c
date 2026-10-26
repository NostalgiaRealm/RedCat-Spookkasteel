/*
 * FUN_0045db60 at 0045db60
 * undefined __register FUN_0045db60(int * param_1, undefined2 param_2)
 * Address ranges: 0045db60-0045dbab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045db60(int *param_1,undefined2 param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  int extraout_EDX;
  
  piVar1 = param_1 + 1;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar3,1)) {
    thunk_FUN_00402874((uint)param_1);
  }
  FUN_0045d910((uint)param_1,param_1[1]);
  iVar3 = param_1[1] + -1;
  if (SBORROW4(param_1[1],1)) {
    thunk_FUN_00402874((uint)param_1);
    iVar3 = extraout_EDX;
  }
  puVar2 = (undefined2 *)FUN_0045db14(param_1,iVar3);
  *puVar2 = param_2;
  return;
}

