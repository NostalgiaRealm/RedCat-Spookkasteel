/*
 * FUN_0052cbe0 at 0052cbe0
 * undefined __register FUN_0052cbe0(int * param_1)
 * Address ranges: 0052cbe0-0052cccc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 15 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 15 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052cbe0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined4 local_c;
  int *local_8;
  
  local_8 = param_1;
  if ((char)param_1[4] == '\0') {
    local_14 = FUN_0049206c((int *)param_1[7]);
    if (local_8[0x22] == -0x80000000) {
      local_8[0x22] = 0;
    }
    local_10 = 3;
    local_f = 0;
    local_c = local_14;
    FUN_004e27a4((int *)local_8[0x20],local_8[0x22],&local_14);
    local_8[0x23] = local_8[0x22];
    piVar2 = local_8 + 0x25;
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402874((uint)local_8);
    }
    FUN_0054a2b0(local_8);
  }
  else {
    param_1[0x23] = param_1[0x22];
    piVar2 = param_1 + 0x25;
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402874((uint)param_1);
    }
    if (local_8[0x11] == 0) {
      FUN_00549aec((int)local_8);
      piVar2 = (int *)FUN_00549b80((int)local_8);
      FUN_00494398(piVar2);
      FUN_00549b08((int)local_8);
      FUN_00403270((int *)local_8[0x14],extraout_EDX,extraout_ECX);
    }
  }
  return;
}

