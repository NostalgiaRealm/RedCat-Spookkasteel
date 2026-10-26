/*
 * FUN_0047244c at 0047244c
 * undefined __register FUN_0047244c(undefined4 param_1, int * param_2, double * param_3, char param_4, VARIANTARG * param_5)
 * Address ranges: 0047244c-004725bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 42 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 42 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_0047244c(undefined4 param_1,int *param_2,double *param_3,char param_4,VARIANTARG *param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  byte *local_1c;
  int local_18;
  undefined8 local_14;
  ushort local_a;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = (byte *)0x0;
  puStack_2c = &LAB_004725c0;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  cVar1 = (char)param_2[0xd];
  local_8 = param_2;
  if (cVar1 == '\b') {
    if (param_4 == '\0') {
      uVar3 = FUN_00466f2c((byte *)param_3,(longlong *)param_5);
      if ((char)uVar3 == '\0') {
        FUN_004692f8((int)local_8,&local_18);
        local_14._0_4_ = local_18;
        local_14._4_4_ = CONCAT31(local_14._5_3_,0xb);
        puVar6 = &local_14;
        uVar5 = 0;
        FUN_00406a48((undefined4 *)PTR_PTR_00572150,(int *)&local_1c);
        uVar5 = FUN_0040cf28((int)&DAT_00408fb4,'\x01',local_1c,uVar5,puVar6);
        FUN_0040382c(uVar5);
      }
    }
    else {
      uVar5 = *(undefined4 *)((int)param_3 + 4);
      uVar4 = *(undefined4 *)param_3;
      puStack_28 = &stack0xfffffffc;
      uVar3 = (**(code **)(*param_2 + 0x80))();
      FUN_00466ea0((byte *)param_5,0x20,uVar3,CONCAT44(uVar5,uVar4));
    }
  }
  else {
    bVar2 = cVar1 - 9;
    if (bVar2 < 3) {
      if (param_4 == '\0') {
        puStack_28 = &stack0xfffffffc;
        FUN_00472230(cVar1,param_3,param_3);
        *(double *)&param_5->n1 = (double)in_ST0;
      }
      else {
        puStack_28 = &stack0xfffffffc;
        FUN_004722bc(cVar1,(double *)&local_14,param_3,*(undefined4 *)param_3,
                     *(undefined4 *)((int)param_3 + 4));
        *(int *)&param_5->n1 = (int)local_14;
        (param_5->n1).decVal.Hi32 = local_14._4_4_;
      }
    }
    else if (bVar2 == 3) {
      if (param_4 == '\0') {
        puStack_28 = &stack0xfffffffc;
        uVar3 = (**(code **)(*param_2 + 0x68))();
        FUN_00472304((undefined4 *)param_3,uVar3,param_5);
      }
      else {
        puStack_28 = &stack0xfffffffc;
        FUN_004723bc((int)param_3,(undefined4 *)param_5,&local_a,(int)&stack0xfffffffc);
      }
    }
    else if (bVar2 == 4) {
      if (param_4 == '\0') {
        puStack_28 = &stack0xfffffffc;
        FUN_00472304((undefined4 *)((int)param_3 + 2),(uint)*(ushort *)param_3,param_5);
      }
      else {
        puStack_28 = &stack0xfffffffc;
        FUN_004723bc((int)param_3,(undefined4 *)((int)&param_5->n1 + 2),(ushort *)param_5,
                     (int)&stack0xfffffffc);
      }
    }
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004725c7;
  puStack_2c = (undefined1 *)0x4725bf;
  FUN_00403dd4((int *)&local_1c,2);
  return;
}

