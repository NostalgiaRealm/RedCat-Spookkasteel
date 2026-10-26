/*
 * FUN_00495918 at 00495918
 * undefined __register FUN_00495918(int * param_1, int * param_2)
 * Address ranges: 00495918-00495a2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00495918(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *local_24;
  byte *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_10 = 0;
  local_1c = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = (byte *)0x0;
  piVar8 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffed0;
  local_c = param_2;
  local_8 = param_1;
  if ((*(byte *)(param_1 + 6) & 0x20) != 0) {
    cVar1 = (**(code **)(*param_2 + 0x50))();
    if (cVar1 != '\0') {
      piVar8 = &local_10;
      iVar2 = FUN_00496d84((int)local_c);
      local_18 = *(undefined4 *)(iVar2 + 0x24);
      local_14 = 0xb;
      FUN_0040a894((byte *)"field %s must be assigned",&local_18,0,piVar8);
      ppuVar6 = &local_1c;
      iVar2 = local_10;
      iVar3 = FUN_00496d84((int)local_c);
      local_18 = *(undefined4 *)(iVar3 + 0x24);
      local_14 = 0xb;
      FUN_00406a48(&PTR_DAT_00495910,(int *)&local_20);
      FUN_0040a894(local_20,&local_18,0,(int *)ppuVar6);
      puVar7 = local_1c;
      piVar4 = (int *)FUN_00495ee0((int)local_c);
      piVar8 = local_c;
      FUN_00402fe0(*local_8,&stack0xfffffedc);
      FUN_00403fd4((int *)&local_24,&stack0xfffffedc);
      uVar5 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',local_24,(int)piVar8,piVar4,puVar7,iVar2,
                           (undefined4 *)".Validate: ");
      FUN_0040382c(uVar5);
    }
  }
  (**(code **)*local_8)(local_8,local_c);
  *in_FS_OFFSET = piVar8;
  FUN_00403dd4((int *)&local_24,3);
  FUN_00403db0(&local_10);
  return;
}

