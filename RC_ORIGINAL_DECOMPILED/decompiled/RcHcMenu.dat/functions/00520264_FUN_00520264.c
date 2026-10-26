/*
 * FUN_00520264 at 00520264
 * undefined __register FUN_00520264(int * param_1)
 * Address ranges: 00520264-00520519;00520521-00520542;0052058c-005205b1;005205b9-005205eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00520264(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 *unaff_EBX;
  uint *in_FS_OFFSET;
  undefined1 uVar8;
  uint uStackY_64;
  undefined1 *puStackY_60;
  undefined1 *puStackY_5c;
  char *pcStackY_58;
  char *pcStackY_54;
  undefined4 uStackY_50;
  uint uStackY_4c;
  undefined1 *puStackY_48;
  undefined1 *puStackY_44;
  uint uStackY_40;
  char *local_3c;
  undefined1 *puVar9;
  uint local_34;
  undefined *local_30;
  uint *local_2c;
  uint local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_14 = &stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  iVar7 = 7;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_18 = &LAB_005205ec;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_1c;
  local_20 = (undefined1 *)0x52028d;
  iVar7 = FUN_0051e1b8(param_1);
  if (*(int *)(iVar7 + 0x234) != 0) {
    local_20 = (undefined1 *)0x5202a2;
    iVar7 = FUN_0051e1b8(param_1);
    local_20 = (undefined1 *)0x5202aa;
    FUN_00520c58(iVar7,(int *)&local_24);
    if (local_24 != (undefined1 *)0x0) {
      local_20 = (undefined1 *)0x5202c0;
      piVar2 = FUN_005167c0((int *)&DAT_0051670c,'\x01',extraout_ECX);
      uVar8 = 1;
      local_24 = &LAB_005205b2;
      local_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = (uint)&local_28;
      local_2c = (uint *)0x5202de;
      local_20 = &stack0xfffffffc;
      FUN_00516860((int)piVar2,(HKEY)0x80000001);
      local_2c = (uint *)0x5202e6;
      iVar7 = FUN_0051e1b8(param_1);
      local_2c = *(uint **)(iVar7 + 0x234);
      local_30 = &DAT_00520600;
      local_34 = 0x5202f9;
      iVar7 = FUN_0051e1b8(param_1);
      local_34 = 0x520301;
      FUN_00520c58(iVar7,(int *)&local_28);
      local_34 = local_28;
      FUN_004040f0((int *)&stack0xfffffff0,3);
      local_3c = (char *)0x520327;
      FUN_00404238((int)unaff_EBX,1,1,(int *)&local_2c);
      FUN_00404140(local_2c,(uint *)&DAT_00520600);
      if (!(bool)uVar8) {
        FUN_0040407c((int *)&stack0xfffffff0,(undefined4 *)&DAT_00520600,unaff_EBX);
      }
      uStack_1c = uStack_1c & 0xffffff;
      cVar1 = FUN_005168c4((int)piVar2,(int)unaff_EBX,'\0');
      if (cVar1 != '\0') {
        cVar1 = FUN_00516c48((int)piVar2,"ColumnCount");
        if (cVar1 != '\0') {
          local_18 = (undefined1 *)FUN_00516b18((int)piVar2,"ColumnCount");
          puVar3 = (undefined1 *)FUN_0051e160((int)param_1);
          if (puVar3 == local_18) {
            uStack_1c = CONCAT13(1,(undefined3)uStack_1c);
            puVar3 = local_18 + -1;
            if (SBORROW4((int)local_18,1)) {
              puVar3 = (undefined1 *)thunk_FUN_00402874((uint)puVar3);
            }
            if (-1 < (int)puVar3) {
              local_20 = puVar3 + 1;
              local_14 = (undefined1 *)0x0;
              do {
                local_3c = "\\Column";
                uStackY_40 = 0x5203c4;
                FUN_00409bd8(local_14,(int *)&local_34);
                puStackY_44 = (undefined1 *)0x5203d4;
                FUN_004040f0((int *)&local_30,3);
                puStackY_44 = (undefined1 *)0x5203e1;
                cVar1 = FUN_005168c4((int)piVar2,(int)local_30,'\0');
                if (cVar1 == '\0') {
                  uStack_1c = uStack_1c & 0xffffff;
                }
                else {
                  puStackY_44 = (undefined1 *)0x5203f0;
                  puVar4 = (undefined4 *)FUN_0051e184((int)param_1,local_14);
                  puStackY_44 = (undefined1 *)0x5203fa;
                  (**(code **)*puVar4)(puVar4,piVar2,(int)&uStack_1c + 3);
                  FUN_00516830((int)piVar2);
                }
                local_14 = local_14 + 1;
                local_20 = local_20 + -1;
              } while (local_20 != (undefined1 *)0x0);
            }
          }
        }
        FUN_00516830((int)piVar2);
      }
      if (uStack_1c._3_1_ != '\0') {
        FUN_005200dc((uint)param_1);
        iVar7 = FUN_0051e1b8(param_1);
        uStack_1c._0_3_ = CONCAT12(*(undefined1 *)(iVar7 + 0x270),(undefined2)uStack_1c);
        piVar5 = (int *)FUN_0051e1b8(param_1);
        (**(code **)(*piVar5 + 0xe0))(piVar5,0);
        local_3c = &LAB_00520585;
        uStackY_40 = *in_FS_OFFSET;
        *in_FS_OFFSET = (uint)&uStackY_40;
        puStackY_44 = (undefined1 *)0x520468;
        FUN_005168c4((int)piVar2,(int)unaff_EBX,'\0');
        puStackY_48 = &LAB_00520543;
        uStackY_4c = *in_FS_OFFSET;
        *in_FS_OFFSET = (uint)&uStackY_4c;
        uStackY_50 = 0x520483;
        puStackY_44 = &stack0xfffffffc;
        local_18 = (undefined1 *)FUN_00516b18((int)piVar2,"ColumnCount");
        uVar6 = (int)local_18 - 1;
        if (SBORROW4((int)local_18,1)) {
          uStackY_50 = 0x520493;
          uVar6 = thunk_FUN_00402874(uVar6);
        }
        if (-1 < (int)uVar6) {
          local_20 = (undefined1 *)(uVar6 + 1);
          local_14 = (undefined1 *)0x0;
          do {
            uStackY_50 = 0x5204ae;
            iVar7 = FUN_0051e160((int)param_1);
            if ((int)local_14 < iVar7) {
              pcStackY_54 = "\\Column";
              pcStackY_58 = (char *)0x5204c6;
              FUN_00409bd8(local_14,(int *)&local_3c);
              pcStackY_58 = local_3c;
              puStackY_5c = (undefined1 *)0x5204d6;
              FUN_004040f0((int *)&stack0xffffffc8,3);
              puStackY_5c = (undefined1 *)0x5204e3;
              FUN_005168c4((int)piVar2,(int)puVar9,'\0');
              puStackY_60 = &LAB_0052051a;
              uStackY_64 = *in_FS_OFFSET;
              *in_FS_OFFSET = (uint)&uStackY_64;
              puStackY_5c = &stack0xfffffffc;
              piVar5 = (int *)FUN_0051e184((int)param_1,local_14);
              (**(code **)(*piVar5 + 4))(piVar5,piVar2);
              *in_FS_OFFSET = uStackY_64;
              puStackY_5c = (undefined1 *)0x520521;
              puStackY_60 = (undefined1 *)0x520519;
              FUN_00516830((int)piVar2);
              return;
            }
            local_14 = local_14 + 1;
            local_20 = local_20 + -1;
          } while (local_20 != (undefined1 *)0x0);
        }
        *in_FS_OFFSET = uStackY_4c;
        puStackY_44 = &LAB_0052054a;
        puStackY_48 = (undefined1 *)0x520542;
        FUN_00516830((int)piVar2);
        return;
      }
      piVar5 = (int *)FUN_0051e1b8(param_1);
      (**(code **)(*piVar5 + 0xe4))();
      *in_FS_OFFSET = local_34;
      local_2c = (uint *)0x5205c9;
      local_30 = (undefined *)0x5205b1;
      FUN_00403094(piVar2);
      return;
    }
  }
  local_20 = (undefined1 *)0x5205c1;
  piVar2 = (int *)FUN_0051e1b8(param_1);
  local_20 = (undefined1 *)0x5205c9;
  (**(code **)(*piVar2 + 0xe4))();
  *in_FS_OFFSET = uStack_1c;
  local_14 = &LAB_005205f3;
  local_18 = (undefined1 *)0x5205e3;
  FUN_00403dd4((int *)&local_3c,7);
  local_18 = (undefined1 *)0x5205eb;
  FUN_00403db0((int *)&stack0xfffffff0);
  return;
}

