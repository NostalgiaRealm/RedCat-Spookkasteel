/*
 * FUN_00454934 at 00454934
 * undefined __register FUN_00454934(int param_1)
 * Address ranges: 00454934-00454a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00454934(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_14;
  
  piVar3 = *(int **)(param_1 + 0x120);
  FUN_0041ce78((int)piVar3);
  FUN_0041ce84((int)piVar3);
  uVar4 = FUN_0041c138(piVar3[4]);
  local_14 = (int)uVar4 >> 1;
  if (local_14 < 0) {
    local_14 = local_14 + (uint)((uVar4 & 1) != 0);
  }
  iVar5 = FUN_0041c138(piVar3[4]);
  iVar5 = *(int *)(param_1 + 0x38) - iVar5;
  iVar6 = FUN_0041c138(piVar3[4]);
  iVar6 = *(int *)(param_1 + 0x3c) - iVar6;
  iVar7 = FUN_0041c138(piVar3[4]);
  iVar9 = iVar6 + 1;
  iVar8 = iVar5 + 1;
  if (iVar7 == 0) {
    iVar9 = iVar6;
    iVar8 = iVar5;
  }
  iVar5 = iVar9;
  if (iVar8 < iVar9) {
    iVar5 = iVar8;
  }
  cVar1 = *(char *)(param_1 + 0x130);
  if (((cVar1 == '\x01') || (cVar1 == '\x03')) || (local_18 = local_14, cVar1 == '\x05')) {
    local_18 = iVar8 - iVar5 >> 1;
    if (local_18 < 0) {
      local_18 = local_18 + (uint)((iVar8 - iVar5 & 1U) != 0);
    }
    local_18 = local_14 + local_18;
    iVar8 = iVar9 - iVar5 >> 1;
    if (iVar8 < 0) {
      iVar8 = iVar8 + (uint)((iVar9 - iVar5 & 1U) != 0);
    }
    local_14 = local_14 + iVar8;
    iVar9 = iVar5;
    iVar8 = iVar5;
  }
  bVar2 = *(byte *)(param_1 + 0x130);
  if (bVar2 < 2) {
    FUN_0041cb34(piVar3,local_18,local_14,iVar9 + local_14,iVar8 + local_18);
  }
  else if ((byte)(bVar2 - 2) < 2) {
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    FUN_0041cb7c(piVar3,local_18,local_14,iVar5 >> 2,iVar5 >> 2,iVar9 + local_14,iVar8 + local_18);
  }
  else if ((byte)(bVar2 - 4) < 2) {
    FUN_0041c9b0(piVar3,local_18,local_14,iVar9 + local_14,iVar8 + local_18);
  }
  return;
}

