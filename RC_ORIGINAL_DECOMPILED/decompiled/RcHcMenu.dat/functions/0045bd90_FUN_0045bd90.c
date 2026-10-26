/*
 * FUN_0045bd90 at 0045bd90
 * undefined __register FUN_0045bd90(int * param_1, char param_2)
 * Address ranges: 0045bd90-0045be50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045bd90(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  local_10 = 0;
  local_14 = 0;
  puStack_118 = (undefined1 *)0x45bda6;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_11c = &LAB_0045be51;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if (((char)local_8[1] == '\0') && (puStack_118 = &stack0xfffffffc, local_8 == DAT_005704ec)) {
    puStack_118 = &stack0xfffffffc;
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_130 = ": Use class procedure Finalize instead of Destroy";
    FUN_004040f0(&local_10,4);
    FUN_00403d94(local_10);
  }
  FUN_0040e4b4(local_8 + 2);
  FUN_0045b45c(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_14,2);
  return;
}

