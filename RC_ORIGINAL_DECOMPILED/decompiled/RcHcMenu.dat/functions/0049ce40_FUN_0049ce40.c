/*
 * FUN_0049ce40 at 0049ce40
 * undefined __register FUN_0049ce40(int * param_1, undefined4 param_2)
 * Address ranges: 0049ce40-0049cf77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049ce40(int *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar7;
  int *extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_124 = &LAB_0049cf78;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar3 = &stack0xfffffffc;
  local_14 = param_2;
  local_8 = param_1;
  if (*(int *)(param_1[2] + 8) < 1) {
    FUN_00402fe0(*param_1,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    pcStack_138 = "No events in queue.";
    FUN_004040f0(&local_18,4);
    FUN_00403d94(local_18);
    puVar3 = puStack_120;
  }
  puStack_120 = puVar3;
  local_10 = GetTickCount();
  while (0 < *(int *)(local_8[2] + 8)) {
    piVar5 = (int *)FUN_00423498((undefined4 *)local_8[2],0);
    iVar6 = FUN_00403224(piVar5,(int)&PTR_FUN_0049c868);
    if (local_10 < *(uint *)(iVar6 + 0x30)) break;
    piVar5 = (int *)FUN_00423498((undefined4 *)local_8[2],0);
    piVar5 = (int *)FUN_00403224(piVar5,(int)&PTR_FUN_0049c868);
    uVar2 = piVar5[10];
    puVar1 = (uint *)(piVar5 + 0xc);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + uVar2;
    uVar7 = extraout_ECX;
    local_c = piVar5;
    if (CARRY4(uVar4,uVar2)) {
      thunk_FUN_00402874(uVar2);
      uVar7 = extraout_ECX_00;
      piVar5 = extraout_EDX;
    }
    if (local_10 < (uint)local_c[0xc]) {
      uVar4 = local_10 + local_c[10];
      if (CARRY4(local_10,local_c[10])) {
        uVar4 = thunk_FUN_00402874(uVar4);
        uVar7 = extraout_ECX_01;
      }
      local_c[0xc] = uVar4;
      piVar5 = local_c;
    }
    FUN_0049cd84(0,piVar5,uVar7,(int)&stack0xfffffffc);
    (**(code **)(*local_c + 0x30))(local_c,local_8);
  }
  *in_FS_OFFSET = pcStack_138;
  FUN_00403dd4(&local_1c,2);
  return;
}

