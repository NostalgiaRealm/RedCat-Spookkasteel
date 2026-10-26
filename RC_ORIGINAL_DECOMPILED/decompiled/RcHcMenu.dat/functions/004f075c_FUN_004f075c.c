/*
 * FUN_004f075c at 004f075c
 * undefined __register FUN_004f075c(int * param_1, int * param_2, char param_3)
 * Address ranges: 004f075c-004f0877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f075c(int *param_1,int *param_2,char param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18;
  uint local_14;
  char local_d;
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_004f0878;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00403d94("Assertion failure");
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  uVar2 = FUN_0040320c(local_c,(int)&PTR_FUN_0042ebec);
  if (((char)uVar2 != '\0') && (FUN_00403270(local_c,local_8,extraout_ECX), local_d == '\x01')) {
    local_14 = local_8[2] - 1;
    if (SBORROW4(local_8[2],1)) {
      local_14 = thunk_FUN_00402874(local_14);
    }
    while (-1 < (int)local_14) {
      iVar3 = FUN_004f0738(local_8,local_14);
      piVar4 = *(int **)(iVar3 + 0x24);
      if (piVar4 != local_c) {
        piVar4 = (int *)FUN_00412224(local_8,local_14);
      }
      bVar8 = SBORROW4(local_14,1);
      local_14 = local_14 - 1;
      if (bVar8) {
        thunk_FUN_00402874((uint)piVar4);
      }
    }
  }
  uVar5 = local_8[2] - 1;
  if (SBORROW4(local_8[2],1)) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  while (local_14 = uVar5, -1 < (int)local_14) {
    piVar4 = (int *)FUN_004f0738(local_8,local_14);
    piVar6 = FUN_00406aa0(&local_18);
    uVar7 = FUN_00403128(piVar4,(int *)&DAT_004f08c8,piVar6);
    if ((char)uVar7 == '\0') {
      uVar7 = FUN_00412224(local_8,local_14);
    }
    bVar8 = SBORROW4(local_14,1);
    local_14 = local_14 - 1;
    uVar5 = local_14;
    if (bVar8) {
      thunk_FUN_00402874(uVar7);
      uVar5 = local_14;
    }
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004f087f;
  puStack_24 = (undefined1 *)0x4f0877;
  FUN_00406aa0(&local_18);
  return;
}

