/*
 * FUN_00537ba0 at 00537ba0
 * undefined __register FUN_00537ba0(int * param_1)
 * Address ranges: 00537ba0-00537e32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00537ba0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  LONG *pLVar6;
  LONG *pLVar7;
  byte bVar8;
  char *pcVar9;
  byte bVar10;
  char cVar11;
  RECT local_54;
  LONG local_44;
  int local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c [3];
  uint local_10;
  byte local_9;
  int *local_8;
  
  bVar8 = 0;
  local_8 = param_1;
  iVar1 = FUN_00537750(param_1);
  if (*(char *)(iVar1 + 0x2d1) != '\0') {
    iVar1 = FUN_00537750(local_8);
    FUN_0041c318(*(int **)(local_8[0x7c] + 0x14),*(undefined4 *)(iVar1 + 0x60));
    FUN_0053786c(local_8,(uint)&local_54);
    FUN_0041c9f8((int *)local_8[0x7c],&local_54);
    local_9 = 4;
    iVar1 = FUN_00537750(local_8);
    local_34 = *(undefined4 *)(iVar1 + 0x210);
    iVar1 = FUN_00537750(local_8);
    local_30 = *(undefined4 *)(iVar1 + 0x214);
    iVar1 = FUN_00537750(local_8);
    local_2c = *(undefined4 *)(iVar1 + 0x218);
    iVar1 = FUN_00537750(local_8);
    local_28 = *(undefined4 *)(iVar1 + 0x21c);
    iVar1 = FUN_00537750(local_8);
    local_24 = *(undefined4 *)(iVar1 + 0x220);
    bVar10 = local_9;
    FUN_005378cc(local_8,(int)&local_54);
    FUN_004ab470((int *)local_8[0x7c],&local_54.left,(int)&local_34,bVar10);
  }
  piVar2 = (int *)FUN_00537750(local_8);
  iVar1 = FUN_00538e94(piVar2);
  uVar3 = FUN_0051e5f0(iVar1);
  uVar4 = uVar3 - 1;
  if (SBORROW4(uVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_20 = uVar4 + 1;
    local_10 = 0;
    do {
      piVar2 = (int *)FUN_00537750(local_8);
      piVar2 = (int *)FUN_00538e94(piVar2);
      local_1c[2] = FUN_005375c0(piVar2,local_10);
      pLVar6 = (LONG *)(local_1c[2] + 0x14);
      pLVar7 = &local_44;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pLVar7 = *pLVar6;
        pLVar6 = pLVar6 + (uint)bVar8 * -2 + 1;
        pLVar7 = pLVar7 + (uint)bVar8 * -2 + 1;
      }
      FUN_0053786c(local_8,(uint)&local_54);
      local_40 = local_54.top;
      FUN_0053786c(local_8,(uint)&local_54);
      local_38 = local_54.bottom;
      iVar1 = FUN_00537750(local_8);
      if (*(char *)(iVar1 + 0x22c) != '\0') {
        iVar1 = FUN_00537750(local_8);
        FUN_0041c034(*(int **)(local_8[0x7c] + 0x10),*(undefined4 *)(iVar1 + 0x228));
        FUN_0053786c(local_8,(uint)&local_54);
        iVar5 = *(int *)(local_1c[2] + 0x1c) + -1;
        iVar1 = local_54.top;
        if (SBORROW4(*(int *)(local_1c[2] + 0x1c),1)) {
          thunk_FUN_00402874(local_1c[2]);
          iVar1 = extraout_ECX;
          iVar5 = extraout_EDX;
        }
        FUN_0041cad0((int *)local_8[0x7c],iVar5,iVar1);
        FUN_0053786c(local_8,(uint)&local_54);
        iVar5 = *(int *)(local_1c[2] + 0x1c) + -1;
        iVar1 = local_54.bottom;
        if (SBORROW4(*(int *)(local_1c[2] + 0x1c),1)) {
          thunk_FUN_00402874(local_1c[2]);
          iVar1 = extraout_ECX_00;
          iVar5 = extraout_EDX_00;
        }
        FUN_0041ca70((int *)local_8[0x7c],iVar5,iVar1);
      }
      iVar1 = FUN_00537750(local_8);
      if (*(char *)(iVar1 + 0x2d8) == '\x03') {
        piVar2 = (int *)FUN_00537750(local_8);
        piVar2 = (int *)FUN_00538b6c(piVar2);
        iVar1 = FUN_00537750(local_8);
        FUN_00493768(*(int **)(iVar1 + 0x280),piVar2);
        local_1c[0] = local_1c[2];
        local_1c[1] = 0;
        piVar2 = (int *)FUN_00537750(local_8);
        (**(code **)(*piVar2 + 200))(piVar2,local_8[0x7c],local_1c);
      }
      else if (local_10 == local_8[0x80]) {
        cVar11 = *(char *)(local_1c[2] + 4);
        iVar1 = *(int *)(local_1c[2] + 0x10);
        iVar5 = FUN_00537750(local_8);
        pcVar9 = *(char **)(iVar5 + 0x2dc);
        piVar2 = (int *)FUN_00537750(local_8);
        FUN_00522b0c(piVar2,(int *)local_8[0x7c],&local_44,pcVar9,iVar1,cVar11);
      }
      local_10 = local_10 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}

