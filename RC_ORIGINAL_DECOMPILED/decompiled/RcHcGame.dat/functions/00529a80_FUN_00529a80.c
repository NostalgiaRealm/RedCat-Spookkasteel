/*
 * FUN_00529a80 at 00529a80
 * undefined FUN_00529a80(void)
 * Address ranges: 00529a80-00529c84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00529a80(int param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float local_8;
  
  DVar2 = timeGetTime();
  local_8 = *(float *)(param_1 + 0x7c);
  if (local_8 != (float)*(int *)(param_1 + 0x80)) {
    do {
      if ((*(char *)((int)local_8 + 0x28) == '\0') ||
         (iVar3 = FUN_00484d70(DVar2,*(undefined4 *)((int)local_8 + 0x24)), iVar3 < 0x1389)) {
        local_8 = (float)((int)local_8 + 0x2c);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x80);
        fVar10 = local_8;
        while (fVar10 = (float)((int)fVar10 + 0x2c), fVar10 != (float)iVar3) {
          FUN_005375b0(fVar10);
        }
        puVar1 = *(undefined4 **)(param_1 + 0x80);
        for (puVar6 = puVar1 + -0xb; puVar6 != puVar1; puVar6 = puVar6 + 0xb) {
          (**(code **)*puVar6)(0);
        }
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -0x2c;
      }
    } while (local_8 != (float)*(int *)(param_1 + 0x80));
  }
  iVar4 = FUN_00519ef0();
  iVar3 = *(int *)(iVar4 + 100);
  if (iVar3 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar3;
  }
  if ((iVar3 == 0) && (*(int *)(param_1 + 0xa8) != 0)) {
    iVar3 = *(int *)(param_1 + 0x7c);
    iVar4 = 0;
    local_8 = 0.53333336;
    if (iVar3 != *(int *)(param_1 + 0x80)) {
      iVar7 = iVar3 + 0x14;
      while (iVar4 < 8) {
        if (*(int *)(param_1 + 0xa8) != 0) {
          uVar12 = 0x437f0000;
          uVar13 = 0x437f0000;
          uVar14 = 0x437f0000;
          uVar15 = 0x437f0000;
          iVar9 = iVar7;
          fVar11 = local_8;
          FUN_00491700(iVar7,local_8,0x437f0000,0x437f0000,0x437f0000,0x437f0000);
          fVar8 = (float10)FUN_004b21b0(iVar9);
          fVar10 = (float)(((float10)1.0 - fVar8) * (float10)0.5);
          iVar9 = iVar7;
          FUN_00491700(iVar7,fVar10);
          FUN_004b1150(iVar9,fVar10,fVar11,uVar12,uVar13,uVar14,uVar15);
          iVar9 = iVar7;
          FUN_00491700(iVar7);
          fVar8 = (float10)FUN_004b1fc0(iVar9);
          local_8 = (float)(fVar8 + (float10)local_8);
        }
        *(undefined1 *)(iVar7 + 0x14) = 1;
        iVar3 = iVar3 + 0x2c;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0x2c;
        if (iVar3 == *(int *)(param_1 + 0x80)) {
          return;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x7c);
    if (iVar3 != *(int *)(param_1 + 0x80)) {
      iVar4 = 0x24;
      do {
        if (0x83 < iVar4) {
          return;
        }
        if (DAT_006c8de0 == 0) {
          FUN_0055b280();
        }
        FUN_005600c0(0x14,iVar4,iVar3 + 0x14,1);
        *(undefined1 *)(iVar3 + 0x28) = 1;
        iVar3 = iVar3 + 0x2c;
        iVar4 = iVar4 + 0xc;
      } while (iVar3 != *(int *)(param_1 + 0x80));
    }
  }
  return;
}

