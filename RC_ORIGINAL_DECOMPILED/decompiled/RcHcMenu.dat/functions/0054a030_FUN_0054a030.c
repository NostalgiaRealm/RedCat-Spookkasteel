/*
 * FUN_0054a030 at 0054a030
 * undefined __register FUN_0054a030(int * param_1, undefined1 param_2)
 * Address ranges: 0054a030-0054a0cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054a030(int *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_0054a0cc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_9 = param_2;
  local_8 = param_1;
  if ((char)param_1[6] != '\0') {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "Distinct can only be changed if list is closed";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  *(undefined1 *)(local_8 + 0xe) = local_9;
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

