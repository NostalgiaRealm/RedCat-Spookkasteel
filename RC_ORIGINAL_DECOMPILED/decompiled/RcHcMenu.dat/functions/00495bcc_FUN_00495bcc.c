/*
 * FUN_00495bcc at 00495bcc
 * undefined __register FUN_00495bcc(int * param_1, VARIANT * param_2)
 * Address ranges: 00495bcc-00495c6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00495bcc(int *param_1,VARIANT *param_2)

{
  byte bVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  VARIANT *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_00495c70;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  bVar1 = FUN_00495bac((int)param_1);
  if (bVar1 == 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "OldValue not initialized";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  FUN_00404e28(local_c,(VARIANTARG *)(local_8 + 8));
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

