/*
 * FUN_00530ed8 at 00530ed8
 * undefined __register FUN_00530ed8(int * param_1)
 * Address ranges: 00530ed8-005311ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00530ed8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  int **ppiVar5;
  undefined4 *puVar6;
  char *pcStack_160;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  undefined4 *local_148;
  uint *local_144;
  byte local_140 [28];
  byte local_124 [256];
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  uint local_c;
  int *local_8;
  
  puStack_14c = &stack0xfffffffc;
  local_148 = (undefined4 *)0x0;
  local_144 = (uint *)0x0;
  local_20 = 0;
  local_24 = 0;
  puStack_150 = &LAB_005311eb;
  uStack_154 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_154;
  local_8 = param_1;
  uVar1 = FUN_0040320c((int *)param_1[9],(int)&PTR_FUN_0052ec34);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_0040320c((int *)local_8[9],(int)&PTR_FUN_00531d10);
    if ((char)uVar1 == '\0') {
      FUN_00402fe0(*local_8,local_124);
      FUN_00403fd4(&local_24,local_124);
      pcStack_160 = "Parent is not a TAppObj(List)Combo2 or descendant";
      FUN_004040f0(&local_20,3);
      FUN_00403d94(local_20);
    }
  }
  iVar2 = FUN_0045ba40(local_8[0x82]);
  if (0 < iVar2) {
    uVar1 = FUN_0040320c((int *)local_8[9],(int)&PTR_FUN_0052ec34);
    if ((char)uVar1 == '\0') {
      iVar2 = FUN_00403224((int *)local_8[9],(int)&PTR_FUN_00531d10);
      iVar2 = FUN_00549b48(*(int *)(iVar2 + 0x294));
      local_18 = *(int **)(iVar2 + 0x10);
    }
    else {
      piVar3 = (int *)FUN_00403224((int *)local_8[9],(int)&PTR_FUN_0052ec34);
      iVar2 = FUN_0052f8a8(piVar3);
      local_18 = *(int **)(iVar2 + 0x10);
    }
    iVar2 = FUN_0045ba40(local_8[0x82]);
    uVar4 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_1c = uVar4 + 1;
      local_c = 0;
      do {
        if (local_8[0x86] == 0) {
          piVar3 = (int *)(*(code *)**(undefined4 **)local_8[0x82])
                                    ((undefined4 *)local_8[0x82],local_c);
          iVar2 = FUN_00403224(piVar3,(int)&PTR_FUN_004fdb04);
          FUN_00432744(iVar2,(uint *)0x0);
          piVar3 = (int *)(*(code *)**(undefined4 **)local_8[0x82])
                                    ((undefined4 *)local_8[0x82],local_c);
          iVar2 = FUN_00403224(piVar3,(int)&PTR_FUN_004fdb04);
          FUN_00403db0((int *)(iVar2 + 0x70));
        }
        else {
          uVar1 = FUN_005317b0((int)local_8);
          if ((char)uVar1 == '\0') {
            puVar6 = &local_14;
            ppiVar5 = &local_10;
            FUN_0048f02c(local_18,local_c,(undefined4 *)local_140);
            FUN_00494e38((int *)local_8[0x86],local_140,'\x01',ppiVar5,puVar6);
          }
          else {
            puVar6 = &local_14;
            ppiVar5 = &local_10;
            piVar3 = (int *)FUN_005286e0((int *)local_8[0x84]);
            iVar2 = FUN_0051e404(piVar3,local_c);
            uVar1 = FUN_0051c850(iVar2);
            iVar2 = FUN_005286e0((int *)local_8[0x84]);
            iVar2 = FUN_00527084(iVar2,uVar1);
            FUN_00494e38((int *)local_8[0x86],(byte *)(iVar2 + 0x44),'\x01',ppiVar5,puVar6);
          }
          uVar1 = FUN_00496b30(local_10);
          if ((char)uVar1 == '\0') {
            piVar3 = (int *)(*(code *)**(undefined4 **)local_8[0x82])
                                      ((undefined4 *)local_8[0x82],local_c);
            iVar2 = FUN_00403224(piVar3,(int)&PTR_FUN_004fdb04);
            FUN_00432744(iVar2,(uint *)0x0);
            piVar3 = (int *)(*(code *)**(undefined4 **)local_8[0x82])
                                      ((undefined4 *)local_8[0x82],local_c);
            iVar2 = FUN_00403224(piVar3,(int)&PTR_FUN_004fdb04);
            FUN_00403db0((int *)(iVar2 + 0x70));
          }
          else {
            piVar3 = (int *)(*(code *)**(undefined4 **)local_8[0x82])
                                      ((undefined4 *)local_8[0x82],local_c);
            iVar2 = FUN_00403224(piVar3,(int)&PTR_FUN_004fdb04);
            FUN_004966b4(local_10,&local_144);
            FUN_00432744(iVar2,local_144);
            piVar3 = (int *)(*(code *)**(undefined4 **)local_8[0x82])
                                      ((undefined4 *)local_8[0x82],local_c);
            iVar2 = FUN_00403224(piVar3,(int)&PTR_FUN_004fdb04);
            piVar3 = (int *)(iVar2 + 0x70);
            FUN_004966b4(local_10,&local_148);
            FUN_00403e04(piVar3,local_148);
          }
        }
        local_c = local_c + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  *in_FS_OFFSET = pcStack_160;
  FUN_00403dd4((int *)&local_148,2);
  FUN_00403dd4(&local_24,2);
  return;
}

