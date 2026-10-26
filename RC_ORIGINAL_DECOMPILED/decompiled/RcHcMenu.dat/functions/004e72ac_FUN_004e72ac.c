/*
 * FUN_004e72ac at 004e72ac
 * undefined __register FUN_004e72ac(int * param_1, int * param_2)
 * Address ranges: 004e72ac-004e74f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004e72ac(int *param_1,int *param_2)

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
  float10 in_ST2;
  undefined4 *local_154;
  byte *local_150;
  int *local_14c;
  int local_148;
  undefined1 local_144 [4];
  byte local_140 [256];
  undefined4 *local_40;
  byte *local_3c;
  int *local_38;
  int local_34 [2];
  undefined4 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 *puVar13;
  
  iVar6 = 0x2a;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar13 = (undefined4 *)&LAB_004e74f7;
  piVar12 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffe8;
  cVar1 = (**(code **)(*param_2 + 0x50))();
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_004e715c);
    (**(code **)(*piVar2 + 0x70))();
    puVar7 = puVar13;
    piVar5 = param_2;
    if (in_ST0 < *(float10 *)((int)param_1 + 0x3a)) {
      FUN_004966b4(piVar2,local_34 + 1);
      iVar6 = FUN_004e7ab8((int)piVar2);
      FUN_00409804(*(undefined **)(iVar6 + 0x24),local_34);
      in_ST1 = in_ST2;
      FUN_004e724c();
      FUN_0040a970((int *)&local_38);
      piVar12 = (int *)CONCAT31((int3)((uint)piVar12 >> 8),0xb);
      uVar8 = SUB41(&stack0xffffffd4,0);
      uVar9 = (undefined1)((uint)&stack0xffffffd4 >> 8);
      uVar10 = (undefined2)((uint)&stack0xffffffd4 >> 0x10);
      FUN_00406a48(&PTR_DAT_004e71e0,(int *)&local_3c);
      FUN_0040a894(local_3c,CONCAT22(uVar10,CONCAT11(uVar9,uVar8)),2,local_38);
      pcVar11 = "DoValidate";
      uVar8 = SUB41(puVar13,0);
      uVar9 = (undefined1)((uint)puVar13 >> 8);
      uVar10 = (undefined2)((uint)puVar13 >> 0x10);
      puVar7 = puVar13;
      piVar3 = (int *)FUN_00495ee0((int)param_2);
      local_34[1] = 0x4e73a9;
      piVar5 = param_2;
      FUN_00402fe0(*param_1,local_140);
      local_34[1] = 0x4e73b7;
      FUN_00403fd4((int *)&local_40,local_140);
      local_34[1] = 0x4e73c6;
      uVar4 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',local_40,(int)param_2,piVar3,puVar13,
                           CONCAT22(uVar10,CONCAT11(uVar9,uVar8)),(undefined4 *)pcVar11);
      local_34[1] = 0x4e73cb;
      FUN_0040382c(uVar4);
    }
    (**(code **)(*piVar2 + 0x70))();
    if (*(float10 *)(param_1 + 0xc) < in_ST1) {
      FUN_004966b4(piVar2,local_144);
      iVar6 = FUN_004e7ab8((int)piVar2);
      FUN_00409804(*(undefined **)(iVar6 + 0x24),&local_148);
      FUN_004e7230();
      FUN_0040a970((int *)&local_14c);
      uVar8 = SUB41(&stack0xffffffd4,0);
      uVar9 = (undefined1)((uint)&stack0xffffffd4 >> 8);
      uVar10 = (undefined2)((uint)&stack0xffffffd4 >> 0x10);
      FUN_00406a48((undefined4 *)&LAB_004e71e8,(int *)&local_150);
      FUN_0040a894(local_150,CONCAT22(uVar10,CONCAT11(uVar9,uVar8)),2,local_14c);
      pcVar11 = "DoValidate";
      uVar8 = SUB41(puVar7,0);
      uVar9 = (undefined1)((uint)puVar7 >> 8);
      uVar10 = (undefined2)((uint)puVar7 >> 0x10);
      piVar12 = piVar5;
      piVar5 = (int *)FUN_00495ee0((int)piVar5);
      local_34[1] = 0x4e749c;
      FUN_00402fe0(*param_1,local_140);
      local_34[1] = 0x4e74ad;
      FUN_00403fd4((int *)&local_154,local_140);
      local_34[1] = 0x4e74bf;
      uVar4 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',local_154,(int)piVar12,piVar5,puVar7,
                           CONCAT22(uVar10,CONCAT11(uVar9,uVar8)),(undefined4 *)pcVar11);
      local_34[1] = 0x4e74c4;
      FUN_0040382c(uVar4);
    }
  }
  *in_FS_OFFSET = (int)piVar12;
  FUN_00403dd4((int *)&local_154,5);
  FUN_00403dd4((int *)&local_40,5);
  FUN_00403db0((int *)&stack0xffffffec);
  return;
}

