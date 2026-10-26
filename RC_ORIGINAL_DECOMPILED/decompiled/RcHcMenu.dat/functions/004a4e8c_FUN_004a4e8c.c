/*
 * FUN_004a4e8c at 004a4e8c
 * undefined __register FUN_004a4e8c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004a4e8c-004a5046
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a4e8c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  int local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_5c = &stack0xfffffffc;
  local_3c = 0;
  local_38 = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_60 = &LAB_004a5047;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = FUN_0045c638(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = FUN_00409dd0((undefined *)local_8[1]);
    if ((char)uVar2 == '\0') {
      local_34 = local_8[1];
      local_30 = 0xb;
      FUN_0040a894((byte *)"\"%s\", does not exist",&local_34,0,&local_2c);
      iVar5 = local_2c;
      iVar3 = FUN_004a418c();
      FUN_004a4ba4(iVar3,iVar5);
      local_34 = local_8[1];
      local_30 = 0xb;
      FUN_0040a894((byte *)"\"%s\", does not exist",&local_34,0,(int *)&local_38);
      piVar4 = FUN_0040ceec((int *)&DAT_00408ac4,'\x01',local_38);
      FUN_0040382c(piVar4);
    }
    else {
      local_24 = local_8[1];
      local_20 = 0xb;
      local_1c = local_c;
      local_18 = 0xb;
      FUN_0040a894((byte *)"\"%s\", Section [%s] does not exist!!!",&local_24,1,&local_14);
      iVar5 = local_14;
      iVar3 = FUN_004a418c();
      FUN_004a4ba4(iVar3,iVar5);
      local_24 = local_8[1];
      local_20 = 0xb;
      local_1c = local_c;
      local_18 = 0xb;
      FUN_0040a894((byte *)"\"%s\", Section [%s] does not exist",&local_24,1,(int *)&local_28);
      piVar4 = FUN_0040ceec((int *)&DAT_00408ac4,'\x01',local_28);
      FUN_0040382c(piVar4);
    }
  }
  cVar1 = FUN_0045cc88(local_8,local_c,local_10);
  if (cVar1 == '\0') {
    local_54 = local_8[1];
    local_50 = 0xb;
    local_4c = local_c;
    local_48 = 0xb;
    local_44 = local_10;
    local_40 = 0xb;
    FUN_0040a894((byte *)"\"%s\", [%s], Identifier \"%s\" does not exist",&local_54,2,&local_3c);
    iVar5 = local_3c;
    iVar3 = FUN_004a418c();
    FUN_004a4ba4(iVar3,iVar5);
  }
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_004a504e;
  puStack_60 = (undefined1 *)0x4a5031;
  FUN_00403dd4(&local_3c,2);
  puStack_60 = (undefined1 *)0x4a503e;
  FUN_00403dd4(&local_2c,2);
  puStack_60 = (undefined1 *)0x4a5046;
  FUN_00403db0(&local_14);
  return;
}

