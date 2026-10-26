/*
 * FUN_00454cd8 at 00454cd8
 * undefined __register FUN_00454cd8(int * param_1)
 * Address ranges: 00454cd8-00454d88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4530ac slot 33 for TImage. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4530ac slot 33 for TImage.
   Original bytes unchanged; names and types still inferred. */

void FUN_00454cd8(int *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  int local_1c [4];
  undefined1 local_9;
  int *local_8;
  
  local_8 = param_1;
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    piVar1 = (int *)param_1[0x48];
    FUN_0041c110((int *)piVar1[4],1);
    FUN_0041c434((int *)piVar1[5],'\x01');
    uStackY_2c = 0x454d21;
    FUN_0041cb34(piVar1,0,0,local_8[0xf],local_8[0xe]);
  }
  local_9 = (undefined1)local_8[0x4f];
  *(undefined1 *)(local_8 + 0x4f) = 1;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  piVar1 = (int *)local_8[0x48];
  FUN_00454c38(local_8,local_1c);
  FUN_0041cbcc(piVar1,local_1c,*(int **)(local_8[0x4a] + 4));
  *in_FS_OFFSET = uStackY_2c;
  *(undefined1 *)(local_8 + 0x4f) = local_9;
  return;
}

