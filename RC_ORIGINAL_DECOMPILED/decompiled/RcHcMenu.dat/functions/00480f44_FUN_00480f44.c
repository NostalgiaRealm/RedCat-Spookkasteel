/*
 * FUN_00480f44 at 00480f44
 * undefined __register FUN_00480f44(int param_1, char * param_2, int * param_3)
 * Address ranges: 00480f44-00481071
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00480f44(int param_1,char *param_2,int *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int local_30;
  int local_2c;
  char *local_28;
  undefined1 local_24;
  char *local_20;
  undefined1 local_1c;
  int local_18;
  undefined *local_14;
  undefined1 local_10;
  int local_c;
  int *local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_30 = 0;
  local_2c = 0;
  local_18 = 0;
  local_c = 0;
  puStack_40 = &LAB_004810a4;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x480f77;
  local_8 = param_3;
  FUN_00413580(param_3);
  puStack_4c = &LAB_00481072;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_48 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))();
  iVar1 = FUN_00409758(param_2,"STANDARD");
  if (iVar1 == 0) {
    local_14 = &DAT_004810d0;
    local_10 = 0xb;
    FUN_0040a894(&DAT_004810e0,&local_14,0,&local_c);
    (**(code **)(*local_8 + 0x34))(local_8,local_c);
    local_28 = "DEFAULT DRIVER";
    local_24 = 0xb;
    local_20 = "PARADOX";
    local_1c = 0xb;
    FUN_0040a894((byte *)"%s=%s",&local_28,1,&local_18);
    (**(code **)(*local_8 + 0x34))(local_8,local_18);
    local_28 = "ENABLE BCD";
    local_24 = 0xb;
    local_20 = "FALSE";
    local_1c = 0xb;
    FUN_0040a894((byte *)"%s=%s",&local_28,1,&local_2c);
    piVar2 = (int *)0x48103d;
    (**(code **)(*local_8 + 0x34))(local_8,local_2c);
  }
  else {
    piVar2 = local_8;
    FUN_0047faa8(param_2,&local_30);
    FUN_00480db0(param_1,(byte *)"\\DRIVERS\\%s\\DB OPEN",local_30);
  }
  *in_FS_OFFSET = piVar2;
  puStack_4c = &LAB_00481079;
  uStack_50 = 0x481071;
  FUN_0041363c(local_8);
  return;
}

