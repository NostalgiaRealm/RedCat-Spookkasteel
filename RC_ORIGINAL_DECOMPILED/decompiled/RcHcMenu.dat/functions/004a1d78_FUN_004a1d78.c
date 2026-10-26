/*
 * FUN_004a1d78 at 004a1d78
 * undefined4 __register FUN_004a1d78(int * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 004a1d78-004a1f0b;004a1f13-004a1f19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004a1df5) */

undefined4 FUN_004a1d78(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined1 *puVar7;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puStack_2c = (undefined1 *)0x4a1d9f;
  local_10 = param_2;
  local_c = param_1;
  local_24 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
  puStack_30 = &LAB_004a1f0c;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  uVar1 = (**(code **)(*local_c + 0x2c))();
  (**(code **)(*local_24 + 0x40))(local_24,uVar1);
  uVar1 = (**(code **)(*local_c + 0x20))();
  (**(code **)(*local_24 + 0x34))(local_24,uVar1);
  piVar5 = local_c;
  piVar2 = (int *)FUN_00421490(local_24);
  FUN_0041c8d0(piVar2,0,0,piVar5);
  local_20 = local_10 & 0xffffff;
  iVar3 = (**(code **)(*local_24 + 0x20))();
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_28 = uVar4 + 1;
    local_1c = 0;
    do {
      local_18 = 0;
LAB_004a1ed9:
      iVar3 = (**(code **)(*local_24 + 0x2c))();
      if ((int)local_18 < iVar3) {
        piVar5 = (int *)FUN_00421490(local_24);
        uVar4 = FUN_0041ced4(piVar5,local_18,local_1c);
        uVar4 = uVar4 & 0xffffff;
        if (uVar4 == local_20) {
          do {
            bVar6 = SCARRY4(local_18,1);
            local_18 = local_18 + 1;
            if (bVar6) {
              thunk_FUN_00402874(uVar4);
            }
            iVar3 = (**(code **)(*local_24 + 0x2c))();
            if (iVar3 <= (int)local_18) break;
            piVar5 = (int *)FUN_00421490(local_24);
            uVar4 = FUN_0041ced4(piVar5,local_18,local_1c);
            uVar4 = uVar4 & 0xffffff;
          } while (uVar4 == local_20);
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
            iVar3 = (**(code **)(*local_24 + 0x2c))();
            if (iVar3 <= (int)local_18) break;
            piVar5 = (int *)FUN_00421490(local_24);
            uVar4 = FUN_0041ced4(piVar5,local_18,local_1c);
            uVar4 = uVar4 & 0xffffff;
          } while (uVar4 != local_20);
          uVar4 = local_1c + 1;
          puVar7 = &stack0xfffffffc;
          if (SCARRY4(local_1c,1)) {
            puVar7 = &stack0xfffffffc;
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          FUN_004a1d14(local_14,local_1c,local_18,uVar4,(int)puVar7);
        }
        goto LAB_004a1ed9;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = (undefined1 *)0x4a1f13;
  puStack_30 = (undefined1 *)0x4a1f0b;
  uVar1 = FUN_00403094(local_24);
  return uVar1;
}

