/*
 * FUN_00494c5c at 00494c5c
 * undefined __register FUN_00494c5c(int * param_1, byte * param_2)
 * Address ranges: 00494c5c-00494d98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00494c5c(int *param_1,byte *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_124 [3];
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  byte *local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_124[2] = 0;
  local_124[1] = 0;
  local_124[0] = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_12c = &LAB_00494d99;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (*param_2 == 0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_13c = ": PropRef can not be empty";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  uVar2 = FUN_0048e1b4((int)local_c,local_8);
  if ((char)uVar2 == '\0') {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(local_124 + 1,local_118);
    FUN_0048e1ec((int)local_c,local_124);
    FUN_004040f0(local_124 + 2,4);
    FUN_00403d94(local_124[2]);
  }
  local_10 = FUN_0048d0fc(local_8,local_c,'\0');
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403dd4(local_124,3);
  FUN_00403dd4(&local_18,2);
  return;
}

