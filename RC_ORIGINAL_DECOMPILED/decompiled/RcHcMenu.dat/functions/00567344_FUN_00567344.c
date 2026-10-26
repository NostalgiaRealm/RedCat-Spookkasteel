/*
 * FUN_00567344 at 00567344
 * undefined __register FUN_00567344(int * param_1)
 * Address ranges: 00567344-00567574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00567344(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  LPCSTR lpNewFileName;
  LPCSTR lpExistingFileName;
  undefined4 *extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcVar5;
  BOOL bFailIfExists;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  int local_130;
  int local_12c;
  undefined4 *local_128;
  undefined1 local_124;
  byte *local_120;
  byte local_11c [256];
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_130 = 0;
  local_12c = 0;
  local_120 = (byte *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_138 = &LAB_005675bc;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_11c);
  FUN_00403fd4(&local_1c,local_11c);
  FUN_004040f0((int *)&local_18,3);
  puVar1 = local_18;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  FUN_004040f0((int *)&local_10,3);
  pcVar5 = "Player%d.ini";
  FUN_004040f0((int *)&local_120,3);
  local_128 = (undefined4 *)(local_8[7] + 1);
  pbVar3 = local_120;
  if (SCARRY4(local_8[7],1)) {
    pbVar3 = (byte *)thunk_FUN_00402874((uint)local_120);
    local_128 = extraout_EDX;
  }
  local_124 = 0;
  FUN_0040a894(pbVar3,&local_128,0,(int *)pcVar5);
  uVar4 = FUN_00409dd0((undefined *)local_10);
  if ((char)uVar4 == '\0') {
    local_128 = local_10;
    local_124 = 0xb;
    FUN_0040a894((byte *)"Unable to find %s. Installation incomplete!",&local_128,0,&local_12c);
    FUN_00403d94(local_12c);
  }
  bFailIfExists = -1;
  lpNewFileName = FUN_004041f4((undefined *)local_14);
  lpExistingFileName = FUN_004041f4((undefined *)local_10);
  CopyFileA(lpExistingFileName,lpNewFileName,bFailIfExists);
  uVar4 = FUN_00409dd0((undefined *)local_14);
  if ((char)uVar4 == '\0') {
    local_128 = local_14;
    local_124 = 0xb;
    FUN_0040a894((byte *)"Unable to find %s. Installation incomplete!",&local_128,0,&local_130);
    FUN_00403d94(local_130);
  }
  if ((char)local_8[5] != '\0') {
    FUN_00565570(local_8[3]);
  }
  local_c = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',local_14);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffe94;
  FUN_005665b4((int)local_8,local_c);
  FUN_00566768(local_8,local_c);
  FUN_00566910((int)local_8,local_c);
  FUN_00566d54((int)local_8,local_c);
  FUN_00566fe8((int)local_8);
  *in_FS_OFFSET = uVar4;
  FUN_00403094(local_c);
  return;
}

