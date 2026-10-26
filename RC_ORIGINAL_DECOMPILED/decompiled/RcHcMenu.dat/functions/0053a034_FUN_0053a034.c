/*
 * FUN_0053a034 at 0053a034
 * undefined __register FUN_0053a034(int * param_1)
 * Address ranges: 0053a034-0053a1b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053a034(int *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *in_FS_OFFSET;
  byte bVar8;
  bool bVar9;
  uint uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  byte local_130 [256];
  int local_30;
  int local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  bVar8 = 0;
  puStack_140 = &stack0xfffffffc;
  local_2c = 0;
  local_30 = 0;
  puStack_144 = &LAB_0053a1b1;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_148;
  cVar1 = (char)param_1[0xb6];
  local_8 = param_1;
  if (cVar1 == '\x01') {
    iVar5 = FUN_00538860(param_1);
    piVar2 = (int *)FUN_00538860(local_8);
    FUN_00524ec4(piVar2,(int *)(iVar5 + 0x214),&local_18);
  }
  else if (cVar1 == '\x02') {
    puStack_140 = &stack0xfffffffc;
    iVar5 = FUN_00538860(param_1);
    piVar2 = (int *)FUN_00538860(local_8);
    FUN_00524ec4(piVar2,(int *)(iVar5 + 0x214),&local_18);
  }
  else if (cVar1 == '\x03') {
    puStack_140 = &stack0xfffffffc;
    piVar2 = (int *)FUN_00538fbc(param_1);
    iVar5 = FUN_00537720(piVar2);
    piVar2 = (int *)(iVar5 + 0x14);
    piVar7 = &local_18;
    for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = *piVar2;
      piVar2 = piVar2 + (uint)bVar8 * -2 + 1;
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    piVar2 = (int *)FUN_00538fbc(local_8);
    FUN_0053786c(piVar2,(uint)local_28);
    local_14 = local_24;
    piVar2 = (int *)FUN_00538fbc(local_8);
    FUN_0053786c(piVar2,(uint)local_28);
    local_c = local_1c;
    if (((char)local_8[0x8b] != '\0') &&
       (bVar9 = SBORROW4(local_10,1), local_10 = local_10 + -1, bVar9)) {
      thunk_FUN_00402874((uint)local_8);
    }
  }
  else {
    puStack_140 = &stack0xfffffffc;
    FUN_00402fe0(*param_1,local_130);
    FUN_00403fd4(&local_30,local_130);
    FUN_004040f0(&local_2c,3);
    FUN_00403d94(local_2c);
  }
  uVar3 = local_10 - local_18;
  if (SBORROW4(local_10,local_18)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  uVar4 = local_c - local_14;
  if (SBORROW4(local_c,local_14)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  iVar5 = FUN_0053881c(local_8);
  (**(code **)(**(int **)(iVar5 + 0x68) + 0x7c))
            (*(int **)(iVar5 + 0x68),local_18,local_14,uVar4,uVar3);
  *in_FS_OFFSET = uVar4;
  FUN_00403dd4(&local_30,2);
  return;
}

