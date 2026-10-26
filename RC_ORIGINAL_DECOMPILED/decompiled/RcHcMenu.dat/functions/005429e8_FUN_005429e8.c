/*
 * FUN_005429e8 at 005429e8
 * undefined __register FUN_005429e8(int param_1)
 * Address ranges: 005429e8-00542c65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005429e8(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  char cVar9;
  byte bVar10;
  uint **ppuVar11;
  undefined4 uVar12;
  byte *local_64;
  undefined4 *local_60;
  byte local_5c [28];
  byte local_40 [28];
  int local_24;
  int local_20;
  uint *local_1c;
  uint *local_18;
  int local_14;
  int local_10;
  char local_9;
  int local_8;
  
  bVar10 = 0;
  local_64 = (byte *)0x0;
  local_60 = (undefined4 *)0x0;
  local_18 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_20 = 0;
  local_24 = 0;
  uVar12 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff84;
  local_9 = '\0';
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0x278) & 1) != 0) {
    iVar2 = FUN_005417b0(param_1);
    iVar2 = FUN_0048ec24(iVar2);
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (-1 < (int)uVar3) {
      local_14 = uVar3 + 1;
      local_10 = 0;
      do {
        if ((local_10 == 0) || ((*(byte *)(local_8 + 0x278) & 2) != 0)) {
          cVar9 = *(short *)(local_8 + 0x272) == 0;
          if ((bool)cVar9) {
            iVar2 = FUN_00541898(local_8);
            iVar2 = FUN_0048ec24(*(int *)(iVar2 + 0x18));
            if (0 < iVar2) {
              iVar2 = FUN_00541898(local_8);
              FUN_0048f02c(*(int **)(iVar2 + 0x18),0,(undefined4 *)local_40);
              piVar5 = (int *)FUN_005417b0(local_8);
              FUN_0048f02c(piVar5,local_10,(undefined4 *)local_5c);
              cVar9 = FUN_0048d3ac(local_5c,local_40);
              if (cVar9 != '\0') {
                FUN_005418bc(local_8,(int *)&local_60);
                local_9 = FUN_0054a53c(*(int **)(*(int *)(local_8 + 0x280) + 0x214),local_60);
                goto LAB_00542bdf;
              }
            }
            cVar9 = '\x01';
            uVar12 = 1;
            piVar5 = (int *)FUN_005417b0(local_8);
            FUN_0048f02c(piVar5,local_10,(undefined4 *)local_40);
            FUN_005418bc(local_8,(int *)&local_64);
            local_9 = FUN_0054b484(*(int **)(*(int *)(local_8 + 0x280) + 0x214),local_64,
                                   (undefined4 *)local_40,(char)uVar12,'\0',cVar9,'\0');
          }
          else {
            FUN_00547a58(*(int **)(*(int *)(local_8 + 0x280) + 0x214));
            do {
              FUN_005418bc(local_8,(int *)&local_18);
              puVar1 = local_18;
              ppuVar11 = &local_1c;
              uVar4 = FUN_00549b80(*(int *)(*(int *)(local_8 + 0x280) + 0x214));
              (**(code **)(local_8 + 0x270))(*(undefined4 *)(local_8 + 0x274),uVar4,&local_20);
              iVar2 = local_20;
              FUN_005418bc(local_8,&local_24);
              uVar3 = FUN_00404030(local_24);
              FUN_00404238(iVar2,1,uVar3,(int *)ppuVar11);
              FUN_00404140(puVar1,local_1c);
              local_9 = cVar9;
              if (cVar9 != '\0') break;
              cVar9 = FUN_00547c54(*(int **)(*(int *)(local_8 + 0x280) + 0x214));
              cVar9 = cVar9 == '\0';
            } while (!(bool)cVar9);
          }
LAB_00542bdf:
          if (local_9 != '\0') {
            piVar5 = (int *)FUN_005417b0(local_8);
            FUN_0048f02c(piVar5,local_10,(undefined4 *)local_40);
            pbVar6 = local_40;
            puVar7 = (undefined4 *)(*(int *)(local_8 + 0x27c) + 0x208);
            for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar7 = *(undefined4 *)pbVar6;
              pbVar6 = pbVar6 + ((uint)bVar10 * -2 + 1) * 4;
              puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
            }
            puVar7 = (undefined4 *)(*(int *)(local_8 + 0x27c) + 0x208);
            puVar8 = (undefined4 *)(local_8 + 0x240);
            for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
              puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            }
            break;
          }
        }
        local_10 = local_10 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  *in_FS_OFFSET = uVar12;
  FUN_00403dd4((int *)&local_64,2);
  FUN_00403dd4(&local_24,4);
  return;
}

