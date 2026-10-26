/*
 * FUN_004173c8 at 004173c8
 * undefined __register FUN_004173c8(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 004173c8-0041746c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x411230 slot 5 for TReader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x411230 slot 5 for TReader.
   Original bytes unchanged; names and types still inferred. */

void FUN_004173c8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  char *local_14;
  undefined1 local_10;
  char *local_c;
  int local_8;
  
  local_c = (char *)0x0;
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd4;
  FUN_00403e48((int *)&local_c,param_2);
  local_8 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_8 = FUN_00419414(*(int *)(param_1 + 0x1c),local_c);
  }
  if (local_8 == 0) {
    if (*(short *)(param_1 + 0x52) != 0) {
      (**(code **)(param_1 + 0x50))
                (*(undefined4 *)(param_1 + 0x54),param_1,local_c,&local_8,param_3);
    }
    if (local_8 == 0) {
      local_14 = local_c;
      local_10 = 0xb;
      uVar2 = 0;
      uVar1 = FUN_0040cfe4((int)&DAT_004103ec,'\x01',(undefined4 *)PTR_PTR_005721e8,0,&local_14);
      FUN_0040382c(uVar1);
    }
  }
  *in_FS_OFFSET = uVar2;
  FUN_00403db0((int *)&local_c);
  return;
}

