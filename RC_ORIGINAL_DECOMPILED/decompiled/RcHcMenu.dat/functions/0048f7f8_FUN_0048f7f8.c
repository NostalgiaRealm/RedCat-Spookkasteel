/*
 * FUN_0048f7f8 at 0048f7f8
 * undefined4 __register FUN_0048f7f8(int * param_1, byte * param_2)
 * Address ranges: 0048f7f8-0048f849
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0048f7f8(int *param_1,byte *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  
  if ((*(byte *)(param_1[9] + 8) & 4) == 0) {
LAB_0048f81f:
    if ((*(byte *)(param_1[9] + 8) & 2) != 0) {
      cVar1 = FUN_0048f780(param_1,param_2);
      uVar3 = extraout_var_00;
      if (cVar1 != '\0') goto LAB_0048f83e;
    }
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_0048f780(param_1,param_2);
    uVar3 = extraout_var;
    if (cVar1 != '\0') goto LAB_0048f81f;
LAB_0048f83e:
    uVar2 = 1;
  }
  return CONCAT31(uVar3,uVar2);
}

