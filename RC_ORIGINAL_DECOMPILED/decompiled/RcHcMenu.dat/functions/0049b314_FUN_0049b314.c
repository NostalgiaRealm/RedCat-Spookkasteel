/*
 * FUN_0049b314 at 0049b314
 * undefined __register FUN_0049b314(int * param_1, int * param_2)
 * Address ranges: 0049b314-0049b3c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 20 for TDIB. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 20 for TDIB.
   Original bytes unchanged; names and types still inferred. */

void FUN_0049b314(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 *local_28;
  undefined4 *local_24;
  short local_1e [7];
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  puStack_34 = &LAB_0049b3c6;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = param_2;
  local_8 = param_1;
  local_10 = (**(code **)(*param_2 + 4))(param_2,local_1e,0xe);
  if (local_10 != 0) {
    if (local_10 != 0xe) {
      FUN_00406a48((undefined4 *)PTR_PTR_005723ec,(int *)&local_24);
      piVar1 = FUN_0040ceec((int *)&DAT_0041a06c,'\x01',local_24);
      FUN_0040382c(piVar1);
    }
    if (local_1e[0] != 0x4d42) {
      FUN_00406a48((undefined4 *)PTR_PTR_005723ec,(int *)&local_28);
      piVar1 = FUN_0040ceec((int *)&DAT_0041a06c,'\x01',local_28);
      FUN_0040382c(piVar1);
    }
    (**(code **)(*local_8 + 0x30))(local_8,local_c);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0049b3cd;
  puStack_34 = (undefined1 *)0x49b3c5;
  FUN_00403dd4((int *)&local_28,2);
  return;
}

