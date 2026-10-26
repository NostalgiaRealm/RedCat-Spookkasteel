/*
 * FUN_0048d7b0 at 0048d7b0
 * undefined __register FUN_0048d7b0(char * param_1, int * param_2)
 * Address ranges: 0048d7b0-0048d8a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048d7b0(char *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  int *in_FS_OFFSET;
  byte bVar5;
  int iStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int local_40;
  char *local_3c;
  undefined1 local_38;
  int local_34;
  byte local_30 [30];
  char local_12;
  byte local_11;
  int *local_10;
  int *local_c;
  char *local_8;
  
  bVar5 = 0;
  puStack_4c = &stack0xfffffffc;
  local_40 = 0;
  local_34 = 0;
  puStack_50 = &LAB_0048d8a8;
  iStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_54;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_3c = "aPropRef.BaseObjType";
    local_38 = 0xb;
    FUN_0040a894((byte *)" Parameter \'%s\' cannot be nil",&local_3c,0,&local_34);
    FUN_00403d94(local_34);
    puVar1 = puStack_4c;
  }
  puStack_4c = puVar1;
  FUN_00403db0(local_c);
  FUN_0048e1ec((int)local_8,local_c);
  local_10 = (int *)FUN_00493338(*(undefined4 *)(local_8 + 0x18),*(int *)(local_8 + 0x18),
                                 extraout_ECX);
  pcVar3 = local_8;
  pbVar4 = local_30;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + (uint)bVar5 * -8 + 4;
    pbVar4 = pbVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  if (*local_8 != '\0') {
    local_11 = 1;
    local_12 = *local_8;
    do {
      local_30[0] = local_11;
      FUN_0049145c(local_10,local_30,&local_40);
      iStack_54 = local_40;
      FUN_004040f0(local_c,3);
      local_11 = local_11 + 1;
      local_12 = local_12 + -1;
    } while (local_12 != '\0');
  }
  *in_FS_OFFSET = iStack_54;
  puStack_4c = &LAB_0048d8af;
  puStack_50 = (undefined1 *)0x48d89f;
  FUN_00403db0(&local_40);
  puStack_50 = (undefined1 *)0x48d8a7;
  FUN_00403db0(&local_34);
  return;
}

