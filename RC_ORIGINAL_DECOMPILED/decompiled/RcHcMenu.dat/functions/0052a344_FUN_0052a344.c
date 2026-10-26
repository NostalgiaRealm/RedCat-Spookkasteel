/*
 * FUN_0052a344 at 0052a344
 * char __register FUN_0052a344(int * param_1, undefined4 param_2, undefined1 param_3)
 * Address ranges: 0052a344-0052a4d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 11 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 11 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

char FUN_0052a344(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  char local_e;
  
  local_f = param_3;
  if (param_1[0x21] != 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x21] + 0xc))();
    if (iVar1 == 0) {
      local_f = 1;
    }
  }
  local_10 = param_3;
  if (param_1[0x22] != 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x22] + 0xc))();
    if (iVar1 == 0) {
      local_10 = 1;
    }
  }
  if (*(short *)((int)param_1 + 0x92) == 0) {
    if ((param_1[0x21] == 0) && (param_1[0x22] == 0)) {
      local_e = '\0';
      FUN_0052b638(param_1,'\0');
    }
    else if ((param_1[0x21] == 0) || (param_1[0x22] != 0)) {
      if ((param_1[0x21] == 0) && (param_1[0x22] != 0)) {
        local_e = FUN_00548cf4((int *)param_1[0x22],param_2,local_10);
        FUN_0052b638(param_1,'\x02');
      }
      else {
        local_e = FUN_00548cf4((int *)param_1[0x21],param_2,local_f);
        if (local_e == '\0') {
          local_e = FUN_00548cf4((int *)param_1[0x22],param_2,local_10);
          FUN_0052b638(param_1,'\x02');
        }
        else {
          FUN_0052b638(param_1,'\x01');
        }
      }
    }
    else {
      local_e = FUN_00548cf4((int *)param_1[0x21],param_2,local_f);
      FUN_0052b638(param_1,'\x01');
    }
  }
  else {
    local_e = (*(code *)param_1[0x24])(param_1[0x25],param_1,param_2,param_1 + 0x20,param_3);
  }
  return local_e;
}

