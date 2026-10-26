/*
 * FUN_0048eef0 at 0048eef0
 * undefined4 __register FUN_0048eef0(int * param_1, int param_2, byte * param_3)
 * Address ranges: 0048eef0-0048ef40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0048eef0(int *param_1,int param_2,byte *param_3)

{
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar2;
  undefined1 local_11;
  
  if ((char)param_1[6] != '\0') {
    cVar1 = FUN_0048ef44(param_1,param_3);
    if (cVar1 != '\0') {
      local_11 = 0;
      uVar2 = extraout_var;
      goto LAB_0048ef3a;
    }
  }
  FUN_0045d6f4(param_1,param_2);
  FUN_0048f05c(param_1,param_2,(undefined4 *)param_3);
  local_11 = 1;
  uVar2 = extraout_var_00;
LAB_0048ef3a:
  return CONCAT31(uVar2,local_11);
}

