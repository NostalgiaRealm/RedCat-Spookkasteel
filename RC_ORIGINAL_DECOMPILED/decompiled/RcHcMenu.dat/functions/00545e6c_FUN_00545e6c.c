/*
 * FUN_00545e6c at 00545e6c
 * undefined __register FUN_00545e6c(int * param_1, int param_2)
 * Address ranges: 00545e6c-00545f60;00545f68-00545f7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 9 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 9 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_00545e6c(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_18;
  int local_14;
  byte local_d;
  int local_c;
  int *local_8;
  
  puStack_1c = (undefined1 *)0x545e80;
  local_c = param_2;
  local_8 = param_1;
  FUN_0054b510((uint)param_1);
  puStack_20 = &LAB_00545f7e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (local_c == 1) {
    puStack_28 = (undefined1 *)0x545e9c;
    puStack_1c = &stack0xfffffffc;
    local_d = FUN_00547c54(local_8);
  }
  else {
    if (local_c != -1) {
      local_18 = (int *)0x0;
      local_d = 1;
      puStack_2c = &LAB_00545f61;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      puStack_1c = &stack0xfffffffc;
      local_18 = (int *)FUN_0054843c(local_8);
      if (local_c < 0) {
        local_14 = 0;
        while ((local_c < local_14 & local_d) != 0) {
          uVar1 = FUN_00547e4c(local_8);
          local_d = (byte)uVar1;
          bVar2 = SBORROW4(local_14,1);
          local_14 = local_14 + -1;
          if (bVar2) {
            thunk_FUN_00402874(uVar1);
          }
        }
      }
      else {
        local_14 = 0;
        while ((local_14 < local_c & local_d) != 0) {
          uVar1 = FUN_00547c54(local_8);
          local_d = (byte)uVar1;
          bVar2 = SCARRY4(local_14,1);
          local_14 = local_14 + 1;
          if (bVar2) {
            thunk_FUN_00402874(uVar1);
          }
        }
      }
      if (local_d == 0) {
        FUN_00548598(local_8,(int)local_18);
      }
      *in_FS_OFFSET = uStack_30;
      puStack_28 = (undefined1 *)0x545f68;
      puStack_2c = (undefined1 *)0x545f60;
      FUN_00403094(local_18);
      return;
    }
    puStack_28 = (undefined1 *)0x545eb2;
    puStack_1c = &stack0xfffffffc;
    local_d = FUN_00547e4c(local_8);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00545f85;
  puStack_20 = (undefined1 *)0x545f7d;
  FUN_0054b528(local_8);
  return;
}

