/*
 * FUN_0054ccdc at 0054ccdc
 * undefined __register FUN_0054ccdc(int * param_1, char param_2)
 * Address ranges: 0054ccdc-0054d0eb;0054d0f3-0054d146;0054d14e-0054d178
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054ccdc(int *param_1,char param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar10;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  bool bVar11;
  undefined4 *local_178;
  int local_174;
  uint *local_170;
  int local_16c;
  uint *local_168;
  undefined4 *local_164;
  undefined4 *local_160;
  undefined4 *local_15c;
  byte local_158 [256];
  undefined4 *local_58;
  code *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  uint *local_48;
  code *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int *piVar15;
  char *pcVar16;
  char *pcVar17;
  int *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  char local_9;
  int *local_8;
  
  local_14 = &stack0xfffffffc;
  local_10 = 0x2e;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_18 = &LAB_0054d179;
  local_1c = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_9 = param_2;
  local_8 = param_1;
  if (0 < *(int *)(param_1[199] + 8)) {
    iVar4 = *(int *)(param_1[199] + 8);
    iVar10 = iVar4 + -1;
    puVar2 = &stack0xfffffffc;
    if (SBORROW4(iVar4,1)) {
      thunk_FUN_00402874(param_1[199]);
      iVar10 = extraout_EDX;
      puVar2 = local_14;
    }
    local_14 = puVar2;
    iVar4 = FUN_004b0b9c((undefined4 *)local_8[199],iVar10);
    if (iVar4 != -1) {
      local_1c = (int *)0x0;
      *in_FS_OFFSET = &stack0xffffffd8;
      FUN_0054cbd4((int)local_8);
      local_1c = (int *)FUN_00493178((int *)&PTR_FUN_004d7420,'\x01');
      piVar5 = (int *)FUN_00493178((int *)&PTR_FUN_004d787c,'\x01');
      local_18 = (undefined1 *)0x0;
      uVar6 = *(int *)(local_8[199] + 8) - 1;
      if (SBORROW4(*(int *)(local_8[199] + 8),1)) {
        uVar6 = thunk_FUN_00402874(uVar6);
      }
      while( true ) {
        local_10 = uVar6;
        uVar7 = FUN_004b0b9c((undefined4 *)local_8[199],local_10);
        FUN_0048bcbc((int *)local_1c[8],uVar7);
        piVar8 = local_1c;
        uVar6 = FUN_004d302c((int *)local_8[0xc9],&stack0xffffffcc,0,local_1c);
        if ((char)uVar6 != '\0') break;
        bVar11 = SBORROW4(local_10,1);
        local_10 = local_10 - 1;
        if (bVar11) {
          thunk_FUN_00402874(uVar6);
        }
        if (local_9 == '\0') {
          local_10 = 0xffffffff;
        }
        if (((int)local_10 < 0) || (uVar6 = local_10, local_18 == (undefined1 *)0xf)) {
          FUN_004e2294((int *)local_8[0xc6]);
          *in_FS_OFFSET = piVar8;
          FUN_00403094(piVar5);
          FUN_00403094(local_1c);
          return;
        }
      }
      local_14 = (undefined1 *)(**(code **)(*(int *)local_1c[7] + 0x70))();
      *in_FS_OFFSET = &stack0xffffffc8;
      cVar3 = '\x01';
      iVar4 = FUN_004d7934(*piVar5,extraout_EDX_00,extraout_ECX);
      piVar8 = FUN_004b5b0c((int *)&DAT_004b28a0,'\x01',3,iVar4,cVar3);
      local_4c = (undefined4 *)piVar5[8];
      local_48 = (uint *)CONCAT31(local_48._1_3_,7);
      pcVar13 = *(char **)PTR_DAT_0057260c;
      FUN_004b5ce8(piVar8,&local_4c,2);
      piVar5 = (int *)FUN_004d7934(*piVar5,extraout_EDX_01,extraout_ECX_00);
      uVar7 = FUN_0049278c(piVar5);
      piVar5 = FUN_005471e0((int *)&LAB_0053b55c,'\x01',uVar7);
      FUN_00549bfc((int)piVar5,local_8[0xc9]);
      FUN_0054a14c(piVar5,piVar8);
      FUN_00549a28(piVar5);
      if ((char)piVar5[6] == '\0') {
        pcVar16 = ".AddLinksFromContextList: ";
        FUN_00406a48(&PTR_DAT_0054c240,(int *)&local_50);
        puVar14 = local_50;
        FUN_00406a48(&PTR_DAT_0054c240,(int *)&local_54);
        local_48 = (uint *)0x54cee5;
        pcVar13 = (char *)local_54;
        FUN_00402fe0(*local_8,local_158);
        local_48 = (uint *)0x54cef3;
        FUN_00403fd4((int *)&local_58,local_158);
        local_48 = (uint *)0x54cf02;
        uVar7 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_58,(undefined4 *)pcVar13,puVar14,
                             (undefined4 *)pcVar16);
        local_48 = (uint *)0x54cf07;
        FUN_0040382c(uVar7);
      }
      local_48 = (uint *)0x54cf0f;
      cVar3 = FUN_00547a58(piVar5);
      while (cVar3 != '\0') {
        local_48 = (uint *)0x54cf1f;
        piVar9 = (int *)FUN_00549b80((int)piVar5);
        local_48 = (uint *)0x54cf2a;
        piVar9 = (int *)FUN_00403224(piVar9,(int)&PTR_FUN_004d787c);
        local_48 = (uint *)0x54cf38;
        uVar7 = FUN_00496b30((int *)piVar9[10]);
        if ((char)uVar7 == '\0') {
          local_48 = (uint *)0x54d18c;
          local_4c = (undefined4 *)0x54cf51;
          FUN_00406a48(&PTR_DAT_0054c240,(int *)&local_15c);
          local_4c = local_15c;
          local_50 = (undefined4 *)0x54cf68;
          FUN_00406a48(&PTR_DAT_0054c240,(int *)&local_160);
          local_54 = (code *)0x54cf7f;
          puVar14 = local_160;
          FUN_00402fe0(*piVar9,local_158);
          local_54 = (code *)0x54cf90;
          FUN_00403fd4((int *)&local_164,local_158);
          local_54 = (code *)0x54cfa2;
          uVar7 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_164,puVar14,local_4c,local_48);
          local_54 = (code *)0x54cfa7;
          FUN_0040382c(uVar7);
        }
        uVar7 = FUN_004d7d54((int)piVar9);
        if ((byte)uVar7 < 5) {
          uVar7 = FUN_004d7d54((int)piVar9);
          cVar3 = (char)uVar7;
          pcVar12 = FUN_0054c810;
          local_48 = (uint *)0x54cfdd;
          piVar15 = local_8;
          (**(code **)(*(int *)piVar9[9] + 0x6c))((int *)piVar9[9],&local_16c);
          local_48 = (uint *)0x54cfee;
          FUN_00409974(local_16c,(int *)&local_168);
          local_48 = local_168;
          local_4c = (undefined4 *)0x54d000;
          iVar4 = (**(code **)(*(int *)piVar9[7] + 0x70))();
          puVar1 = local_48;
          local_48 = (uint *)0x54d011;
          uVar6 = FUN_004e1cd4((int *)local_8[0xc6],puVar1,iVar4,(int)pcVar12,(int)piVar15,cVar3);
          bVar11 = SCARRY4((int)local_18,1);
          local_18 = (undefined1 *)((int)local_18 + 1);
          pcVar13 = (char *)pcVar12;
          if (bVar11) {
            local_48 = (uint *)0x54d01c;
            thunk_FUN_00402874(uVar6);
            pcVar13 = (char *)pcVar12;
          }
        }
        else if ((byte)uVar7 == 5) {
          piVar9 = (int *)FUN_00549b80((int)piVar5);
          iVar4 = FUN_00403224(piVar9,(int)&PTR_FUN_004d787c);
          (**(code **)(**(int **)(iVar4 + 0x24) + 0x6c))(*(int **)(iVar4 + 0x24),&local_174);
          local_48 = (uint *)0x54d053;
          FUN_00409974(local_174,(int *)&local_170);
          local_48 = (uint *)0x54d067;
          FUN_004e1b0c((int *)local_8[0xc6],local_170);
        }
        else {
          pcVar17 = ".AddLinksFromContextList: ";
          pcVar16 = " Unhandled case-part";
          pcVar13 = " Unhandled case-part";
          local_48 = (uint *)0x54d088;
          FUN_00402fe0(*piVar9,local_158);
          local_48 = (uint *)0x54d099;
          FUN_00403fd4((int *)&local_178,local_158);
          local_48 = (uint *)0x54d0ab;
          uVar7 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_178,(undefined4 *)pcVar13,
                               (undefined4 *)pcVar16,(undefined4 *)pcVar17);
          local_48 = (uint *)0x54d0b0;
          FUN_0040382c(uVar7);
        }
        if (local_18 == (undefined1 *)0xf) break;
        local_48 = (uint *)0x54d0be;
        cVar3 = FUN_00547c54(piVar5);
      }
      local_48 = (uint *)0x54d0ce;
      FUN_00549a9c(piVar5);
      *in_FS_OFFSET = pcVar13;
      FUN_00403094(piVar5);
      FUN_00403094(piVar8);
      return;
    }
  }
  *in_FS_OFFSET = local_1c;
  local_14 = &LAB_0054d180;
  local_18 = (undefined1 *)0x54d16b;
  FUN_00403dd4((int *)&local_178,8);
  local_18 = (undefined1 *)0x54d178;
  FUN_00403dd4((int *)&local_58,3);
  return;
}

