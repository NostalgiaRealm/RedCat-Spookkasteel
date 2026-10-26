/*
 * FUN_0045a0cc at 0045a0cc
 * undefined __register FUN_0045a0cc(int * param_1, undefined4 * param_2)
 * Address ranges: 0045a0cc-0045a1ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45984c slot 13 for TUniqueStringList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45984c slot 13 for
   TUniqueStringList. Original bytes unchanged; names and types still inferred. */

void FUN_0045a0cc(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 *puStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_120 = &LAB_0045a1ae;
  puStack_124 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_124;
  local_c = param_2;
  local_8 = param_1;
  if (((char)param_1[6] == '\0') && (*(char *)((int)param_1 + 0x19) != '\x01')) {
    puStack_11c = &stack0xfffffffc;
    local_10 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
    if (local_10 == -1) {
      local_10 = FUN_00414254(local_8,local_c,extraout_ECX);
    }
    else if (*(char *)((int)local_8 + 0x19) == '\x02') {
      FUN_00402fe0(*local_8,local_118);
      FUN_00403fd4(&local_18,local_118);
      puStack_124 = local_c;
      FUN_004040f0((int *)&local_14,4);
      piVar1 = FUN_0040ceec((int *)&DAT_00410554,'\x01',local_14);
      FUN_0040382c(piVar1);
    }
  }
  else {
    local_10 = FUN_00414254(param_1,param_2,0);
  }
  *in_FS_OFFSET = puStack_124;
  puStack_11c = &LAB_0045a1b5;
  puStack_120 = (undefined1 *)0x45a1ad;
  FUN_00403dd4(&local_18,2);
  return;
}

