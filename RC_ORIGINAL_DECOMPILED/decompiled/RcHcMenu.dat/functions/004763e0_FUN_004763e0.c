/*
 * FUN_004763e0 at 004763e0
 * undefined __register FUN_004763e0(int param_1, int param_2, char param_3)
 * Address ranges: 004763e0-004764dc;00476513-00476a2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004763e0(int param_1,int param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined *local_48;
  int local_44;
  undefined4 *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  byte local_25;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int *local_c;
  char local_5;
  
  puStack_58 = &stack0xfffffffc;
  local_48 = (undefined *)0x0;
  local_44 = 0;
  local_40 = (undefined4 *)0x0;
  local_38 = 0;
  puStack_5c = &LAB_00476a2b;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  cVar1 = *(char *)(param_2 + 4);
  local_5 = param_3;
  if (cVar1 == '\0') {
    local_c = (int *)FUN_00475b54(param_1,param_2);
    if (((local_5 == '\0') || ((byte)(local_5 - 9U) < 3)) && ((char)local_c[0xd] == '\x05')) {
      iVar5 = FUN_00476b30(param_1,2,4,2);
      uVar4 = FUN_00476a3c(param_1,local_c,param_2);
      FUN_00476b74(param_1,iVar5,0,uVar4);
      iVar6 = FUN_004760d8(param_1,5,(undefined4 *)&DAT_00570828,2);
      FUN_00476b74(param_1,iVar5,1,(short)iVar6);
    }
    else {
      FUN_00476a3c(param_1,local_c,param_2);
    }
  }
  else if (cVar1 == '\x01') {
    puStack_58 = &stack0xfffffffc;
    FUN_0047627c(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    bVar2 = *(byte *)(param_2 + 6);
    switch(bVar2) {
    case 1:
    case 2:
    case 9:
      puStack_58 = &stack0xfffffffc;
      iVar5 = FUN_00476b30(param_1,1,bVar2,1);
      uVar4 = FUN_004763e0(param_1,*(int *)(param_2 + 0x18),*(char *)(param_2 + 6));
      FUN_00476b74(param_1,iVar5,0,uVar4);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xb:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x1e:
    case 0x25:
      local_10 = *(int *)(param_2 + 0x18);
      iVar5 = *(int *)(param_2 + 0x1c);
      local_25 = bVar2;
      local_14 = iVar5;
      if ((((byte)(bVar2 - 3) < 6) && (*(char *)(iVar5 + 4) == '\0')) &&
         (*(char *)(local_10 + 4) != '\0')) {
        local_25 = (&DAT_0057081d)[bVar2];
        local_14 = local_10;
        local_10 = iVar5;
      }
      iVar5 = 0;
      puStack_58 = &stack0xfffffffc;
      if (((*(char *)(local_10 + 4) == '\0') &&
          (puStack_58 = &stack0xfffffffc, *(char *)(local_14 + 4) == '\x01')) &&
         ((cVar1 = *(char *)(param_2 + 6), cVar1 == '\x03' ||
          ((cVar1 == '\x04' || (puStack_58 = &stack0xfffffffc, cVar1 == '\x1e')))))) {
        puStack_58 = &stack0xfffffffc;
        bVar3 = FUN_00405c2c((short *)(local_14 + 8));
        if (bVar3) {
          if (*(char *)(param_2 + 6) == '\x03') {
            local_25 = 1;
          }
          else if (*(char *)(param_2 + 6) == '\x04') {
            local_25 = 2;
          }
          else {
            FUN_00406a48((undefined4 *)PTR_PTR_005720bc,(int *)&local_40);
            FUN_00466d84(local_40,0);
          }
          iVar5 = FUN_00476b30(param_1,1,local_25,1);
          uVar4 = FUN_004763e0(param_1,local_10,*(char *)(param_2 + 6));
          FUN_00476b74(param_1,iVar5,0,uVar4);
        }
        else {
          cVar1 = *(char *)(local_14 + 0x20);
          if (((cVar1 == '\x01') || ((byte)(cVar1 - 0x17U) < 2)) || (cVar1 == '#')) {
            FUN_004052a4(&local_38,(VARIANTARG *)(local_14 + 8));
            local_34 = FUN_00404030(local_38);
            if (local_34 != 0) {
              local_30 = 0;
              local_2c = (uint)((*(byte *)(param_1 + 0x2c) & 1) != 0);
              iVar6 = local_34;
              if (((*(char *)(param_2 + 5) == '\0') &&
                  (iVar6 = local_30, (*(byte *)(param_1 + 0x2c) & 2) == 0)) &&
                 ((1 < local_34 && (*(char *)(local_38 + -1 + local_34) == '*')))) {
                FUN_00404278(&local_38,local_34,1);
                iVar6 = local_34 + -1;
              }
              local_30 = iVar6;
              if ((local_2c != 0) || (local_30 != 0)) {
                iVar5 = FUN_00476b30(param_1,3,local_25,4);
                FUN_00476b74(param_1,iVar5,0,(short)local_2c);
                FUN_00476b74(param_1,iVar5,1,(short)local_30);
                uVar4 = FUN_004763e0(param_1,local_10,*(char *)(param_2 + 6));
                FUN_00476b74(param_1,iVar5,2,uVar4);
                uVar4 = FUN_00476148(param_1,local_38);
                FUN_00476b74(param_1,iVar5,3,uVar4);
              }
            }
          }
        }
      }
      if (iVar5 == 0) {
        if ((local_25 == 1) || (local_25 == 2)) {
          iVar5 = FUN_00476b30(param_1,1,local_25,1);
          local_18 = FUN_004763e0(param_1,local_10,*(char *)(param_2 + 6));
          FUN_00476b74(param_1,iVar5,0,(short)local_18);
        }
        else {
          iVar5 = FUN_00476b30(param_1,2,local_25,2);
          local_18 = FUN_004763e0(param_1,local_10,*(char *)(param_2 + 6));
          uVar4 = FUN_004763e0(param_1,local_14,*(char *)(param_2 + 6));
          FUN_00476b74(param_1,iVar5,0,(short)local_18);
          FUN_00476b74(param_1,iVar5,1,uVar4);
        }
      }
      break;
    case 0x1f:
      puStack_58 = &stack0xfffffffc;
      iVar5 = FUN_00476b30(param_1,2,0x1f,2);
      uVar4 = FUN_004763e0(param_1,*(int *)(param_2 + 0x18),*(char *)(param_2 + 6));
      FUN_00476b74(param_1,iVar5,0,uVar4);
      local_1c = FUN_00476b30(param_1,0xb,0x24,2);
      FUN_00476b74(param_1,iVar5,1,(short)local_1c);
      local_20 = local_1c;
      iVar5 = *(int *)(*(int *)(param_2 + 0x28) + 8);
      if (-1 < iVar5 + -1) {
        local_24 = 0;
        local_3c = iVar5;
        do {
          iVar5 = FUN_00412384(*(undefined4 **)(param_2 + 0x28),local_24);
          local_18 = FUN_004763e0(param_1,iVar5,*(char *)(param_2 + 6));
          if (local_24 == 0) {
            FUN_00476b74(param_1,local_20,0,(short)local_18);
            FUN_00476b74(param_1,local_20,1,0);
          }
          else {
            local_1c = FUN_00476b30(param_1,0xb,0x24,2);
            FUN_00476b74(param_1,local_1c,0,(short)local_18);
            FUN_00476b74(param_1,local_1c,1,0);
            FUN_00476b74(param_1,local_20,1,(short)local_1c);
            local_20 = local_1c;
          }
          local_24 = local_24 + 1;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
        local_3c = 0;
      }
    }
  }
  else if (cVar1 == '\x03') {
    puStack_58 = &stack0xfffffffc;
    iVar5 = FUN_00476b30(param_1,10,0x23,2);
    FUN_004052a4(&local_44,(VARIANTARG *)(param_2 + 8));
    iVar6 = FUN_00404030(local_44);
    uVar7 = iVar6 + 1;
    FUN_004052a4((int *)&local_48,(VARIANTARG *)(param_2 + 8));
    puVar8 = (undefined4 *)FUN_004041f4(local_48);
    uVar9 = FUN_00476250(param_1,puVar8,uVar7);
    FUN_00476b74(param_1,iVar5,0,(short)uVar9);
    if (*(int *)(param_2 + 0x28) == 0) {
      FUN_00476b74(param_1,iVar5,1,0);
    }
    else {
      local_1c = FUN_00476b30(param_1,0xb,0x24,2);
      FUN_00476b74(param_1,iVar5,1,(short)local_1c);
      local_20 = local_1c;
      iVar5 = *(int *)(*(int *)(param_2 + 0x28) + 8);
      if (-1 < iVar5 + -1) {
        local_24 = 0;
        local_3c = iVar5;
        do {
          iVar5 = FUN_00412384(*(undefined4 **)(param_2 + 0x28),local_24);
          local_18 = FUN_004763e0(param_1,iVar5,*(char *)(param_2 + 6));
          if (local_24 == 0) {
            FUN_00476b74(param_1,local_20,0,(short)local_18);
            FUN_00476b74(param_1,local_20,1,0);
          }
          else {
            local_1c = FUN_00476b30(param_1,0xb,0x24,2);
            FUN_00476b74(param_1,local_1c,0,(short)local_18);
            FUN_00476b74(param_1,local_1c,1,0);
            FUN_00476b74(param_1,local_20,1,(short)local_1c);
            local_20 = local_1c;
          }
          local_24 = local_24 + 1;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
        local_3c = 0;
      }
    }
  }
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_00476a32;
  puStack_5c = (undefined1 *)0x476a22;
  FUN_00403dd4((int *)&local_48,3);
  puStack_5c = (undefined1 *)0x476a2a;
  FUN_00403db0(&local_38);
  return;
}

