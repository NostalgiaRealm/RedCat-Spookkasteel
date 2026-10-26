/*
 * FUN_0044c0a4 at 0044c0a4
 * undefined __register FUN_0044c0a4(int param_1, undefined4 * param_2)
 * Address ranges: 0044c0a4-0044c195
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 37 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 37 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044c0a4(int param_1,undefined4 *param_2)

{
  int *piVar1;
  LRESULT LVar2;
  undefined4 *extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  puStack_38 = &LAB_0044c196;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if ((*(char *)(param_1 + 0x217) == '\x01') && ((*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    if ((*(int *)(DAT_005737d4 + 0x38) == 0) ||
       (puStack_34 = &stack0xfffffffc, *(int *)(*(int *)(DAT_005737d4 + 0x38) + 0x23c) == 0)) {
      puStack_34 = &stack0xfffffffc;
      FUN_00406a48((undefined4 *)PTR_PTR_005724fc,(int *)&local_2c);
      piVar1 = FUN_0040ceec((int *)&DAT_0041071c,'\x01',local_2c);
      FUN_0040382c(piVar1);
      param_2 = extraout_EDX;
    }
    local_28 = param_2 + 0x13;
    local_24 = *param_2;
    local_20 = DAT_005734dc;
    local_1c = param_2[3];
    local_18 = param_2[4];
    local_14 = param_2[5];
    local_10 = param_2[6];
    local_c = param_2[1];
    local_8 = param_2[8];
    LVar2 = SendMessageA(*(HWND *)(*(int *)(DAT_005737d4 + 0x38) + 0x23c),0x220,0,(LPARAM)&local_28)
    ;
    *(LRESULT *)(param_1 + 0x14c) = LVar2;
    *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) | 0x10;
  }
  else {
    FUN_00435bbc(param_1,param_2);
    *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) & 0xef;
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0044c19d;
  puStack_38 = (undefined1 *)0x44c195;
  FUN_00403db0((int *)&local_2c);
  return;
}

