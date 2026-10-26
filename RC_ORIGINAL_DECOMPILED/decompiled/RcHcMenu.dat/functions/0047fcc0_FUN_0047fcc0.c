/*
 * FUN_0047fcc0 at 0047fcc0
 * undefined __register FUN_0047fcc0(int * param_1, int * param_2)
 * Address ranges: 0047fcc0-0047fdff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047fcc0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar4;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 *local_18;
  int local_14;
  char *local_10;
  int *local_c;
  int *local_8;
  
  puStack_48 = &stack0xfffffffc;
  local_3c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_34 = 0;
  local_38 = 0;
  local_10 = (char *)0x0;
  puStack_4c = &LAB_0047fe00;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar1 + -1) {
    local_14 = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,local_14,&local_10);
      iVar2 = FUN_0040431c("=",local_10);
      if (-1 < iVar2) {
        iVar3 = FUN_00404030((int)local_10);
        if (iVar2 < iVar3) {
          ppuVar4 = &local_18;
          local_30 = *local_c;
          local_2c = 0xb;
          FUN_00404238((int)local_10,1,iVar2 - 1,&local_34);
          local_28 = local_34;
          local_24 = 0xb;
          FUN_00404238((int)local_10,iVar2 + 1,0xff,&local_38);
          local_20 = local_38;
          local_1c = 0xb;
          FUN_0040a894((byte *)"%s%s:\"%s\";",&local_30,2,(int *)ppuVar4);
          FUN_00403e04(local_c,local_18);
        }
      }
      local_14 = local_14 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0047faa8((undefined *)*local_c,(int *)&local_3c);
  FUN_00403e04(local_c,local_3c);
  iVar1 = FUN_00404030(*local_c);
  FUN_00404364(local_c,iVar1 - 1);
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_0047fe07;
  puStack_4c = (undefined1 *)0x47fdef;
  FUN_00403dd4((int *)&local_3c,3);
  puStack_4c = (undefined1 *)0x47fdf7;
  FUN_00403db0((int *)&local_18);
  puStack_4c = (undefined1 *)0x47fdff;
  FUN_00403db0((int *)&local_10);
  return;
}

