/*
 * FUN_00545100 at 00545100
 * undefined __register FUN_00545100(int * param_1)
 * Address ranges: 00545100-00545483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00545100(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int local_14c;
  int local_148;
  byte local_144 [256];
  int local_44;
  int local_40;
  byte *local_3c;
  uint local_38;
  uint *local_34;
  byte *local_30;
  uint local_2c;
  uint local_28;
  char *local_24;
  uint *local_20;
  uint *puVar4;
  uint **ppuVar5;
  uint *local_18;
  uint *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  local_10 = (int *)&stack0xfffffffc;
  iVar3 = 0x29;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_14 = (uint *)&LAB_00545484;
  local_18 = (uint *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_18;
  piVar1 = (int *)&stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xcc] == 0) {
    FUN_00403d94("Assertion failure");
    piVar1 = local_10;
  }
  local_10 = piVar1;
  local_c = local_8[0xcb];
  iVar3 = FUN_00494858((int *)local_8[0xd2]);
  local_10 = (int *)FUN_00490354(*(int **)(iVar3 + 8),local_c);
  FUN_005449e0(local_8,(int *)&local_14);
  FUN_00432744(local_8[0xba],local_14);
  FUN_00406a48(&PTR_DAT_005450e8,(int *)&local_18);
  FUN_00432744(local_8[0xbb],local_18);
  puVar4 = (uint *)0x5451ad;
  FUN_00544f98((int)local_8,(int *)&stack0xffffffe4);
  FUN_00432744(local_8[0xbc],puVar4);
  ppuVar5 = &local_20;
  local_20 = (uint *)0x5451d3;
  iVar3 = FUN_00492440(local_10,(byte *)(local_8 + 0xc5));
  local_20 = (uint *)0x5451de;
  FUN_00460d1c(*(byte **)(iVar3 + 0x24),(int *)&local_2c);
  local_28 = local_2c;
  local_20 = &local_28;
  local_24 = (char *)0x5451f9;
  FUN_00406a48(&PTR_DAT_005450f0,(int *)&local_30);
  puVar4 = local_20;
  local_20 = (uint *)0x545204;
  FUN_0040a894(local_30,puVar4,0,(int *)ppuVar5);
  FUN_00432744(local_8[0xbd],local_20);
  ppuVar5 = &local_34;
  local_20 = (uint *)0x54522a;
  iVar3 = FUN_00492440(local_10,(byte *)(local_8 + 0xc5));
  local_20 = (uint *)0x545235;
  FUN_00460d1c(*(byte **)(iVar3 + 0x24),(int *)&local_38);
  local_28 = local_38;
  local_20 = &local_28;
  local_24 = (char *)0x545250;
  FUN_00406a48(&PTR_DAT_005450f8,(int *)&local_3c);
  puVar4 = local_20;
  local_20 = (uint *)0x54525b;
  FUN_0040a894(local_3c,puVar4,0,(int *)ppuVar5);
  FUN_00432744(local_8[0xbe],local_34);
  (**(code **)(*(int *)local_8[0xb7] + 0x5c))
            ((int *)local_8[0xb7],(*(byte *)(local_8 + 0xc3) & 1) != 0);
  (**(code **)(*(int *)local_8[0xbc] + 0x5c))
            ((int *)local_8[0xbc],(*(byte *)(local_8 + 0xc3) & 1) != 0);
  (**(code **)(*(int *)local_8[0xb8] + 0x5c))
            ((int *)local_8[0xb8],(*(byte *)(local_8 + 0xc3) & 2) != 0);
  (**(code **)(*(int *)local_8[0xbd] + 0x5c))
            ((int *)local_8[0xbd],(*(byte *)(local_8 + 0xc3) & 2) != 0);
  (**(code **)(*(int *)local_8[0xb9] + 0x5c))
            ((int *)local_8[0xb9],(*(byte *)(local_8 + 0xc3) & 4) != 0);
  (**(code **)(*(int *)local_8[0xbe] + 0x5c))
            ((int *)local_8[0xbe],(*(byte *)(local_8 + 0xc3) & 4) != 0);
  cVar2 = (**(code **)(*(int *)local_8[0xb9] + 0x4c))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)local_8[0xb8] + 0x4c))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(int *)local_8[0xb7] + 0x4c))();
      if (cVar2 == '\0') {
        local_10 = (int *)0x545406;
        FUN_00402fe0(*local_8,local_144);
        local_10 = (int *)0x545417;
        FUN_00403fd4(&local_14c,local_144);
        local_10 = (int *)local_14c;
        local_14 = (uint *)0x5454e4;
        local_18 = (uint *)0x545540;
        FUN_004040f0(&local_148,3);
        FUN_00403d94(local_148);
      }
      else {
        local_10 = (int *)0x5453f4;
        (**(code **)(*(int *)local_8[0xb7] + 0xb8))((int *)local_8[0xb7],1);
      }
    }
    else {
      iVar3 = FUN_00494c5c((int *)local_8[0xcc],(byte *)(local_8 + 0xc5));
      iVar3 = FUN_00496d84(iVar3);
      if ((*(byte *)(iVar3 + 0x18) & 0x20) != 0) {
        FUN_00402fe0(*local_8,local_144);
        FUN_00403fd4(&local_44,local_144);
        local_20 = (uint *)0x5454e4;
        local_24 = ": pfkfNullify and pfRequired are mutually exclusive";
        local_28 = 0x5453a8;
        FUN_004040f0(&local_40,3);
        local_28 = 0x5453ba;
        FUN_00403d94(local_40);
      }
      (**(code **)(*(int *)local_8[0xb8] + 0xb8))((int *)local_8[0xb8],1);
    }
  }
  else {
    (**(code **)(*(int *)local_8[0xb9] + 0xb8))((int *)local_8[0xb9],1);
  }
  *in_FS_OFFSET = local_18;
  local_10 = (int *)&LAB_0054548b;
  local_14 = (uint *)0x545469;
  FUN_00403dd4(&local_14c,2);
  local_14 = (uint *)0x545476;
  FUN_00403dd4(&local_44,7);
  local_14 = (uint *)0x545483;
  FUN_00403dd4((int *)&local_20,4);
  return;
}

