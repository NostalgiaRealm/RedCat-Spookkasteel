/*
 * FUN_004af2ac at 004af2ac
 * undefined __register FUN_004af2ac(int * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 004af2ac-004af42c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004af2ac(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined1 *puVar7;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  undefined4 local_8;
  
  local_10 = param_2;
  local_c = param_1;
  if (param_1 == (int *)0x0) {
    puStack_28 = (undefined1 *)0x4af2d2;
    FUN_00403d94("Assertion failure");
    param_3 = extraout_ECX;
  }
  local_8 = 0;
  puStack_28 = (undefined1 *)0x4af2e3;
  local_20 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
  puStack_2c = &LAB_004af42d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  uVar1 = (**(code **)(*local_c + 0x2c))();
  (**(code **)(*local_20 + 0x40))(local_20,uVar1);
  uVar1 = (**(code **)(*local_c + 0x20))();
  (**(code **)(*local_20 + 0x34))(local_20,uVar1);
  piVar5 = local_c;
  piVar2 = (int *)FUN_00421490(local_20);
  FUN_0041c8d0(piVar2,0,0,piVar5);
  iVar3 = (**(code **)(*local_20 + 0x20))();
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_24 = uVar4 + 1;
    local_1c = 0;
    do {
      local_18 = 0;
LAB_004af3fa:
      iVar3 = (**(code **)(*local_20 + 0x2c))();
      if ((int)local_18 < iVar3) {
        piVar5 = (int *)FUN_00421490(local_20);
        uVar4 = FUN_0041ced4(piVar5,local_18,local_1c);
        if (uVar4 == local_10) {
          do {
            bVar6 = SCARRY4(local_18,1);
            local_18 = local_18 + 1;
            if (bVar6) {
              thunk_FUN_00402874(uVar4);
            }
            iVar3 = (**(code **)(*local_20 + 0x2c))();
            if (iVar3 <= (int)local_18) break;
            piVar5 = (int *)FUN_00421490(local_20);
            uVar4 = FUN_0041ced4(piVar5,local_18,local_1c);
          } while (uVar4 == local_10);
        }
        else {
          local_14 = local_18;
          uVar4 = local_18;
          do {
            bVar6 = SCARRY4(local_18,1);
            local_18 = local_18 + 1;
            if (bVar6) {
              thunk_FUN_00402874(uVar4);
            }
            iVar3 = (**(code **)(*local_20 + 0x2c))();
            if (iVar3 <= (int)local_18) break;
            piVar5 = (int *)FUN_00421490(local_20);
            uVar4 = FUN_0041ced4(piVar5,local_18,local_1c);
          } while (uVar4 != local_10);
          uVar4 = local_1c + 1;
          puVar7 = &stack0xfffffffc;
          if (SCARRY4(local_1c,1)) {
            puVar7 = &stack0xfffffffc;
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          FUN_004af248(local_14,local_1c,local_18,uVar4,(int)puVar7);
        }
        goto LAB_004af3fa;
      }
      local_1c = local_1c + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004af434;
  puStack_2c = (undefined1 *)0x4af42c;
  FUN_00403094(local_20);
  return;
}

