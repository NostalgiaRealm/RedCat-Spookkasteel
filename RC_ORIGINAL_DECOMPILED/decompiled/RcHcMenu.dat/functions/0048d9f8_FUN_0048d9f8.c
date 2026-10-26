/*
 * FUN_0048d9f8 at 0048d9f8
 * undefined __register FUN_0048d9f8(int param_1, uint * param_2)
 * Address ranges: 0048d9f8-0048daaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048d9f8(int param_1,uint *param_2)

{
  short sVar1;
  int *piVar2;
  uint *puVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 uVar6;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  bool bVar8;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_18;
  int local_14;
  short local_e;
  uint *local_c;
  int local_8;
  
  local_18 = (uint *)0x0;
  puStack_1c = (undefined1 *)0x48da11;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_20 = &LAB_0048daab;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_e = -1;
  uVar7 = true;
  local_14 = 0;
  uVar5 = extraout_ECX;
  uVar6 = extraout_EDX;
  puStack_1c = &stack0xfffffffc;
  do {
    piVar2 = (int *)FUN_00491d54(local_8,uVar6,uVar5);
    sVar1 = FUN_0045db38(piVar2,local_14);
    FUN_00491818(local_8,(int)sVar1,(int *)&local_18);
    puVar3 = FUN_00404140(local_18,local_c);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
    if ((bool)uVar7) {
      piVar2 = (int *)FUN_00491d54(local_8,extraout_EDX_00,extraout_ECX_00);
      local_e = FUN_0045db38(piVar2,local_14);
      puVar3 = (uint *)CONCAT22(extraout_var,local_e);
      uVar5 = extraout_ECX_01;
      uVar6 = extraout_EDX_01;
    }
    bVar8 = SCARRY4(local_14,1);
    local_14 = local_14 + 1;
    if (bVar8) {
      thunk_FUN_00402874((uint)puVar3);
      uVar5 = extraout_ECX_02;
      uVar6 = extraout_EDX_02;
    }
    if (local_e != -1) break;
    iVar4 = FUN_00491d54(local_8,uVar6,uVar5);
    iVar4 = FUN_0045da14(iVar4);
    uVar7 = iVar4 == local_14;
    uVar5 = extraout_ECX_03;
    uVar6 = extraout_EDX_03;
  } while (!(bool)uVar7 && local_14 <= iVar4);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0048dab2;
  puStack_20 = (undefined1 *)0x48daa2;
  FUN_00403db0((int *)&local_18);
  puStack_20 = (undefined1 *)0x48daaa;
  FUN_00403db0((int *)&local_c);
  return;
}

