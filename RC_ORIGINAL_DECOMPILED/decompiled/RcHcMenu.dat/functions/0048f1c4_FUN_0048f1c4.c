/*
 * FUN_0048f1c4 at 0048f1c4
 * undefined4 __register FUN_0048f1c4(int * param_1, byte * param_2)
 * Address ranges: 0048f1c4-0048f201
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0048f1c4(int *param_1,byte *param_2)

{
  char cVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  
  cVar1 = FUN_0048ec78(param_1,param_2);
  uVar3 = extraout_var;
  if (cVar1 != '\0') {
    uVar2 = (**(code **)param_1[7])((undefined4 *)param_1[7],1);
    (**(code **)(*(int *)param_1[8] + 0xc))((int *)param_1[8],uVar2);
    uVar3 = extraout_var_00;
  }
  return CONCAT31(uVar3,cVar1);
}

