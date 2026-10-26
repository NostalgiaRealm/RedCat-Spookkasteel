/*
 * FUN_0046f674 at 0046f674
 * undefined __register FUN_0046f674(int * param_1, undefined4 * param_2, char param_3, int * param_4)
 * Address ranges: 0046f674-0046f82c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046f674(int *param_1,undefined4 *param_2,char param_3,int *param_4)

{
  bool bVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_24;
  undefined4 *local_20;
  char local_19;
  byte *local_18;
  char local_11;
  undefined4 *local_10;
  int *local_c;
  byte local_5;
  
  local_24 = 0;
  local_20 = (undefined4 *)0x0;
  puStack_34 = (undefined1 *)0x46f699;
  local_11 = param_3;
  local_10 = param_2;
  local_c = param_1;
  FUN_004041e4((int)param_2);
  puVar2 = PTR_DAT_005725fc;
  puStack_38 = &LAB_0046f82d;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_00403e04(param_4,local_10);
  pbVar4 = FUN_004041f4((undefined *)*param_4);
  if (local_11 != '\0') {
    FUN_00412f38(local_c);
  }
  bVar1 = false;
  local_19 = '\0';
  do {
    while (((byte)puVar2[(int)(uint)*pbVar4 >> 3] >> (*pbVar4 & 7) & 1) != 0) {
      pbVar4 = pbVar4 + 2;
    }
    local_5 = *pbVar4;
    if (((local_5 != 0x3a) || (bVar1)) || (pbVar3 = pbVar4, pbVar4[1] == 0x3a)) {
      if (((local_5 != 0x3a) || (bVar1)) || (pbVar4[1] != 0x3a)) {
        uVar5 = FUN_0046f56c();
        if ((char)uVar5 != '\0') {
          bVar1 = (bool)(bVar1 ^ 1);
        }
      }
      else {
        iVar6 = FUN_0040a108((char *)pbVar4);
        FUN_0040a134((undefined4 *)pbVar4,(undefined4 *)(pbVar4 + 1),iVar6 + 1);
      }
    }
    else {
      while ((local_18 = pbVar3, local_5 != 0 &&
             ((bVar1 || (uVar5 = FUN_0046f544(), (char)uVar5 == '\0'))))) {
        pbVar4 = pbVar4 + 1;
        while (((byte)puVar2[(int)(uint)*pbVar4 >> 3] >> (*pbVar4 & 7) & 1) != 0) {
          pbVar4 = pbVar4 + 2;
        }
        local_5 = *pbVar4;
        uVar5 = FUN_0046f56c();
        pbVar3 = local_18;
        if (((char)uVar5 != '\0') && (bVar1 = (bool)(bVar1 ^ 1), pbVar4 == local_18 + 1)) {
          local_19 = '\x01';
        }
      }
      *pbVar4 = 0;
      if (local_19 == '\0') {
        FUN_0040a34c((char *)(local_18 + 1),(int *)&local_20);
      }
      else {
        FUN_0046f5f8((char *)(local_18 + 1),&local_24);
        FUN_00403e48((int *)&local_20,local_24);
        local_19 = '\0';
      }
      if (local_11 != '\0') {
        iVar6 = FUN_00412e80((int)local_c);
        FUN_00403e04((int *)(iVar6 + 0x2c),local_20);
      }
      *pbVar4 = local_5;
      *local_18 = 0x3f;
      local_18 = local_18 + 1;
      iVar6 = FUN_0040a108((char *)pbVar4);
      FUN_0040a134((undefined4 *)local_18,(undefined4 *)pbVar4,iVar6 + 1);
      pbVar4 = local_18;
    }
    pbVar4 = pbVar4 + 1;
  } while (local_5 != 0);
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0046f834;
  puStack_38 = (undefined1 *)0x46f824;
  FUN_00403dd4(&local_24,2);
  puStack_38 = (undefined1 *)0x46f82c;
  FUN_00403db0((int *)&local_10);
  return;
}

