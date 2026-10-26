/*
 * FUN_0052766c at 0052766c
 * undefined __register FUN_0052766c(int * param_1, int param_2)
 * Address ranges: 0052766c-00527924
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052766c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  byte bVar9;
  char *pcStack_280;
  undefined4 uStack_274;
  undefined1 *puStack_270;
  undefined1 *puStack_26c;
  int local_260;
  int local_25c;
  byte local_258 [256];
  byte local_158 [256];
  int local_58;
  int local_54;
  byte local_50 [28];
  byte local_34 [28];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  bVar9 = 0;
  puStack_26c = &stack0xfffffffc;
  local_25c = 0;
  local_260 = 0;
  local_54 = 0;
  local_58 = 0;
  puStack_270 = &LAB_00527925;
  uStack_274 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_274;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 0) {
    FUN_00402fe0(*param_1,local_158);
    FUN_00403fd4(&local_58,local_158);
    pcStack_280 = " Parameter cannot be nil";
    FUN_004040f0(&local_54,3);
    FUN_00403d94(local_54);
    puVar1 = puStack_26c;
  }
  puStack_26c = puVar1;
  FUN_00402fe0(**(int **)(local_c + 4),local_158);
  FUN_00402fe0(*(int *)local_8[0xa0],local_258);
  bVar8 = local_158[0] + 1 == 0;
  FUN_00402c8c((int *)local_158,(int *)local_258,local_158[0] + 1);
  if (!bVar8) {
    FUN_00402fe0(*local_8,local_158);
    FUN_00403fd4(&local_260,local_158);
    FUN_004040f0(&local_25c,3);
    FUN_00403d94(local_25c);
  }
  (**(code **)(**(int **)(local_c + 0x10) + 4))();
  (**(code **)(**(int **)(local_c + 0x14) + 4))();
  (**(code **)(**(int **)(local_c + 0x18) + 4))();
  *(byte *)(local_c + 8) = *(byte *)(local_c + 8) | 0x10;
  iVar3 = FUN_0051e160((int)local_8);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_18 = uVar4 + 1;
    local_10 = 0;
    do {
      iVar3 = FUN_00527084((int)local_8,local_10);
      if (*(char *)(iVar3 + 0x30) != '\0') {
        iVar3 = FUN_00527084((int)local_8,local_10);
        (**(code **)(**(int **)(local_c + 0x10) + 0xc))(*(int **)(local_c + 0x10),iVar3 + 0x44);
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar3 = FUN_00527214(local_8);
  (**(code **)(**(int **)(local_c + 0x14) + 8))
            (*(int **)(local_c + 0x14),*(undefined4 *)(iVar3 + 0x2a4));
  iVar3 = FUN_0045ba40(local_8[0x9e]);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_18 = uVar4 + 1;
    local_10 = 0;
    do {
      piVar5 = (int *)(*(code *)**(undefined4 **)local_8[0x9e])
                                ((undefined4 *)local_8[0x9e],local_10);
      local_14 = FUN_00403224(piVar5,(int)&PTR_FUN_00525a70);
      puVar6 = (undefined4 *)(local_14 + 0x44);
      pbVar7 = local_50;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pbVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        pbVar7 = pbVar7 + ((uint)bVar9 * -2 + 1) * 4;
      }
      (**(code **)(**(int **)(local_c + 0x18) + 0xc))(*(int **)(local_c + 0x18),local_50);
      FUN_0048f7bc(*(int **)(local_c + 0x18),local_50,*(char *)(local_14 + 0x24) == '\x01');
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FUN_00492408((int *)local_8[0xa0],local_34);
  cVar2 = FUN_0048ef44(*(int **)(local_c + 0x18),local_34);
  if (cVar2 == '\0') {
    (**(code **)(**(int **)(local_c + 0x18) + 0xc))(*(int **)(local_c + 0x18),local_34);
  }
  cVar2 = FUN_0048ef44(*(int **)(local_c + 0x14),local_34);
  if (cVar2 == '\0') {
    (**(code **)(**(int **)(local_c + 0x14) + 0xc))(*(int **)(local_c + 0x14),local_34);
  }
  *in_FS_OFFSET = pcStack_280;
  FUN_00403dd4(&local_260,2);
  FUN_00403dd4(&local_58,2);
  return;
}

