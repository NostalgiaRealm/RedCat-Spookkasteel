/*
 * FUN_004d6428 at 004d6428
 * undefined __register FUN_004d6428(int * param_1, int * param_2)
 * Address ranges: 004d6428-004d64db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d6428(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_004d64dc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (*param_2 != 0) {
    uVar2 = FUN_004d6094((int)param_1,*param_2);
    if ((char)uVar2 == '\0') {
      FUN_00402fe0(*local_8,local_114);
      FUN_00403fd4(&local_14,local_114);
      pcStack_12c = "invalid bookmark";
      FUN_004040f0(&local_10,3);
      FUN_00403d94(local_10);
    }
    FUN_00403094((int *)*local_c);
    *local_c = 0;
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

