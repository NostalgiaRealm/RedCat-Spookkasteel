/*
 * FUN_00484a34 at 00484a34
 * undefined __register FUN_00484a34(int param_1, int param_2, int * param_3, int param_4, int param_5, uint * param_6)
 * Address ranges: 00484a34-00484b48;00484b7c-00484d4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00484a34(int param_1,int param_2,int *param_3,int param_4,int param_5,uint *param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *in_FS_OFFSET;
  byte bVar8;
  uint *puVar9;
  int local_78;
  undefined1 local_74;
  uint local_70;
  undefined1 local_6c;
  undefined4 local_66;
  ushort local_44;
  ushort local_42;
  ushort local_40;
  ushort local_3e;
  short local_3a;
  int local_32;
  short local_2e;
  int local_28;
  undefined *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  char local_11;
  ushort local_10;
  char local_d;
  int local_c;
  int local_8;
  
  bVar8 = 0;
  local_20 = 0;
  local_24 = (undefined *)0x0;
  local_c = param_2;
  local_8 = param_1;
  FUN_004064c4(param_2);
  iVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffff70;
  puVar6 = (undefined4 *)(local_c + *param_3 * 0x3e);
  puVar7 = &local_66;
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
  *param_3 = *param_3 + 1;
  FUN_0047fb3c(*(int *)(local_8 + 0x180),(char *)((int)&local_66 + 2),&local_20);
  local_1c = 0;
  FUN_00403e48((int *)&local_24,local_20);
  while (iVar5 = FUN_004676ec(param_4,local_24), -1 < iVar5) {
    local_70 = local_1c + 1;
    local_78 = local_20;
    local_74 = 0xb;
    local_6c = 0;
    local_1c = local_70;
    FUN_0040a894((byte *)"%s_%d",&local_78,1,(int *)&local_24);
  }
  if (local_44 < 0x18) {
    local_d = (&DAT_00571508)[local_44];
  }
  else {
    local_d = '\0';
  }
  local_10 = 0;
  local_18 = 0;
  if ((int)*param_6 < *(int *)(param_5 + 4)) {
    uVar1 = FUN_004129b8(param_5,*param_6);
    local_11 = (char)uVar1;
  }
  else {
    local_11 = '\0';
  }
  switch(local_44) {
  case 1:
  case 9:
  case 0xf:
  case 0x14:
  case 0x15:
  case 0x16:
    if (local_40 == 0) {
      local_d = '\0';
    }
    else {
      local_10 = local_40;
    }
    break;
  case 3:
    local_10 = local_40;
    if ((0x15 < local_42) && (local_42 < 0x25)) {
      local_d = (&DAT_0057150a)[local_42];
    }
    break;
  case 5:
  case 0xc:
    if (local_3a != 2) {
      local_d = '\0';
    }
    break;
  case 6:
    if (local_42 == 0x1d) {
      local_d = '\x0e';
      local_11 = '\0';
    }
    break;
  case 7:
    if (local_42 == 0x15) {
      local_d = '\a';
    }
    break;
  case 8:
    local_10 = (local_3e ^ (short)local_3e >> 0xf) - ((short)local_3e >> 0xf);
    local_18 = (int)(short)local_40;
  }
  piVar2 = (int *)FUN_00467ee8(param_4);
  piVar2[6] = *param_6;
  *param_6 = *param_6 + 1;
  (**(code **)(*piVar2 + 0x14))(piVar2,local_24);
  FUN_00467810((int)piVar2,CONCAT31((int3)((uint)extraout_EDX >> 8),local_d));
  FUN_00467894((int)piVar2,(uint)local_10);
  FUN_00467830((int)piVar2,local_18);
  if (local_11 != '\0') {
    FUN_004677fc((int)piVar2,4);
  }
  if (local_32 == 1) {
    FUN_004677fc((int)piVar2,*(byte *)((int)piVar2 + 0x22) | 2);
  }
  if (local_42 == 0x1f) {
    FUN_004677fc((int)piVar2,*(byte *)((int)piVar2 + 0x22) | 0x20);
  }
  *(bool *)(piVar2 + 8) = local_2e != 0;
  if (local_d == '\x1a') {
    if (local_42 == 0x23) {
      FUN_004677fc((int)piVar2,*(byte *)((int)piVar2 + 0x22) | 0x10);
    }
    if (-1 < (short)local_40 + -1) {
      local_1c = 0;
      local_28 = (int)(short)local_40;
      do {
        iVar5 = param_5;
        puVar9 = param_6;
        iVar3 = FUN_004678e0(piVar2);
        FUN_00484a34(local_8,local_c,param_3,iVar3,iVar5,puVar9);
        local_1c = local_1c + 1;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
      local_28 = 0;
    }
  }
  else if (local_d == '\x1b') {
    local_1c = *param_6;
    pcVar4 = FUN_0040a170((char *)(local_c + 2 + *param_3 * 0x3e),(char *)((int)&local_66 + 2));
    FUN_0040a210(pcVar4,"[0]");
    puVar9 = &local_1c;
    iVar5 = FUN_004678e0(piVar2);
    FUN_00484a34(local_8,local_c,param_3,iVar5,param_5,puVar9);
    *param_6 = *param_6 + (int)(short)local_3e;
  }
  *in_FS_OFFSET = iVar3;
  FUN_00403dd4((int *)&local_24,2);
  FUN_00406460(&local_c,(int)&DAT_0047d6a0);
  return;
}

