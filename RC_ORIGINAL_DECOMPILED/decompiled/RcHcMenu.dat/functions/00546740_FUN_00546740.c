/*
 * FUN_00546740 at 00546740
 * undefined4 __register FUN_00546740(undefined4 * param_1, int * param_2, char param_3)
 * Address ranges: 00546740-00546805;0054680d-00546817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 11 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 11 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00546740(undefined4 *param_1,int *param_2,char param_3)

{
  char extraout_AL;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_14;
  undefined1 local_e;
  char local_d;
  int *local_c;
  undefined4 *local_8;
  
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 == '\0') {
    puStack_18 = (undefined1 *)0x546760;
    local_e = FUN_00546164((int)param_1,param_2);
    uVar4 = extraout_var;
  }
  else {
    puStack_18 = (undefined1 *)0x54676f;
    (**(code **)*param_1)();
    if (extraout_AL != '\0') {
      puStack_18 = (undefined1 *)0x546782;
      local_14 = (int *)FUN_0049206c((int *)local_8[7]);
      puStack_1c = &LAB_00546806;
      uStack_20 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_20;
      puStack_18 = &stack0xfffffffc;
      FUN_004eda88((int *)local_8[0x21],local_14);
      cVar1 = FUN_00494528(local_14,local_c);
      if (cVar1 == '\0') {
        iVar2 = FUN_00494814(local_14,local_c,local_8[0xf],8);
        if (iVar2 < 1) {
          local_e = FUN_00546464(local_c,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
        }
        else {
          local_e = FUN_005465d0(local_c,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
        }
      }
      else {
        local_e = 1;
      }
      *in_FS_OFFSET = uStack_20;
      puStack_18 = (undefined1 *)0x546811;
      puStack_1c = (undefined1 *)0x546805;
      uVar3 = FUN_00403094(local_14);
      return uVar3;
    }
    local_e = 0;
    uVar4 = extraout_var_00;
  }
  return CONCAT31(uVar4,local_e);
}

