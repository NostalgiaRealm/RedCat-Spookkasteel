/*
 * FUN_004c2040 at 004c2040
 * undefined __register FUN_004c2040(int param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 004c2040-004c2210
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 13 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 13 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004c2040(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *local_40;
  byte *local_3c;
  undefined4 *in_stack_ffffffc8;
  undefined4 **ppuVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *local_2c;
  byte **ppbVar6;
  int *piVar7;
  undefined *local_24;
  undefined4 local_20;
  byte *local_1c;
  undefined4 *local_18;
  
  iVar2 = 7;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  local_18 = (undefined4 *)0x4c2065;
  FUN_004041e4(param_2);
  local_18 = (undefined4 *)0x4c206d;
  FUN_004041e4(0);
  local_1c = &LAB_004c2211;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  if (param_4 == 0xbd0) {
    local_24 = &DAT_004c222c;
    ppbVar6 = &local_1c;
    local_2c = (undefined4 *)0x4c20b2;
    local_18 = (undefined4 *)&stack0xfffffffc;
    iVar2 = FUN_00403224(*(int **)(param_1 + 4),(int)&PTR_FUN_004bcac4);
    local_24 = *(undefined **)(iVar2 + 0x28);
    local_20._0_1_ = 0xb;
    local_2c = (undefined4 *)0x4c20cb;
    FUN_0040a894((byte *)"Can\'t open database \"%s\".",&local_24,0,(int *)ppbVar6);
    local_2c = (undefined4 *)&DAT_004c2260;
    pbVar4 = local_1c;
    puVar1 = (undefined4 *)FUN_00403224(*(int **)(param_1 + 4),(int)&PTR_FUN_004bcac4);
    FUN_004c4cbc(*puVar1,(int *)&stack0xffffffd8);
    FUN_004040f0((int *)&local_18,3);
    ppuVar3 = &local_2c;
    local_3c = (byte *)0x4c2113;
    puVar1 = local_18;
    FUN_00406a48(&PTR_DAT_004c2030,(int *)&stack0xffffffd0);
    local_3c = pbVar4;
    local_40 = (undefined4 *)0x4c2128;
    pbVar5 = local_3c;
    iVar2 = FUN_00403224(*(int **)(param_1 + 4),(int)&PTR_FUN_004bcac4);
    pbVar4 = local_3c;
    local_24 = *(undefined **)(iVar2 + 0x28);
    local_20 = CONCAT31(local_20._1_3_,0xb);
    local_3c = (byte *)0x4c213d;
    FUN_0040a894(pbVar4,&local_24,0,(int *)ppuVar3);
    local_3c = (byte *)0x4c2152;
    in_stack_ffffffc8 = local_2c;
    FUN_0045b554((int *)&DAT_004cc8d0,'\x01',(undefined4 *)"CLASS",local_2c,puVar1,
                 (undefined4 *)pbVar5);
  }
  else {
    local_18 = (undefined4 *)&stack0xfffffffc;
    if (param_4 == 0xbd7) {
      local_24 = &DAT_004c222c;
      piVar7 = (int *)&stack0xffffffc8;
      local_2c = (undefined4 *)0x4c2174;
      local_18 = (undefined4 *)&stack0xfffffffc;
      iVar2 = FUN_00403224(*(int **)(param_1 + 4),(int)&PTR_FUN_004bcac4);
      local_24 = *(undefined **)(iVar2 + 0x28);
      local_20 = CONCAT31(local_20._1_3_,0xb);
      local_2c = (undefined4 *)0x4c218d;
      FUN_0040a894((byte *)"Can\'t open database \"%s\".",&local_24,0,piVar7);
      local_2c = (undefined4 *)&DAT_004c2260;
      puVar1 = (undefined4 *)FUN_00403224(*(int **)(param_1 + 4),(int)&PTR_FUN_004bcac4);
      FUN_004c4cbc(*puVar1,(int *)&local_3c);
      puVar1 = (undefined4 *)0x4c21c0;
      FUN_004040f0((int *)&stack0xffffffcc,3);
      pbVar4 = local_3c;
      FUN_00406a48(&PTR_DAT_004c2038,(int *)&local_40);
      local_3c = (byte *)0x4c21e6;
      in_stack_ffffffc8 = local_40;
      FUN_0045b554((int *)&DAT_004cc938,'\x01',(undefined4 *)"CLASS",local_40,puVar1,
                   (undefined4 *)pbVar4);
    }
  }
  *in_FS_OFFSET = in_stack_ffffffc8;
  FUN_00403dd4((int *)&local_40,7);
  FUN_00403dd4((int *)&local_1c,4);
  return;
}

