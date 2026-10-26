/*
 * FUN_00532a24 at 00532a24
 * undefined1 __register FUN_00532a24(int param_1, int * param_2)
 * Address ranges: 00532a24-00532af6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x531904 slot 2 for TAppObjComboItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x531904 slot 2 for
   TAppObjComboItem. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_00532a24(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_d;
  
  if (param_2 == (int *)0x0) {
    local_d = 0;
  }
  else {
    uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_00531904);
    if ((char)uVar2 == '\0') {
      local_d = 0;
    }
    else if ((*(int *)(param_1 + 0xc) == 0) &&
            (iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_00531904), *(int *)(iVar3 + 0xc) == 0)) {
      local_d = 1;
    }
    else if ((*(int *)(param_1 + 0xc) == 0) ||
            (iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_00531904), *(int *)(iVar3 + 0xc) == 0)) {
      local_d = 0;
    }
    else {
      iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_00531904);
      cVar1 = FUN_00494528(*(int **)(param_1 + 0xc),*(int **)(iVar3 + 0xc));
      if ((cVar1 == '\0') ||
         ((iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_00531904),
          *(int *)(iVar3 + 0x10) != *(int *)(param_1 + 0x10) ||
          ((char)param_2[2] != *(char *)(param_1 + 8))))) {
        local_d = 0;
      }
      else {
        local_d = 1;
      }
    }
  }
  return local_d;
}

