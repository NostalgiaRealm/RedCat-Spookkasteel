/*
 * FUN_0053f1b0 at 0053f1b0
 * undefined __register FUN_0053f1b0(int * param_1, int param_2)
 * Address ranges: 0053f1b0-0053f25f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053f1b0(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_0053f260;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0053eb9c((int)param_1);
  if ((char)uVar1 != '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "DatabaseConnection can only be assigned if list not Active.";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  if (local_8[0x87] != local_c) {
    local_8[0x87] = local_c;
  }
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

