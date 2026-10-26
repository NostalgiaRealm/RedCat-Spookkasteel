/*
 * FUN_004e84d0 at 004e84d0
 * undefined __register FUN_004e84d0(int * param_1, int * param_2)
 * Address ranges: 004e84d0-004e873a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e84d0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 *local_154;
  byte *local_150;
  int local_14c;
  int local_148;
  undefined1 local_144 [4];
  byte local_140 [256];
  undefined4 *local_40;
  byte *local_3c;
  int local_38;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  iVar6 = 0x2a;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar11 = (undefined4 *)&LAB_004e873b;
  piVar10 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffe8;
  cVar1 = (**(code **)(*param_2 + 0x50))();
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_004e824c);
    (**(code **)(*piVar2 + 0x70))();
    puVar7 = puVar11;
    piVar5 = param_2;
    if (in_ST0 < *(float10 *)((int)param_1 + 0x3a) * (float10)10000.0) {
      FUN_004966b4(piVar2,&stack0xffffffd0);
      iVar6 = FUN_004e9110((int)piVar2);
      FUN_00409804(*(undefined **)(iVar6 + 0x24),(int *)&stack0xffffffcc);
      piVar5 = (int *)(longlong)ROUND(*(float10 *)((int)param_1 + 0x3a) * (float10)10000.0);
      FUN_004e83fc((int)param_1,piVar2,&local_38,piVar5);
      piVar10 = (int *)CONCAT31((int3)((uint)piVar10 >> 8),0xb);
      puVar8 = &stack0xffffffd4;
      FUN_00406a48(&PTR_DAT_004e82d4,(int *)&local_3c);
      FUN_0040a894(local_3c,puVar8,2,piVar5);
      puVar9 = puVar11;
      puVar7 = puVar11;
      piVar3 = (int *)FUN_00495ee0((int)param_2);
      local_38 = 0x4e85dd;
      piVar5 = param_2;
      FUN_00402fe0(*param_1,local_140);
      local_38 = 0x4e85eb;
      FUN_00403fd4((int *)&local_40,local_140);
      local_38 = 0x4e85fa;
      uVar4 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',local_40,(int)param_2,piVar3,puVar11,
                           (int)puVar9,(undefined4 *)"DoValidate");
      local_38 = 0x4e85ff;
      FUN_0040382c(uVar4);
    }
    (**(code **)(*piVar2 + 0x70))();
    if (*(float10 *)(param_1 + 0xc) * (float10)10000.0 < in_ST1) {
      FUN_004966b4(piVar2,local_144);
      iVar6 = FUN_004e9110((int)piVar2);
      FUN_00409804(*(undefined **)(iVar6 + 0x24),&local_148);
      piVar10 = (int *)(longlong)ROUND(*(float10 *)(param_1 + 0xc) * (float10)10000.0);
      FUN_004e83fc((int)param_1,piVar2,&local_14c,piVar10);
      puVar8 = &stack0xffffffd4;
      FUN_00406a48(&PTR_DAT_004e82dc,(int *)&local_150);
      FUN_0040a894(local_150,puVar8,2,piVar10);
      puVar11 = puVar7;
      piVar10 = piVar5;
      piVar5 = (int *)FUN_00495ee0((int)piVar5);
      local_38 = 0x4e86e0;
      FUN_00402fe0(*param_1,local_140);
      local_38 = 0x4e86f1;
      FUN_00403fd4((int *)&local_154,local_140);
      local_38 = 0x4e8703;
      uVar4 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',local_154,(int)piVar10,piVar5,puVar7,
                           (int)puVar11,(undefined4 *)"DoValidate");
      local_38 = 0x4e8708;
      FUN_0040382c(uVar4);
    }
  }
  *in_FS_OFFSET = (int)piVar10;
  FUN_00403dd4((int *)&local_154,5);
  FUN_00403dd4((int *)&local_40,5);
  FUN_00403db0((int *)&stack0xffffffec);
  return;
}

