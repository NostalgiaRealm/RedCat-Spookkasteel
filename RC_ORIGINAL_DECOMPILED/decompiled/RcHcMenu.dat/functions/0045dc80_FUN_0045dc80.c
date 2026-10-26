/*
 * FUN_0045dc80 at 0045dc80
 * undefined __register FUN_0045dc80(int * param_1, byte param_2, undefined4 param_3, int * param_4)
 * Address ranges: 0045dc80-0045dcc6;0045dce3-0045ddeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45dc68 slot 0 for TGenericAppDatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45dc68 slot 0 for
   TGenericAppDatabase. Original bytes unchanged; names and types still inferred. */

void FUN_0045dc80(int *param_1,byte param_2,undefined4 param_3,int *param_4)

{
  undefined4 *in_FS_OFFSET;
  char *pcStack_140;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18 [3];
  byte local_9;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_18[0] = 0;
  local_1c = 0;
  local_120 = 0;
  local_18[1] = 0;
  puStack_12c = &LAB_0045ddec;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_18[2] = param_3;
  local_9 = param_2;
  local_8 = param_1;
  switch(param_2) {
  case 0:
    puStack_128 = &stack0xfffffffc;
    FUN_00403e04(param_4,(undefined4 *)"INTEGER");
    break;
  case 1:
    puStack_128 = &stack0xfffffffc;
    FUN_00403e04(param_4,(undefined4 *)"INTEGER");
    break;
  case 2:
    puStack_128 = &stack0xfffffffc;
    FUN_00409bd8(param_3,local_18 + 1);
    pcStack_140 = (char *)0x45dd2c;
    FUN_004040f0(param_4,3);
    break;
  case 3:
    puStack_128 = &stack0xfffffffc;
    FUN_00403e04(param_4,(undefined4 *)&DAT_0045de30);
    break;
  case 4:
    puStack_128 = &stack0xfffffffc;
    FUN_00403e04(param_4,(undefined4 *)"DATETIME");
    break;
  case 5:
    puStack_128 = &stack0xfffffffc;
    FUN_00403e04(param_4,(undefined4 *)"CURRENCY");
    break;
  case 6:
    puStack_128 = &stack0xfffffffc;
    FUN_00403e04(param_4,(undefined4 *)"FLOAT");
    break;
  default:
    FUN_00402fe0(*param_1,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    FUN_00409bd8((uint)local_9,&local_120);
    pcStack_140 = " not supported (yet)";
    FUN_004040f0(local_18,4);
    FUN_00459bd4(local_18[0]);
  }
  *in_FS_OFFSET = pcStack_140;
  FUN_00403db0(&local_120);
  FUN_00403dd4(&local_1c,3);
  return;
}

